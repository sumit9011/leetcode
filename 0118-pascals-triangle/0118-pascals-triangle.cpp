class Solution {
public:

    //formula to find number at particular row and col = nCr  where n=row-1  & r=col-1

    int nCr(int n, int r)
    {
        long long int res=1;
        for(int i=0;i<r;i++)
        {
            res=res*(n-i);
            res=res/(i+1);
        }

        return res;
    }

    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;

        for(int row=1;row<=numRows;row++)
        {
            vector<int> temp;

            for(int col=1;col<=row;col++)
            {
                int ans=nCr(row-1,col-1);
                temp.push_back(ans);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};