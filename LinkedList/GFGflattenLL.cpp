/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};*/

class Solution {
  public:
  Node* mergeTwoLists(Node* list1, Node* list2) {
      if (list1 == nullptr) return list2;
      if (list2 == nullptr) return list1;

      Node* dummy = new Node(-1); 
      Node* temp = dummy;

      while (list1 != nullptr && list2 != nullptr) {
          if (list1->data <= list2->data) {
              temp->bottom = list1;
              temp = temp->bottom;
              list1 = list1->bottom;
          } else {
              temp->bottom = list2;
              temp = temp->bottom;
              list2 = list2->bottom;
          }
          temp->next = nullptr;
      }

      if (list1)
          temp->bottom = list1;
      if (list2)
          temp->bottom = list2;
    if(dummy ->bottom) dummy->bottom->next = nullptr;

      return dummy->bottom;
  }
    Node* flatten(Node* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        Node *mergedhead = flatten(head->next);
        return mergeTwoLists(head, mergedhead);
    }
};





// THIS GOT ME ERROR BCOZ GFG CONSIDERS A PRIORITY QUEUE APPROACH AS MORE OPTIMAL THAN THIS , SO THIS GIVES TLE