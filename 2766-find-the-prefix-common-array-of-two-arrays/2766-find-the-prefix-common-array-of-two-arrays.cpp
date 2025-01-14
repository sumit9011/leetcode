class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
        int n=A.size();
        vector<int> ans;
        vector<int> temp(n+1,0);
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            temp[A[i]]++;
            if(temp[A[i]]>=2)
            cnt++;

            temp[B[i]]++;
            if(temp[B[i]]>=2)
            cnt++;

            ans.push_back(cnt);

        }

        return ans;
    }
};