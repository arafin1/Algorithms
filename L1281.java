class Solution {
    public int subtractProductAndSum(int n) {
        int pro = 1;
        int sum = 0;
        String s = String.valueOf(n);
        Map<Integer,Integer>map = new HashMap<>();
        for(int i = 0; i< s.length(); i++){
            map.put(i,Integer.parseInt(String.valueOf(s.charAt(i))));
        }
        for(int i= 0;i < s.length();i++){
            int temp = map.get(i);
            pro *= temp;
            sum += temp;
            
        }
        return pro - sum;
    }
}