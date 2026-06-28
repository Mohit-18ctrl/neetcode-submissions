class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixMul(n + 1, 1);
        vector<int> suffixMul(n + 1, 1);

        for(int i = 1; i <= n; i++) {
            prefixMul[i] = prefixMul[i-1] * nums[i-1];
        }
        for(int i = n-1; i >= 0; i--) {
            suffixMul[i] = suffixMul[i+1] * nums[i];
        }

        vector<int> ans(n, 0);
        for(int i = 0; i< n; i++) {
            ans[i] = prefixMul[i] * suffixMul[i + 1];
        }
        return ans;
    }
};
