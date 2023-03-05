// we can use frequency array for this question
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int hash[26] = {0};
        for(int i = 0; i < ransomNote.size(); i++)
        {
            hash[ransomNote[i] - 'a']++;
        }

        for(int i = 0; i < magazine.size(); i++)
        {
            hash[magazine[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++)
        {
            if(hash[i] > 0)
            {
                return false;
            }
        }

        return true;
    }
};