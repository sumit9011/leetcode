class Solution {
public:
    void solve(int temp,int n,vector<int>& ans)
    {
        if(temp>n)
            return;
        ans.push_back(temp);
        solve(temp*10,n,ans);
        if(temp % 10 !=9)
            solve(temp+1,n,ans);    
    }


    vector<int> lexicalOrder(int n) {
    
        //Approach-2

        vector<int> ans;
        solve(1,n,ans);
        return ans;
    }
};