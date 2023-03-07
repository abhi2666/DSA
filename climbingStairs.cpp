/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb 
to the top ? 

Approach --> recursive style approach
*/

/*
Traditional Recusrion Solution -->

class Solution {

public:
    int ways = 0;
    int climbStairs(int n) {
        int res = climb(0, n);
        return res;
    }

    int climb(int sum, int n)
    {
        if(sum > n) return 0;
        if(sum == n) return 1;

        // else continue
        return climb(sum+1, n) + climb(sum+2, n);
    }

};

*/

// Dynamic Programming Optimised
class Solution {

public:
    int ways = 0;
    int climbStairs(int n) {
        vector<int> dp;
        int res = climb(0, n);
        return res;
    }

    int climb(int sum, int n, vector<int> &dp)
    {
        if(sum > n) return 0;
        if(sum == n) return 1;

        if(dp[sum] != 0) return dp[sum];
        // else continue
        return dp[sum] = climb(sum+1, n, dp) + climb(sum+2, n, dp);
    }

};
