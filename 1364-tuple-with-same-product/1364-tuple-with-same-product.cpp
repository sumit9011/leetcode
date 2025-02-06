class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int product=nums[i]*nums[j];
                mp[product]++;
            }
        }


        for(auto it:mp)
        {
            int count=it.second;

            if(count>1)
            {
                ans+=(count*(count-1)/2)*8;   //one pair = 8 tuples
            }
        }

        return ans;
    }
};