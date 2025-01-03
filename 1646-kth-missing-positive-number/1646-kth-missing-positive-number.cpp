class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int x=1;
        int j=0;
        while(k>0)
        {
            if( j<arr.size() && x==arr[j])
            {
                x++;j++;        
            }

            else 
            {
                x++;
                k--;
            }
            
        }

        return x-1;
    }
};