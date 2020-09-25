class Solution {
public:
    int maxSubArray(vector<int>& nums) {
/* kadane's algorithm
       int sum = nums[0];
       int curr_sum = nums[0];
       
       for(int i =1 ;i<nums.size(); i++){
           curr_sum = max(nums[i], curr_sum+nums[i]);
           sum = max(sum, curr_sum);
       }
        return sum;
        */
  
             
  int m = nums[0];
  int x =  nums[0];
  for(int i =1 ;i<nums.size();i++){
      m += nums[i];
      if(m < nums[i]){
          m = nums[i];
      }
      x= max(m,x);
        
  }
  return x;
  
 }
};