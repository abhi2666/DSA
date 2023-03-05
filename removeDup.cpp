/*
Remove duplicate elements without changing the relative order of array
if k are the left unique elements then you should put them in the first half 
of the array and return k (representing the last unique element in array).
What you left after kth element doesn't give a shit !
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // array is sorted already
        //means similar element will be consecutive
        if(nums.empty()) return -1;
        int i = 0, j = 1;
        while(j < nums.size())
        {
            if(nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }

        return i+1;
    }
};