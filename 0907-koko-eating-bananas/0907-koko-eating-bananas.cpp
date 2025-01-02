int find_max(vector<int>& piles)
{
    int ans=INT_MIN;
    for(int i=0;i<piles.size();i++)
    {
       ans=max(ans,piles[i]); 
    }
    return ans;
}

//return 1 if eqal
//returns 0 if less than
// returns 2 if more than

int func(int mid,vector<int>& piles, int h)
{
    int speed=mid;
    int hours=0;
    for(int i=0;i<piles.size();i++)
    {
        hours=hours+((piles[i]/mid));
        if(piles[i]%mid!=0)
        hours++;

        if(hours>h) return 2;
    }

    if(hours==h) return 1;
    else return 0;
}


class Solution {

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low=1;
        int high=find_max(piles);
        int ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;
            cout<<mid<<" ";

            if(func(mid,piles,h)==1 || func(mid,piles,h)==0)
            {
                ans=mid;
                high=mid-1;
            }

            else if(func(mid,piles,h)==2)
            {
                low=mid+1;
            }

        }

        return ans;
    }
};