class Solution
{
public:
    vector<int> subSum;
    void subsets(int idx, vector<int>&ans, vector<int>&arr, int n){

        if(idx == n)
        {
            // you have got a subset..now sum it 
            int sum = 0;
            for(int i : ans)
            {
                sum += i;
            }
            subSum.push_back(sum);
            return;
        }

        ans.push_back(arr[idx]);
        subsets(idx+1, subSum, ans, arr, n);
        ans.pop_back();
        subsets(idx+1, subSum, ans, arr, n);

    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        
        subsets(0, ans, arr, N);
        return subSum;
    }
};

// There is other method also but you can use this one..