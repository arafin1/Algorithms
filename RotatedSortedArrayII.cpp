class Solution {
public:
    int search(vector<int>& nums, int target) {
         auto result1 = std::find(std::begin(nums), std::end(nums), target);
 
         if (result1 != std::end(nums)) {
             return std::distance(nums.begin(), result1);
         } else {
             return -1;
        }
    }
};