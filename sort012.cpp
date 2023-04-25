// Sort the array of 0, 1 and 2 in-place without using in-built functions

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // using dutch national flag algorithm
        int low, mid, high;
        low = mid = 0;
        high = nums.size()-1;
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high--]);
            }
            else {
                mid++;
            }
        }
    }
};