/*
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        vector<string> repeated;
        if(s.size() <= 10) return repeated;
        
        unordered_map<string, int> mpp; //where we will store the strings(size 10) and their count
        // now I will traverse from start till s.size()-10 because moving further we will not be able 
        // get any strings of size 10
        for(int i = 0; i <= s.size()-10; i++)
        {
            string str = s.substr(i, 10); // means pick substring from i = 0 till length 10
            mpp[str]++;
            //also check if its count == 2.. if yes then that is one of your substring
        }

        for(auto i : mpp)
        {
            if(i.second > 1)
            {
                repeated.push_back(i.first);
            }
        }

        return repeated;

    }
};