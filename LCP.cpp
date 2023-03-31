// longest common prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans;
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0], fina = strs[n - 1];
        for(int i = 0; i < min(n.size(), m.size()); i++)
        {
            if(first[i] == fina[i]) ans+= first[i];
            else break;
        }

        return ans;

    }
};