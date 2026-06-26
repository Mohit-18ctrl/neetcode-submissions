class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {    
        int l = nums.size();
        unordered_map<int , int> m;
        m[nums[0]] = 0;
        for(int i = 1; i < l; i++) {
            int x= target - nums[i];
            if (m.find(x) != m.end()) {
                return {m[x], i};
            }
            else
                m[nums[i]] = i;
        }

        return {};
    }
};
