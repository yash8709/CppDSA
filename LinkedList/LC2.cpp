
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
    ListNode *addTwoNumbers(ListNode *head1, ListNode *head2)
    {
        ListNode *dummynode = new ListNode(-1);
        ListNode *t1 = head1;
        ListNode *t2 = head2;
        ListNode *curr = dummynode;
        int carry = 0;
        while (t1 != nullptr || t2 != nullptr)
        {
            int sum = carry;
            if (t1)
                sum += t1->val;
            if (t2)
                sum += t2->val;
            ListNode *newnode = new ListNode(sum % 10);
            carry = sum / 10;
            curr->next = newnode;
            curr = curr->next;

            if (t1)
                t1 = t1->next;
            if (t2)
                t2 = t2->next;
        }
        if (carry)
        {
            ListNode *newnode = new ListNode(carry);
            curr->next = newnode;
        }
        return dummynode->next;
    }
};