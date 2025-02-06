class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {

        int n=player1.size();
        int val1=0;
        int val2=0;

        for(int i=0;i<n;i++)
        {
            if((i-1>=0 && player1[i-1]==10) || (i-2>=0 && player1[i-2]==10))
            {
                val1+=2*player1[i];
            }
            else val1+=player1[i];


            if((i-1>=0 && player2[i-1]==10) || (i-2>=0 && player2[i-2]==10))
            {
                val2+=2*player2[i];
            }
            else val2+=player2[i];

        }

        if(val1>val2) return 1;
        else if(val1<val2) return 2;
        else return 0;

    }
};