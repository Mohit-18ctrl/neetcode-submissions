class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(string s: strs) {
            vector<int> count(26, 0);
            for(char ch: s)
                count[ch - 'a']++;

            string key;
            for(int n: count) 
                key += (to_string(n) + ' ');
            m[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto p: m) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
