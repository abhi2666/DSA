/*
Find all the permutations

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; // will contain the final answer
        vector<int> ds; // will contain the intermediate results
        int freq[nums.size()] = {0};
        findPermu(nums, ans, ds, freq);

        return ans;
    }

    void findPermu(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds, int freq[])
    {
        if(ds.size() == nums.size())
        {
            //you have picked whatever is there.. you have got a permutation
            ans.push_back(ds);
            return;
        }

        // else you still have elements to pick
        // but you can only pic an element if its not already picked
        for(int i = 0; i < nums.size(); i++)
        {
            if(freq[i] == 0)
            {
                //pick
                ds.push_back(nums[i]);
                freq[i] = 1;
                findPermu(nums, ans, ds, freq); //now move for next element
                // after invoking function
                freq[i] = 0;
                ds.pop_back();
            }

        }
    }
};