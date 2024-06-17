class Solution {
public:
    bool judgeSquareSum(int c) {
        int j = int(sqrt(c));
        long temp,i=0;
        while(i<=j){
            temp = (i*i + j*j);
            if( temp == c) return true;
            else if(temp<c) i++;
            else j--;
        }
        return false;
    }
};
