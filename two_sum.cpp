// two sum 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 7, 11, 15};
    // sort the array if not sorted..i have already taken sorted array
    int target = 26;
    int i, j;
    i = 0;
    j = arr.size() - 1;
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            cout<<"["<<i<<" "<<j<<"]"<<endl;
            break;
        }
        else if(arr[i] + arr[j] > target)
        {
            j--;
        }
        else 
        {
            i++;
        }
    }
    return 0;
}