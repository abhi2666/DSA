class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;

        traverse(root, ans);
    }

    void traverse(TreeNode *root, vector<int> &ans)
    {
        // left , root , right
        traverse(root->left, ans);
        ans.push_back(root->val);
        traverse(root->right, ans);
    }
};