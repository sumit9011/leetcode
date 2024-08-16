class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int maj=n/2;

        sort(nums.begin(),nums.end());

        int cnt=1;

        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            cnt++;

            else
            {
                if(cnt>maj)
                return nums[i-1];
                cnt=1;
            }

        }
         
        if(cnt>maj)
        return nums[n-1];     //for last element

        return -1;
    }
};