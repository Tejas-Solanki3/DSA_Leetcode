class Solution {
public:
    int climbStairs(int n) {
       if (n<=2) {
        return n;
       }

       int one = 1;
       int two = 2;
       int step = 0;

       for(int i=3;i<=n;i++){
        step = one + two;
        one = two;
        two = step;
        
       }
       return step;
};
};