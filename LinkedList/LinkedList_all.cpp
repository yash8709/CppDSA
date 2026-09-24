#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    Node(Node *head, int val)
    {
        data = val;
        next = head;
    }
};

// Insert at end
Node *insert(Node *head, int x)
{
    Node *newNode = new Node(x);
    if (head == nullptr)
    {
        return newNode;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node *print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    return head;
}

Node *DeleteatK(Node *head, int k)
{
    if (head == nullptr)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    int cnt = 0;
    Node *prev = nullptr;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = temp->next;
            delete (temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *Delete_el(Node *head, int el)
{
    if (head == nullptr)
        return head;
    if (head->data == el)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }

    Node *prev = nullptr;
    Node *temp = head;
    while (temp != nullptr)
    {

        if (temp->data == el)
        {
            prev->next = temp->next;
            delete (temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *Insertathead(Node *head, int x)
{
    Node *temp = new Node(head, x);
    return temp;
}
Node *Insertattail(Node *head, int val)
{
    Node *temp= head;
    while(temp->next != nullptr){
        temp= temp->next;
    }
    Node *newNode= new Node(val);
    temp->next = newNode;
    return head;
}
Node *InsertatK(Node* head ,int el, int k){
    if(head == nullptr){
        if(k==1) return new Node(el);
        else return NULL;
    }
    if(k==1){
        return new Node (head, el);
    }
    int cnt =0;
    Node *temp = head;
    while(temp != nullptr){
        cnt++;
        if(cnt == k-1){
            Node *newNode = new Node(el);
            newNode->next = temp->next;
            temp->next =newNode;
            return head;

        }
        temp= temp->next;
    }
}
Node *Insertbefore_el(Node* head ,int el, int val){
    if(head == nullptr){
     return NULL;
    }
    if(head->data == el){
        return new Node (head, el);
    }
    Node *temp = head;
    while(temp->next != nullptr){
        if(temp->next->data == el){
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next =newNode;
            return head;
        }
        temp= temp->next;
    }
}



int main()
{
    Node *head = nullptr;

    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    cout << "Original List : ";
    print(head);

    // int k;
    // cout << "Enter k : ";
    // cin >> k;
    // int el;
    // cout << "Enter el : ";
    // cin >> el;

    // // head = DeleteatK(head, k);
    // head = Delete_el(head, el);

    // cout << "After Deletion : ";
    // print(head);

    // head = Insertathead(head, 100);
    // cout << "After Insertion at head : "<< endl;
    // head = Insertattail(head, 200);
    // cout << "After Insertion at tail : " << endl;
   
    cout << "After Insertion at K : " << endl;
    Insertbefore_el(head, 30, 25);
    print(head);
    return 0;
}
