class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int  n=nums.size();
        long sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }

        long left_sum=0;
        for(int i=0;i<n-1;i++)
        {
            left_sum=left_sum+nums[i];
            if(left_sum>=sum-left_sum)
            cnt++;
        }

        return cnt;
    }
};