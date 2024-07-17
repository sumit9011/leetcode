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
    void createMapping(map<int,int>& nodeToIndex, int size, vector<int> inorder)
    {
        for(int i=0;i<size;i++)
        {
            nodeToIndex[inorder[i]]=i;
        }

    }


    TreeNode* solve(vector<int> inorder, vector<int> postorder,int & index,int InorderStart,int InorderEnd,map<int,int>& nodeToIndex,int size)
    {
        if(index <0 || InorderStart > InorderEnd)
        {
            return NULL;
        }

        int element=postorder[index--];
        TreeNode* root=new TreeNode(element);
        int pos=nodeToIndex[element];

        
        root->right=solve(inorder,postorder,index,pos+1,InorderEnd,nodeToIndex,size);
        root->left=solve(inorder,postorder,index,InorderStart,pos-1,nodeToIndex,size);

        return root;


    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int size=inorder.size();
        int postIndex=size-1;
        int InorderStart=0;
        int InorderEnd=size-1;
        map<int,int> nodeToIndex;
        createMapping(nodeToIndex,size,inorder);

        TreeNode* ans=solve(inorder,postorder,postIndex,InorderStart,InorderEnd,nodeToIndex,size);
        return ans;

        
    }
};