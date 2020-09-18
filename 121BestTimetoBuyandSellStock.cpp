class Solution {
    public int maxProfit(int[] prices) {
        
    if(prices.length == 0){
            return 0;
        }
    

    Map<Integer, Integer> map = new HashMap<>();
        
    for (int i = 0; i < prices.length; i++) {
        map.put(i,prices[i]);
    }
    int res = 0;
    int minprice = Integer.MAX_VALUE;;
   /*     
    for(int i =0; i<prices.length;i++){
        if( map.get(i) < minprice){
            minprice = map.get(i);
        }else if(map.get(i) - minprice > res){
            res = map.get(i) - minprice;
        }
        
    }
        */ 
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
	        Integer v = entry.getValue();
	        if( v < minprice){
            minprice = v;
        }else if(v - minprice > res){
            res = v - minprice;
        }
    }
        return res;
    }
}