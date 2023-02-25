/*
I/N - [1, 1, 2, 2, 2, 3, 3]
O/P - [1, 2, 3, _, _, _, _]

we can use an aux array or we can use two pointer approach
*/

#include <iostream>
using namespace std;

int main()
{
    int numRay[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);
    // count the frequency
    for (int i = 0; i < arr_size; i++)
    {
        numRay[numRay[i] % arr_size] = numRay[numRay[i] % arr_size] + arr_size;
    }

    for(int i = 0; i < arr_size; i++)
    {
        cout<<numRay[i]<<" ";
    }
    return 0;
}
