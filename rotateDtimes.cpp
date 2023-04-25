// Given an integer array nums, rotate the array to the right by k steps, 
// where k is non-negative.
// class Solution {
// public:

//     void rotateRight(vector<int>&nums)
//     {
//         int temp = nums[nums.size()-1];
//         for(int i = nums.size()-2; i >= 0; i++)
//         {
//             nums[i + 1] = nums[i];
//         }
//         nums[0] = temp;
//     }

//     void rotate(vector<int>& nums, int k) {
//         while(k--)
//         {
//             rotateRight(nums);
//         }
//     }
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>temp;
        for(int i = 0; i < n; i++)
        {
            temp.push_back(nums[i]);
        }

        for(int i = 0; i < n; i++)
        {
            int idx = (i + k)%n; 
            nums[idx] = temp[i];
        }
        
    }
};


// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int>temp;

//         for(int i = (nums.size()-k); i < nums.size(); i++)
//         {
//             temp.push_back(nums[i]);
//         }

//         for(int i = 0; i < (nums.size()-k); i++)
//         {
//             temp.push_back(nums[i]);
//         }
//         nums.clear();
//         for(int i = 0; i < nums.size(); i++)
//         {
//             nums.push_back(temp[i]);
//         }
        
//     }
// };