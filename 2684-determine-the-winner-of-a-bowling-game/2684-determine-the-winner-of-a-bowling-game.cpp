class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
         //Approach 2

         int n=player1.size();
         int val1=0;
         int val2=0;

         bool bonus1_prev=false;
         bool bonus1_prev2=false;
         bool bonus2_prev=false;
         bool bonus2_prev2=false;

        for(int i=0;i<n;i++)
        {
            int multiplier1=(bonus1_prev || bonus1_prev2)?2:1;
            int multiplier2=(bonus2_prev || bonus2_prev2)?2:1;

            val1+=multiplier1* player1[i];
            val2+=multiplier2* player2[i];

            bonus1_prev2=bonus1_prev;
            bonus1_prev=(player1[i]==10);

            bonus2_prev2=bonus2_prev;
            bonus2_prev=(player2[i]==10);
        }

        if(val1>val2) return 1;
        else if(val2>val1) return 2;
        else return 0;

    }
};