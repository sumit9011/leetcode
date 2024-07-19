class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {

        vector<int> ans;

        for(int i=0;i<matrix.size();i++)
        {
            int mini=INT_MAX;
            int maxi=INT_MIN;
            int col=-1;

            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]<mini)
                {
                    mini=matrix[i][j];
                    col=j;
                }
            }

            for(int i=0;i<matrix.size();i++)
            {
                if(matrix[i][col]>maxi)
                maxi=matrix[i][col];
            }

            if(maxi==mini)
            ans.push_back(maxi);
        }
       return ans; 
    }
};