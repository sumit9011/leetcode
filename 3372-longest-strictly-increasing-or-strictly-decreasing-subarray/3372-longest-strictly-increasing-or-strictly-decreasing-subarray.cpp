class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int ans=1;
        int cnt=1;
        int i=0;
    
        while(i<nums.size()-1)
        {
            while(i<nums.size()-1  && nums[i]<nums[i+1] )
            {
                cnt++;
                ans=max(ans,cnt);
                i++;
            }

            cnt=1;
           

            while(i<nums.size()-1 && nums[i]>nums[i+1])
            {
                cnt++;
                ans=max(ans,cnt);
                i++;
            }

            cnt=1;

            if(i<nums.size()-1 && nums[i]==nums[i+1])
            {
                cnt=1;
                i++;
            }
        }
        return ans;
        
    }
};