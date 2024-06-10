class Solution {
public:
    int climbStairs(int n) {
        int i,one = 1 ,t = 1,temp;
        for(i=n-1;i>0;i--){
            temp = one;
            one+=t;
            t = temp;
        }
        return one;
    }
};
