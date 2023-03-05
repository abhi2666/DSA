/*
return triplets with sum = 0
*/
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if(nums.size() < 3) return ans;
        int i = 0, j, k;
        while (i < nums.size() - 2)
        {
            // before moving we have to check if i is not a duplicate
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                j = i + 1;
                k = nums.size() - 1;
                while (j < k)
                {
                    int sum = nums[i] + nums[j] + nums[k];
                    if (sum == 0)
                    {
                        vector<int> vect;
                        vect.push_back(nums[i]);
                        vect.push_back(nums[j]);
                        vect.push_back(nums[k]);
                        ans.push_back(vect);

                        // to avoid any duplicates we can simply move j and k
                        while (j < k && nums[j] == nums[j + 1])
                            j++;
                        while (j < k && nums[k] == nums[k - 1])
                            k--;

                        j++; k--;
                    }
                    else if (sum > 0)
                    {
                        k--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            i++;
        }
        return ans;
    }
};