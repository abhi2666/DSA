class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int formSum = (n * (n + 1)) /2;
        int totalSum = 0;
        for(int i = 0; i < n; i++)
        {
            totalSum += nums[i];
        }
        return abs(formSum - totalSum);
    }
};