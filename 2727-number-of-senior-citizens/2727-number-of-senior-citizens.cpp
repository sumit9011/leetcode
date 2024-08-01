class Solution {
public:
    int countSeniors(vector<string>& details) {
        int size=details.size();
        int cnt=0;

        for(int i=0;i<size;i++)
        {
            string temp=details[i];
            int num=((temp[11]-'0')*10) + (temp[12]-'0');
            if(num>60) cnt++;
           
        }

        return cnt;
    }
};