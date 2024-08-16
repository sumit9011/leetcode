class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        //Approach 2

        int n=nums.size();
        int prefix[n];

        prefix[0]=nums[0];

        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

        unordered_map<int,int> mp;
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(prefix[i]==k)
            cnt++;

            int rem= prefix[i]-k;
            if(mp.find(rem) != mp.end())
            {
                cnt= cnt + mp[rem];
            }

            mp[prefix[i]]++;
        }

        return cnt;   
    }
};