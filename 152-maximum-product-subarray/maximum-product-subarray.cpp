class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int best_val = nums[0];
        int worst_val = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int a = nums[i] * best_val;
            int b = nums[i] * worst_val;
            int c = nums[i];

            int newMax = max(c, max(a, b));
            int newMin = min(c, min(a, b));

            best_val = newMax;
            worst_val = newMin;

            ans = max(ans, best_val);
        }

        return ans;
    }
};