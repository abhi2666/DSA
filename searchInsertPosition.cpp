/*
Input: nums = [1,3,5,6], target = 5
Output: 2

Approach --> Binary Search
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        
        while(l < h)
        {
            int mid = (l + h) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] > target)
            {
                h = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
        return h + 1; 
    }
};