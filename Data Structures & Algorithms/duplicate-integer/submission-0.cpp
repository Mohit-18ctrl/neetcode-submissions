class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> s;
        for(int i: nums) {
            if(s.find(i) != s.end())
                return true;

            s.insert(i);
        }
        return false;
    }
};