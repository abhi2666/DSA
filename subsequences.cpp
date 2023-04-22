// Program to get all the subsequences into a vector
// subsequence is collection of contiguous/non-contiguous elements in order
#include<iostream>
#include<vector>
using namespace std;

void subsequence(int idx, vector<int>&ans, vector<vector<int>>&res, vector<int>&vect)
{
    if(idx >= vect.size())
    {
        res.push_back(ans);
        return;
    }
    
    // you can pick the current element or you can leave it
    // pick it
    ans.push_back(vect[idx]);
    subsequence(idx+1, ans, res, vect);
    // do not pick the element...for that just remove the element 
    ans.pop_back();
    subsequence(idx+1, ans, res, vect);
}


vector<vector<int>> getSubsequences(vector<int>vect)
{
    vector<vector<int>> res;
    vector<int> ans;
    subsequence(0, ans, res, vect);
    return res;
}

int main()
{
    vector<int> vect = {3, 1, 2};

    vector<vector<int>>ans = getSubsequences(vect);
    cout<<"Subsequences are --> "<<endl;
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}