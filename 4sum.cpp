/*
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

This can be done easily by fixing two pointers and using other two pointers for 
two pointer approach

Note : --> you have to only return unique quadruples..so you have to check for
their unqiueness too
*/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() <= 1) return ans;
        vector<vector<int>> ans;
        //sorting is mandatory
        sort(nums.begin(), nums.end());
        
        // we will fix two pointers.. but we will check if they are not repeating
        int i, j, k, l;
        for(i = 0; i < nums.size(); i++)
        {
            //skip all the duplicates of i
            
            for(j = i + 1; j < nums.size(); j++)
            {
                //before moving forward..skip duplicate elements pointed by j
                
                //two pointer approach
                k = j + 1;
                l = nums.size() - 1;
                while(k < l)
                {
                    int sum = nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum == target)
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});

                        // now if there is any repeat element remove it..
                        while(k < l && nums[k] == nums[k + 1]) k++;
                        while(l > k && nums[l] == nums[l - 1]) l--;
                    }
                    else if(sum > target)
                    {
                        //reduce it
                        l--;
                    }
                    else
                    {
                        k++;
                    }
                }

                while(j+1 < nums.size() && nums[j] == nums[j + 1]) j++;
            }
            while(i+1 < nums.size() && nums[i] == nums[i + 1]) i++;
        }
        return ans;
    }
};