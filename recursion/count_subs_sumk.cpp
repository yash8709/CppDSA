class Solution{
    public:
    int helper(int ind, vector<int>& ds, int sum , vector<int>& nums, int k){
        int n = nums.size();
        if(sum > k) return 0;
        if(ind == n){
            if(sum ==k && !ds.empty()){
                return 1;
            }
            return 0;
        }
        ds.push_back(nums[ind]);
        int take = helper(ind + 1, ds, sum + nums[ind], nums, k);
        ds.pop_back();
        int nottake = helper(ind + 1, ds, sum , nums , k);
        return take + nottake;
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    vector<int>ds;
        return helper(0,ds,0, nums,k);
        
    }
};


// chec if sum == k Variant 
class Solution {
  public:
  bool helper(int ind , vector<int>& ds, int sum ,vector<int>& arr, int k){
      int n = arr.size();
      if(sum > k) return false;
      if(ind == n){
          if(sum == k && !ds.empty()){
              return true;
          }
          return false;
      }
      
      ds.push_back(arr[ind]);
      bool take = helper(ind + 1, ds, sum + arr[ind], arr, k);
      if(take == true){
          return true;
      }
      ds.pop_back();
      bool nottake = helper(ind + 1, ds, sum , arr, k);
      if(nottake == true){
          return true;
      }
      return false;
  }
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        vector<int> ds;
        
        return helper(0, ds, 0 , arr, k);
        
    }
};

// NOTe- i am maintaing a notes / blogs like tuf word file for notes , so check that for notees and dry run