class Solution {
public:
    
vector<int> twoSum(vector<int>& nums, int target) {


        vector<int> f;
        int p = 0;
        int p1= 1;
        while(p1 < nums.size()){

            if(nums[p]+ nums[p1] == target){
                f.push_back(p+1);
                f.push_back(p1+1);
                return f;
            }
            p1++;
            p++;
        }
        return f;
       }
};