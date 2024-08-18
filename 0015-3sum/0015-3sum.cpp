class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;

            int left=i+1;
            int right=n-1;

            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    vector<int> temp={nums[i],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1])
                    left++;
                    while(left<right && nums[right]==nums[right+1])
                    right--;
                }

                else if(nums[i]+nums[left]+nums[right]<0)
                {
                    left++;
                }
                else
                {
                    right--;
                }

            }
        }
        return ans;
    }
    
};