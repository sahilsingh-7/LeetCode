class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        int sum,d;
        while(n!=1 && seen.find(n) == seen.end()){
            seen.insert(n);
            sum =0;
            while(n){
                d = n%10;
                sum+= (d*d);
                n/=10;
            }
            n = sum;
        }
        return n==1;
    }
};
