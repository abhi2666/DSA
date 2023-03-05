/*
You have given mxn matix
start --> (0, 0) and end --> (m, n)
You have to find all the paths from start to end

sample -->

Input Format: m = 2, n= 2
Output: 2
*/

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        int ans = findPaths(0, 0, m, n, dp);
        return ans;
    }

    int findPaths(int i, int j, int m, int n, vector<vector<int>> &dp)
    {
        if (i == (m - 1) && j == (n - 1))
            return 1;
        if (i >= m || j >= n)
            return 0;
        if (dp[i][j] != 0)
            return dp[i][j];
        else
            return dp[i][j] = findPaths(i + 1, j, m, n, dp) + findPaths(i, j + 1, m, n, dp);
    }
};