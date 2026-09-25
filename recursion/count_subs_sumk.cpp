class Solution{
    public:
    int helper(int ind, vector<int>& ds, int sum , vector<int>& nums, int k){
        int n = nums.size();
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
        return take + nottake;a
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    vector<int>ds;
        return helper(0,ds,0, nums,k);
        
    }
};