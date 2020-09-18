class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> f;
        for (int i = 0 ; i < nums.size(); i++ )
            for (int j = i+1; j < nums.size(); j++)
                if(nums[i] + nums[j] == target)
                {
                    f.push_back(i);
                    f.push_back(j);
                    return f;
                }
        return f;
    }
};
