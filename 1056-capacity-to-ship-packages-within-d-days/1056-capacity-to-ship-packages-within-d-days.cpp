class Solution {
public:
    int find_sum(vector<int>& weights)
    {
        int ans=0;
        for(int val:weights)
        {
            ans=ans+val;
        }
        return ans;
    }

    int calculate(vector<int>& weights, int mid)
    {
        int maxi=*max_element(weights.begin(),weights.end());

        if(maxi>mid)
        return INT_MAX;
        
        int days=0;
        int cnt=0;
        for(int val:weights)
        {
            if(cnt+val<=mid)
            {
                cnt=cnt+val;
            }
            else
            {
                days++;
                cnt=val;
            }
        }

        if(cnt<=mid)
        days++;

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int low=1;
        int high=find_sum(weights);
        int ans=-1;

        while(low<=high)
        {
    
            int mid=(low+high)/2;
            
            int days_required=calculate(weights,mid);
        
            if(days_required<=days)
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