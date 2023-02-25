#include <iostream>
#include <vector>
using namespace std;
//This level - 1 stock price prediction problem can be done using
// SLIDING WINDOW TECHNIQUE
int main()
{
    int a[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(a) / sizeof(a[0]);

    // buy stock at lowest price possible and sell at highest price
    //  possible
    int min = INT_MAX;
    int profit = 0, currProfit = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            currProfit = 0;
            profit = 0;
        }
        else
        {
            currProfit = (a[i] - min);
            if (currProfit > profit)
            {
                profit = currProfit;
            }
        }
    }
    cout << profit << endl;

    return 0;
}