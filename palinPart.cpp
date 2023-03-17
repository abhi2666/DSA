/*
Input: s = "babad"
Output: "bab"

For input string find the longest palindromic substring

Approach -->

This can be done easily by using a recursive approach to find all the partitions and then
checking if the partition is a palindrome and replace it with the previous one if its length is
greater that its..
*/

class Solution
{
public:
    string longestPalindrome(string s)
    {
        // for odd length.. there will be a center
        if (!s.size() > 1)
            return s;
        int st = 0;
        int max_len = INT_MIN;
        int n = s.size();

        for (int i = 0; i < n - 1; i++)
        {
            int l = i, r = i;
            while ( l >= 0 && r < n && s[l] == s[r])
            {
                l--;
                r++;
            }
            int len = r - l - 1;
            if (len > max_len)
            {
                st = l + 1;
                // end = r - 1;
                max_len = len;
            }
        }

        //even length

        for (int i = 0; i < n - 1; i++)
        {
            int l = i, r = i + 1;
            while ( l >= 0 && r < n && s[l] == s[r] )
            {
                l--;
                r++;
            }
            int len = r - l - 1;
            if (len > max_len)
            {
                st = l + 1;
                // end = r - 1;
                max_len = len;
            }
        }

        return s.substr(st, max_len);
    }
};