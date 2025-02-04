class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int i=0;
        int ans=nums[0];

        while(i<nums.size()-1)
        {
            int sum=nums[i];
            while(i<nums.size()-1 && nums[i]<nums[i+1])
            {
                sum+=nums[i+1];
                i++;
            }

            ans=max(ans,sum);
            i++;
        }

        return ans;
    }
};