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
 *
 *
 * Level order Traversal means that you are accessing elements level by level
 * This can be done easily using queue
 * --> you have to just put node into queue, take that element out and put its left and right into queue
 * --> Repeat this and you will get your result
 */
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;

        queue<TreeNode *> q; // because it will store the nodes
        q.push(root);
        int size = 0;
        while (!q.empty())
        {
            size = q.size();
            vector<int> temp;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                
                // now put its neighbour into queue
                if (node->left != NULL)
                {
                    q.push(node->left);
                }
                if (node->right != NULL)
                {
                    q.push(node->right);
                }
                temp.push_back(node->val);
            }
            ans.push_back(temp);
        }
    }
};