// Function to check palindrome using recursion 
class Solution {
  public:
    bool helper(string& s,int i, int j) {
        if(i>j){
            return true;
        }
        if(s[i] != s[j]){
            return false;
        }
        i++, j--;
        return helper(s,i,j);
    }
    bool isPalindrome(string& s){
        int i=0, j= s.size()-1;
        int ans = helper(s,i,j);
        return ans;
    }
};