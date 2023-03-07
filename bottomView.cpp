#include<bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val)
    {
        data = val;
        left = right = NULL;

    }

    void bottomView()
    {
        // now I don't have to pass root here

    }
};

int main()
{
    TreeNode* root = new TreeNode(1);
    TreeNode* first = new TreeNode(2);
    TreeNode* second = new TreeNode(3);
    root->left = first;
    root->right = second;

    root->bottomView(); //since root is an object of TreeNode class and is a pointer that is why '->' 
                        // is used


    return 0;
}   