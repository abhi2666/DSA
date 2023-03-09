/*
Given a 2D matrix of size mxn..you have to search for an element and if does not exist 
return false else true.
*/

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         //we will start from top right 
//         int rows = matrix.size();
//         int coulumn = matrix[0].size();
//         int i = 0;
//         int j = column; 
//         while(i < rows && j >= 0)
//         {
//             if(matrix[i][j] == target)
//             {
//                 return true;
//             }
//             else if(matrix[i][j] > target)
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return false;
//     }
// };

/* more optimised solution would be to use binary search because -
first element of current row is greater than the last element of previous row simply means -
When matrix elements are stored in an array...they will form a sorted array(non-decreasing order).

To get the imaginary index for binary search -->
assume low = 0, high = (n*m - 1) and then mid = (low + high) / 2;

Since mid will give an imaginary index like 2, 3, 4 , etc., which is not there so you can do -

matrix[mid/column][mid%column] to get the value at that particular index.
Now you can easily apply binary search.
*/