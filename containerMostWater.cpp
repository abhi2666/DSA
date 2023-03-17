/*
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7].
In this case, the max area of water (blue section) the container can contain is 49.

Area = width * length  --> because it will always form a rectangle
Area = (j - i) * min(height[i], height[j]);

Approach --> 1 - we can use brute force method to find all the containers that will form
and then just simply find the max area out of all using nested loop.

Approach --> 2 - we can use two pointers from start and end.. we will move towards center
--> always move the pointer which is pointing to lower value..after moving calculate the 
area and replace with max area if its greater.
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int max_area = INT_MIN;
        int curr_area = INT_MIN;

        while(low <= high)
        {
            curr_area = (high - low) * min(height[high], height[low]);
            if(curr_area > max_area)
            {
                max_area = curr_area;
            }
            if(height[low] < height[high])
            {
                low++;
            }
            else if(height[low] > height[high])
            {
                high--;
            }
        }

        return max_area;

    }
};