#include <iostream>
using namespace std;

/// given an array find the only element that appears only one time
//naive approach --> using XOR
/*
 XOR of similar elements will give 0 
 XOR of an element with 0 will give that element

// int main()
// {
//     int a[] = {1,1,2,3,3,4,4,8,8};
//     int res = 0;
//     int size = sizeof(a)/sizeof(a[0]);
//     for(int i = 0; i < size; i++)
//     {
//         res  ^= a[i];
//     }
//     cout<<res<<endl;
//     return 0;
// }
*/

// Optimal Approach --> Binary Search
/*
In this we will find a breakpoint whose immediate right will be the element itself that we want 
and after that will have other elements that are twice

Approach -->
[1, 1, 2, 3, 3, 4, 4]

1. keep low to 0 and high to n - 2.. find mid and check if its left half or right half
{
{Left half means that first element comes in even index and second comes in odd.. ex --> [1, 1]}
{Right half means that first element --> odd index and second element --> even}

Can be checked easily using xor operator or even without xor operator
}

2. now apply the basic binary search
If it is right half shrink it

*/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size()-1;
        while(low < high)
        {
            int mid = (low + high)>>1;
            //check if its right half or left half and in either case..shrink that half
            //and find the breakpoint 
            if(nums[mid] == nums[mid^1])
            {
                //we are in right half
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return nums[low];
    }
};