#include <iostream>
#include <vector>
using namespace std;

void subsetsum(int idx, int sum, vector<int> v, int size, vector<int> &res)
{

    if(idx == size)
    {
        //push sum into res vector
        res.push_back(sum);
        return;
    }

    //pick the element at the index
    subsetsum(idx+1, sum+v[idx], v, size, res);

    //don't pick any element
    subsetsum(idx+1, sum, v, size, res);

}
vector<int> get_sum(vector<int> v)
{
    int sum = 0;
    int size = v.size();
    vector<int> res;
    subsetsum(0, 0, v, size, res);
    return res;
}
int main()
{
    vector<int> v = {5, 2, 1};
    vector<int> ans = get_sum(v);
    for(int i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}