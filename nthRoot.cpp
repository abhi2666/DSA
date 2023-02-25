#include <iostream>
using namespace std;

/*
Find the nth root of a number 
n = 27 and m = 3 means find cube  root of 27 which is 3

This can be done easily using Binary Search
(very similar to bisection method)
*/
int multiply(double mid, int power)
{
    double res = 1.0;
    for(int i = 0; i < power; i++)
    {
        res *= mid;
    }
    return (int)res;
}

int nthRoot(int num, int power)
{
    // apply binary search
    // range will be from 1 to num
    double low = 0, high = num, mid;
    double eps = 1e-6;

    while((high - low) >= eps)
    {
        mid = (low + high)/2.0;
        if(multiply(mid, power) > num)
        {
            //means you have to reduce the right part
            high = mid;
        }
        else
        {
            low = mid;
        }
    }
    return low; //or high whatever you like
}
int main()
{
    int num, power;
    cin>>num>>power;

    cout<<nthRoot(num, power)<<endl;
    return 0;
}