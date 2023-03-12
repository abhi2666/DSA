/*
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

If the robber tries to rob 2 consecutive house or more, he will get caught..

My first tabulation code 
*/

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int dp[nums.size()];
//         for(int i = 0; i < nums.size(); i++) dp[i] = 0;
//         dp[0] = nums[0];
//         int i;
//         for(i = 1; i < nums.size(); i++)
//         {
//             //we can pick
//             int take = nums[i];
//             if(i > 1) { take += dp[i - 1];} //because so as to avoid out of bound problem
//             //we can leave 
//             int notTake = 0 + dp[i - 1];
//             dp[i] = max(take, notTake);
//         }
//         //your result will be stored in dp[i - 1];
//         return dp[i - 1];
//     }
// };

// since what we are looking for are the previous 2 values only (dp[i - 2] and dp[i - 1]) 
// so rather than haivng a whole dp array...what we can do is we can have only two variables and one variable which 
// will hold the current value..
class Solution{
public:
    int rob(vector<int> &nums)
    {
        int prev1, prev2 = 0, curr;
        prev1 = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            //pick the element
            int take = nums[i] + prev2;
            //leave it 
            int notTake = 0 + prev1;

            curr = max(take, notTake);
            prev2 = prev1;
            prev1 = c
        }
        
    }

};
