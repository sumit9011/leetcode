class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //step 1 - create minHeap for first k elements
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<k;i++)
        {
            pq.push(nums[i]);
        }

        //step 2 - if top(root) < remaining elements

        for(int i=k;i<nums.size();i++)
        {
            if(pq.top() < nums[i])
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }

        // step 3 - return top

        return pq.top();
    }
};