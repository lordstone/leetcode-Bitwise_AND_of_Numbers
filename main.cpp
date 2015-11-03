class Solution {
public:
/*
    int rangeBitwiseAnd(int m, int n) {
        int sum = m;
        for(int i = 1; i <= (n - m); i ++){
            sum = sum & (m + i);
        }
        return sum;
    }
*/

    int rangeBitwiseAnd(int m, int n) {
        if(m == n) return m;
        int sum = 0;
        int i = 31;
        for(; i >= 0; i --){
            sum *= 2;
            if((1 & (m >> (i))) == ( 1 & (n >> (i))) ) 
                sum += ((1 & (m >> (i))) == 1) ? 1 : 0;
            else break;
        }
        for(; i > 0; i --){
            sum *= 2;
        }
        return sum;
    }
   
};
