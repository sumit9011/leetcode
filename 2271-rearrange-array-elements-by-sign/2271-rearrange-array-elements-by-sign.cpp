class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n=nums.size();
        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);

        }

        int s=0;
        int i=0;

        while(i<n)
        {
            nums[i]=pos[s];
            nums[i+1]=neg[s];

            i=i+2;
            s=s+1;
        }

        return nums;

    }
};