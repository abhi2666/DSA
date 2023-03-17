/* Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

Approach --> This problem can be done by 
--> creating a vector of strings to store numRows no. of strings
--> we just have to store character wise in these strings based on indexes
*/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1) return s;
        vector<string> vect(numRows, ""); //where intermediate strings will be stored
        int j = 0;
        bool flag = false;
        for(auto ch : s)
        {
            vect[j] += ch;
            if(j == 0 || j == numRows-1)
            {
                //swap the flags
                flag = !flag;
            }

            if(flag)
            {
                //increase the flag value
                j++;
            }
            else
            {
                j--;
            }
        }
        string res;
        // now put every intermediate strings into result
        for(auto &str : vect)
        {
            result += str; // for rows = 3...3 strings will be stored in vector and in final 
                           // final answer also
        }
        return result;
    }
};