/*
Find the maximum sum level wise possible in a binary tree

 Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; 
*/


class Solution{
  public:
    int maxLevelSum(Node* root) {

        queue<Node*> q;
        q.push(root);
        int curr, maxi = INT_MIN; // maxi value should be INT_MIN because your max can
                                       // a negative value lesser that -1
        while(!q.empty())
        {
            curr = 0;
            int s = q.size();
            for(int i = 0; i < s; i++)
            {
                //remove elements
                Node* n = q.front();
                curr += n->data;
                if(n->left != NULL) q.push(n->left);
                if(n->right != NULL) q.push(n->right);
                q.pop();
            }
            maxi = max(curr, maxi); 
        }

        return maxi;
    }
};