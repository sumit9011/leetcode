class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //approach-3 Moore's voting algo
        
        int cnt1=0;
        int el;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            if(cnt1==0)
            {
                el=nums[i];
                cnt1=1;
            }

            else if(nums[i]==el)
            cnt1++;

            else
            cnt1--;
        }

        //element stored in el can be or not be a majority element
        //hence check it

        
        int cnt2=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==el)
            cnt2++;
        }

        if(cnt2>(n/2)) return el;
        else return -1;
    }
};