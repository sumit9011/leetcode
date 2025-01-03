class Solution {
public:
    int find_max(vector<int>& nums)
    {
        int n=nums.size();
        int maxi=INT_MIN;

        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
        }
        return maxi;
    }

    int calculate(vector<int>& nums, int mid)
    {
        int ans=0;
        for(int a:nums)
        {
            ans=ans+ceil(double(a)/double(mid));
        }
        return ans;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=find_max(nums);
        int ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            int val=calculate(nums,mid);

            if(val<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;

    }
};