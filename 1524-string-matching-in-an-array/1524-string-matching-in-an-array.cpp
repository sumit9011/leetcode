class Solution {
public:

  
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        set<string> r_set;

        sort(words.begin(),words.end(),[](string &a, string &b){ return a.size() > b.size();});

        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
            {
                if(words[i].find(words[j])!=string::npos)
                {
                    r_set.insert(words[j]);
                }
            }
        
        }

        for(string a:r_set)
        {
            result.push_back(a);
        }
        
        return result;
    }
};