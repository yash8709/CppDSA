
 //BRUTE FORCE SOLUTION
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp = head;
        vector<int>ans;
        while(temp != nullptr){
            ans.push_back(temp->val);
            temp = temp->next;
        }
        int i =0;
        while( i < ans.size()){
            if(i + k <= ans.size()){
                reverse(ans.begin() + i, ans.begin() + i+k);
            }
            i+=k;
        }
        temp = head;
        i=0;
        while(temp != nullptr){
            temp->val = ans[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};