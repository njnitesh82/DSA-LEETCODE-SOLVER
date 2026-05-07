class Solution {
public:
    double myPow(double x, long long n) {

        if (n==0) return 1;
        //  handling the negative
        double y = x;
        double half;
        
        if (n < 0){
            y = 1/x;
            half = myPow(y, -(n/2));
        }else{ 
            half = myPow(y, n/2);
        }

        if (n%2 == 0){
            return half * half;
        }
        
    return y * half * half;
    }

    
};
