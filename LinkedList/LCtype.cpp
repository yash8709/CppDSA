
//   Definition for singly-linked list.
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *findmid(ListNode *head)
  {
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast != nullptr)
    {
      slow = slow->next;
      fast = fast->next->next;
    }
    return slow;
  }
  ListNode *divideLL(ListNode *head)
  {
    if (head == nullptr && head->next == nullptr)
    {
      return head;
    }
    ListNode *mid = findmid(head);
    ListNode *right = mid->next;
    mid->next = nullptr;
    ListNode *left = head;
    left = divideLL(left);
    right = divideLL(right);

    mergesortLL(left, right);
  }
  ListNode *mergesortLL(ListNode *list1, ListNode *list2)
  {
    ListNode *dummynode = new ListNode(-1);
    ListNode *temp = dummynode;
    while (list1 != nullptr && list2 != nullptr)
    {
      if (list1->val > list2->val)
      {
        temp->next = list1;
        list1 = list1->next;
      }
      else
      {
        temp->next = list2;
        list2 = list2->next;
      }
      temp = temp->next;
    }
    if (list1 != nullptr)
    {
      temp->next = list1;
      list1 = list1->next;
    }
    if(list2 != nullptr){
      temp->next = list2;
      list2 = list2->next;
    }
    return dummynode->next;
  }
};