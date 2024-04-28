class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=n1+n2;
        int * first=new int[n];
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                first[k++]=nums1[i++];
            }

            else
            {
                first[k++]=nums2[j++];
            }
        }

        while(i<n1)
        {
            first[k++]=nums1[i++];
        }

        while(j<n2)
        {
            first[k++]=nums2[j++];
        }

        double ans;
        if(n%2==0)
        ans=(first[(n/2)-1]+first[n/2])/2.0;   //if 2 is used-value gets truncated
        else
        ans=first[n/2];

        delete []first;

        return ans;

        
    }
};