class Solution {
public:
    int findMin(vector<int>& nums) {
        std::vector<int>::iterator result = std::min_element(nums.begin(), nums.end());           return result[0];
    }
};