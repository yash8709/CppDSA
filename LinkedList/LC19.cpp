//   Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        int length = 0;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        if (n == length) {
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        int res = length - n;
        temp = head;
        while (temp != nullptr) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }
        ListNode* dlnode = temp->next;
         temp->next = temp->next->next;
        delete dlnode;
        return head;
    }
};