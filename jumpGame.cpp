/*
Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
*/

// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int n = nums.size();
//         int i = 0;
//         if(nums[i] == n) return true;
//         while(i < n-1)
//         {

//             int maxi = INT_MIN;
//             int max_idx = -1;
//             int k = nums[i], j = i+1;
//             while(k)
//             {
//                 if(maxi < nums[i])
//                 {
//                     maxi = nums[i];
//                     max_idx = j;
//                 }
//                 j++;
//                 k--;
//             }
//             i = max_idx;
//         }
//         if(i == n) return true;
//         else false;
//     }
// };

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dist = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(dist < i)
            {
                // means you can't reach the final index from the first index 
                return false;
            }
            dist = max(dist, i + nums[i]);
        }

        return true;
    }
};