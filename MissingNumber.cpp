class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int sPlus = 0;
   int p = 0;
   for(auto i:nums){
    p+=i;
   }
   sPlus = nums.size() * (nums.size()+1)/2;
   return sPlus - p;
    }
};