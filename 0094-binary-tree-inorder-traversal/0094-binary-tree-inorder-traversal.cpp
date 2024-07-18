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
    vector<int> inorderTraversal(TreeNode* root) {
        
            //morris traversal

        vector<int> ans;

        if(root==NULL)
        return ans;

        TreeNode* curr=root;

        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                ans.push_back(curr->val);
                curr=curr->right;
            }

            else
            {
                //step 1 : find predecessor node of curr

                TreeNode* pre=curr->left;
                while(pre->right!=NULL && pre->right!=curr)
                {
                    pre=pre->right;
                }


                //step 2 : if pred->right==NULL
                if(pre->right==NULL)
                {
                    pre->right=curr;
                    curr=curr->left;
                }

                //step 3 : if pred->right==curr
                else
                {
                    pre->right=NULL;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }

        return ans;
    }
};