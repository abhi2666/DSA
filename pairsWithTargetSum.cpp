/*
we have to find multiple pairs with given sum
We can use Binary Search
*/
#include <bits/stdc++.h>
using namespace std;

void find_pairs(vector<int> v, int target)
{
    // binary search
    int low = 0, high = v.size() - 1;
    while (low < high)
    {
        if (v[low] + v[high] == target)
        {
            cout<<v[low]<<" "<<v[high]<<endl;
        }

        if ((v[low] + v[high]) > target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
}

int main()
{

    vector<int> v = {2, 3, 4, -2, 6, 8, 9, 11};
    int target = 6;
    find_pairs(v, target);
    return 0;
}