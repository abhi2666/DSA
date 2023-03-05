/*
Reverse words in a String

Input: s = "the sky is blue"
Output: "blue is sky the"

Approach --> traverse from the back and find words and put them into new string
*/


class Solution {
public:
    string reverseWords(string s) {
        if(s.empty()) return s;
        string str = ""; //will store the answer
        int i = s.size()-1;
        while(i >= 0)
        {
            //check if there is no space
            while(i >= 0 && s[i] == ' ') i--;
            int j = i;
            //move j till you don't get a word
            while(j >= 0 && s[j] != ' ') j--;
            if(i < 0) break;
            int len = i - j;
            if(str.empty())
            {
                str.append(s.substr(j+1, len));
            }
            else
            {
                // it means that there is already a word in str and will have to give a space 
                // before inserting new word
                str = str + ' ' + s.substr(j+1, len);
            }
            i = j;
        }
        return str;
    }
};
