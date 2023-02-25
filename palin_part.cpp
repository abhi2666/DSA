class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partition;
        
        palin_part(0, s, ans, partition);

        return ans;
    }

    void palin_part(int idx, string s, vector<vector<string>> &ans, vector<string> &part)
    {

        if(idx == s.size())
        {
            //we have done the partitioning that we could
            //store it
            ans.push_back(part);
            return;
        }

        //iterate through the string 
        for(int i = idx; i < s.size(); ++i)
        {
            if(isPalindrome(s, idx, i))
            {
                //add that particular substring to part vector
                part.push_back(s.substr(idx, i-idx+1));
                //call function again
                palin_part(idx+1, s, ans, part);
                part.pop_back();
                
            }
        }
    }

    bool isPalindrome(string s, int start, int end)
    {
        while(start < end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
};