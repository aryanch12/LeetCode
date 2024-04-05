class Solution {
    
    /*
        Time Complexity : O(log(n))
        Space Complexity : O(log(n))
    */
    
public:
    double myPow(double x, long long n) {
        if(n == 0) return 1;
        if(n<0) return myPow(1/x, (-1)*n);
        
        double temp = myPow(x, n/2);
        
        if(n%2 == 0)
            return temp*temp;
        
        return temp*temp*x;
    }
};