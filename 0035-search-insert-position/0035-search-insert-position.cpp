class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=mid=(left+right)/2;

        while(left<=right)
        {
            if(nums[mid]==target)
            return mid;

            else if(nums[mid]<target)
            left=mid+1;

            else if(nums[mid]>target)
            right=mid-1;

            mid=(left+right)/2;
        }
        return left;
    }
};