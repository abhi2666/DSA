/*
Rotate image to 90 deg clockwise in-place(cannot use extra space)

Approach --> first transpose the matrix and then reverse each row of the matrix
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transpose
        int n = matrix.size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; i++)
            {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        //now reverse the matrix
        for(int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};