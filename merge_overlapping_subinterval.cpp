#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

vector<vector<int>> overlapIntervals(vector<vector<int>> v)
{
    vector<vector<int>> res;
    int size = v.size();
    //sort the vector of vector
    sort(v.begin(), v.end());

    vector<int> temp = v[0];
    vector<int> t;
    for(int i = 1; i < size; i++)
    {
        if(temp[1] <= v[i][0])
        {
            //add both to new vect and push that vect into res
            t.push_back(temp[0]);
            t.push_back(max(temp[1], v[i][0]));
            temp = t;
        }
        else 
        {
            res.push_back(t);
            temp = t;
            t.clear();
        }
    }

    
    return res;
}

int main()
{
    vector<vector<int>> v = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};

    vector<vector<int>> res = overlapIntervals(v);
    return 0;
}