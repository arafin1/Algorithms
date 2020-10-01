class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        int res = 0;
        Map<Character , Integer> map = new HashMap<>();
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (map.containsKey(s.charAt(i))) {
              j = Math.max(map.get(s.charAt(i)),j);
            }
             res = Math.max(res, i - j + 1); 
             map.put(s.charAt(i), i+1);
        }
        
        
        return res;
    }
}