// rotate matrix 90 deg clockwise

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void rotate_matrix(vector<vector<int>> &mat)
{
  int size = mat.size();
  
  //transpose
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < i; j++)
    {
      swap(mat[i][j], mat[j][i]);
    }
  }

  //reverse 
  for(int i = 0; i < size; i++)
  {
    reverse(mat[i].begin(), mat[i].end());
  }

  //print
  for(int i = 0; i < size; i++)
  {
    for(int j = 0; j < size; j++)
    {
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }

}

int main()
{
  vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  
  rotate_matrix(mat);
  return 0;
}