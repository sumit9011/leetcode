class Solution {
public:

    int find_max(vector<int>& bloomDay)
    {
        int n=bloomDay.size();
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,bloomDay[i]);
        }

        return maxi;
    }


    bool calculate(vector<int> bloomDay, int m, int k,int mid)
    {
        int n=bloomDay.size();

        int boq=0;
        int flower=0;

        for(int i=0;i<n;i++)
        {
            if(mid>=bloomDay[i])
            {
                flower++;
                if(flower==k)
                {
                    boq++;
                    flower=0;
                }
            }
            else
                flower=0; 
        }


        return boq>=m;    

    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int low=0;
        int high=find_max(bloomDay);
        int ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            bool is_possible= calculate(bloomDay,m,k,mid);

            if(is_possible)
            {
                ans=mid;
                high=mid-1;
            }

            else
            {
                low=mid+1;
            }
        }

        return ans;
    }
};