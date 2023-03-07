#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(TreeNode *root)
{
    if (root == NULL)
        return;

    // move left root right
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void leftview(TreeNode* root, int level, vector<int> &ds)
{
    // for leftview we can use reverse preorder -- root right left --
    if(root == NULL) return;

    if(ds.size() == level)
    {
        // put that element into the vector
        ds.push_back(root->data);
    }
    leftview(root->left, level+1, ds);
    leftview(root->right, level+1, ds);
}

void rightview(TreeNode* root, int level, vector<int> &ds)
{
    // for leftview we can use reverse preorder -- root right left --
    if(root == NULL) return;

    if(ds.size() == level)
    {
        // put that element into the vector
        ds.push_back(root->data);
    }
    leftview(root->right, level+1, ds);
    leftview(root->left, level+1, ds);
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // inorder(root);
    vector<int> ds;
    leftview(root, 0, ds);
    for(int i : ds)
    {
        cout<<i<<" ";
    }
    return 0;
}
