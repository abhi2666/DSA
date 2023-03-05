/*
majority element is an element which exist more than n/2 times in an array
Note :--> there can be only one majority element

Approach -> moore's Voting Algo

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, ele;
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                ele = nums[i];
            }
            
            if(ele == nums[i]) count++;
            else count--;
        }
        return ele;        
    }
};