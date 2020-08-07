class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
      for(int n:nums)
      {
        n=abs(n);
        if(nums[n-1]>0) nums[n-1]*=-1;
        else res.emplace_back(n);
       }

        return res;
    }
};
