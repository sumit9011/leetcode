/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:


    void findInorder(TreeNode* root, vector<int> & ans)
    {
        if(root==NULL)
        return;

        findInorder(root->left,ans);
        ans.push_back(root->val);
        findInorder(root->right,ans);
    }

    TreeNode* constructTree(vector<int> & ans,int s,int e)
    {
        if(s>e)
        return NULL;

        int mid=(s+e)/2;

        TreeNode* root= new TreeNode(ans[mid]);
        root->left=constructTree(ans,s,mid-1);
        root->right=constructTree(ans,mid+1,e);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> ans;
        findInorder(root,ans);

        return constructTree(ans,0,ans.size()-1);
    }
};