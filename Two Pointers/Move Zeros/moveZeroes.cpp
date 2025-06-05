class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        int count = 0;
        while (it != nums.end()) {
            if (*it == 0) {
                count += 1;
                it = nums.erase(it);
            }
            else
                it += 1;
        }
        for (int i = 0; i < count; i++)
            nums.push_back(0);
    }
};
