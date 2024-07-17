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
    int findPos(vector<int> inorder,int element,int InStart,int InEnd)
    {
        for(int i=InStart;i<=InEnd;i++)
        {
            if(inorder[i]==element)
            return i;
        }
        return -1;
    }

    TreeNode* solve(vector<int> preorder,vector<int> inorder,int &index,int InStart,int InEnd,int size)
    {
        if(index>=size || InStart > InEnd)
        return NULL;

        int element=preorder[index++];
        TreeNode* root= new TreeNode(element);
        int position=findPos(inorder,element,InStart,InEnd);

        root->left=solve(preorder,inorder,index,InStart,position-1,size);
        root->right=solve(preorder,inorder,index,position+1,InEnd,size);

        return root;

    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int PreIndex=0;
        int InStart=0;
        int InEnd=preorder.size()-1;
        int size=preorder.size();
        TreeNode* ans = solve(preorder,inorder,PreIndex,InStart,InEnd,size);
        return ans;

        
    }
};