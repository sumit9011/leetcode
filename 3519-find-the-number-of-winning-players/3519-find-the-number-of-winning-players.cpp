class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        
        int size=pick.size();
        int i=0;
        map<int,int> mp;
        int ans=0;
        sort(pick.begin(),pick.end());

        while(i<size)
        {
            mp.clear();
            mp[pick[i][1]]++;

            while(i+1<size && pick[i][0]==pick[i+1][0])
            {
                mp[pick[i+1][1]]++;
                i++;
            }

            int player=pick[i][0];

            for(auto it:mp)
            {
                if(it.second>player)
                {
                ans++;
                break;
                }
            }

            i++;
        }

        return ans;
    }
};