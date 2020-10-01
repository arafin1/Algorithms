class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       
        vector<int>v;
        v = nums;
        
        std::sort(v.begin(), v.end()); 
        auto last = std::unique(v.begin(), v.end());
        v.erase(last, v.end());
        
        if(v.size() != nums.size()){
            return true;
        }
        return false;
      
    }
};