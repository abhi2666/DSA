#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPalindrome(int x)
    {
        int rev_num = 0;
        int temp = x;
        while (temp > 0)
        {
            rev_num = (rev_num*10) + (temp % 10);
            temp = temp/10;
        }
        // if (rev_num == x)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return rev_num;
    }
};

int main()
{
    Solution o;
    int i = 121;
    cout << o.isPalindrome(i) << endl;
    return 0;
}