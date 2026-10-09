class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        for (int i=0;i< nums.size() ;i++)
        {
            mpp[nums[i]]=i;
        }
        int n =nums.size();
        for ( int i=0 ;i<n ;i++)
        {
            int diff=target-nums[i];
            if (mpp.count(diff) && mpp[diff]!=i)
            return {i,mpp[diff]};
        }
        return {};
    }
};
