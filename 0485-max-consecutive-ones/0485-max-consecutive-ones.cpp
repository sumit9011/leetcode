class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int i=0;
        int cnt=0;

        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                cnt++;
                i++;
            }
            else
            {
                maxi=max(cnt,maxi);
                cnt=0;
                i++;
            }
        }

        maxi=max(cnt,maxi);                 //edge case (last index)
        return maxi;
    }
};