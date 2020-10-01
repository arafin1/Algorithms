class Solution {
public:
    int getSum(int a, int b) {

        while(b !=0){
            int sum = a^b;
            int carry  = (unsigned)(a&b);
            a = sum;
            b =(unsigned) carry<<1;
        }
        return a;
    }
};