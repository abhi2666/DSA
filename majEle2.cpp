/*
Find the majority element which occurs n/3 times in the array
Note :--> there can be at max 2 element possible with more than n/3 frequency
we will use this thing in our advantage

Approach --> Boyer moore voting Algo
-> create 2 count var and 2 num var and look for suspected 2 element
with freq. greater than n/3.
-> Now again check if both or one of them is majority or not

*/

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> res; // will contain the set of final element(s)
        int num1 = -1, num2 = -1, c1 = 0, c2 = 0;
        int s = nums.size() / 3;
        for (int i = 0; i < nums.size(); i++)
        {
            if (num1 == nums[i])c1++;
            else if (num2 == nums[i])c2++;
            else if (c1 == 0)
            {
                num1 = nums[i];
                c1 = 1;
            }
            else if (c2 == 0)
            {
                num2 = nums[i];
                c2 = 1;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        // now check the suspected 2 elements
        c1 = c2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == num1)c1++;
            else if(nums[i] == num2)c2++;
        }
        if(c1 > s) res.push_back(num1);
        if(c2 > s) res.push_back(num2);

        return res;
    }
};