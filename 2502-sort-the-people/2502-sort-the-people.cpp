class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

            vector<string> ans;
            map<int,string> mapping;
            int size=names.size();
            for(int i=0;i<size;i++)
            mapping[heights[i]]=names[i];

            sort(heights.begin(),heights.end());

            for(int i=size-1;i>=0;i--)
            {
                ans.push_back(mapping[heights[i]]);
            }

            return ans;

    }
};