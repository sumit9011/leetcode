class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Approach 3

        int cnt1=0;
        int cnt2=0;
        int el1,el2=INT_MIN;

        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(cnt1==0 && nums[i]!=el2)
            {
                el1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 && nums[i]!=el1)
            {
                el2=nums[i];
                cnt2++;
            }

            else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;

            else
            {
                cnt1--;
                cnt2--;
            }
        }

        vector<int> ans;

        cnt1=0;
        cnt2=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==el1) cnt1++;
            if(nums[i]==el2) cnt2++;
        }

        if(cnt1>(n/3)) ans.push_back(el1);
        if(cnt2>(n/3)) ans.push_back(el2);

        return ans;
    }
};