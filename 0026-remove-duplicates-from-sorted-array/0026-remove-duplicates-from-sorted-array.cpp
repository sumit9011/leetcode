class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //simple approach - using hash set

        set<int> s;

        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);

        int j=0;
        int k=s.size();

        for(int x:s)
            nums[j++]=x;

        return k;    
    }
};