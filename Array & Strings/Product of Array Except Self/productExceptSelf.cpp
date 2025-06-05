class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product_left(nums.size(), 1), product_right(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++) {
            product_left[i] = product_left[i - 1] * nums[i - 1];
            product_right[nums.size() - i - 1] = nums[nums.size() - i] * product_right[nums.size() - i];
        }
        for (int i = 0; i < product_right.size(); i++)
            product_left[i] *= product_right[i];
        return product_left;
    }
};
