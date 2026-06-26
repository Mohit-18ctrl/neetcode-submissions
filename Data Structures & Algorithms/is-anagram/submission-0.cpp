class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;

        int l = s.length();
        vector<int> ct(26, 0) , cs(26, 0);
        for(int i = 0; i < l; i++) {
            cs[s[i] - 'a']++;
            ct[t[i] - 'a']++;
        }

        for(char ch: s) {
            if (cs[ch - 'a'] != ct[ch - 'a']) 
                return false;
        }
        return true;
    }
};
