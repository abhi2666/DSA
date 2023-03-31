class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // this can be done using two pointers or map
        // we will use two pointer approach
        vector<int> ans;
        if(nums.size() < 1) return ans;
        int lw = 0, hg = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(lw < hg)
        {
            if(nums[lw] + nums[hg] == target)
            {
                // put the indexes into vector
                ans.push_back(lw);
                ans.push_back(hg);
                return ans;
            }
            else if(nums[lw] + nums[hg] > target)
            {
                //reduce the sum
                hg--;
            }
            else 
            {
                //increase the sum
                lw++;
            }
        }
        return ans;
    }
};