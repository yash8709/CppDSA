#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

Node *arrtoDLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node *print(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return head;
}

Node *Deleteathead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
Node *Deleteattail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}
Node *Deleteatk(Node *head, int k)
{
    if(k <=0 ){
        return head;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    if(temp == nullptr){
            return head;
        }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {
        delete (temp);
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return Deleteathead(head);
    }
    else if (front == nullptr)
    {
        return Deleteattail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete (temp);
    return head;
}
void DeleteNode(Node * temp){
    Node * prev = temp->back;
    Node * front = temp->next;

    if(front == nullptr){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    delete(temp);
}
Node *Insertbeforehead(Node * head, int val){
    Node * newNode = new Node( val, head, nullptr);
    head->back = newNode;
    return newNode;
}
Node *Inseretbeforetail(Node *head, int val){
    if(head->next == nullptr){
        return Insertbeforehead(head, val);
    }
    Node *temp= head;
    while(temp->next != nullptr){
        temp= temp->next;
    }
    Node *prev = temp->back;

    Node * newNode = new Node( val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
Node * InsertbeforeK(Node * head, int k, int val){
    Node *temp= head;
    int cnt =0;
    while(temp!= nullptr){
        cnt++;
        if(cnt ==k) break;
        temp= temp->next;
    }
    Node * prev =temp->back;
    Node *newNode =new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;

}
Node * Insertbeforenode1(Node * head, int nodeval, int val){
    Node * temp = head;
    while(temp!= nullptr){
        if(temp->data == nodeval){
            break;
        }
        temp = temp->next;
    }
    Node * prev =temp->back;
    Node *newNode =new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
void * Insertbeforenode2(Node * node, int val){
    Node * prev =node->back;
    Node *newNode =new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
    
}
int main()
{
    vector<int> arr = {3, 2, 5, 8, 7};
    Node *head = arrtoDLL(arr);
    print(head);
    cout << endl;
    // head = Deleteathead(head);
    // print(head);
    // head= Deleteattail(head);
    // head = Deleteatk(head, 8);
    // DeleteNode(head->next);
    // head = Insertbeforehead(head, 50);
    // head= Inseretbeforetail(head, 100);
    // head= InsertbeforeK(head, 5, 45);
    // head = Insertbeforenode1(head, 5, 50);
   Insertbeforenode2(head->next, 45);
    print(head);
    return 0;
}