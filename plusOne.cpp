class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size();
        if(digits[x-1] != 9){
            digits[x-1]++;
            return digits;
        }
        int i,sum=0,carry=0;
        vector<int> res;
        for(i=x-1;i>=0;i--){
            digits[i] += carry; 
            if(i==x-1){
                res.push_back(0);
                carry = 1;
            }else if(digits[i]%10 == 0 && digits[i]>9){
                res.push_back(0);
                carry = 1;
            }
            else{
                res.push_back(digits[i]);
                carry = 0;
            }
        }
        if(carry) res.push_back(1);
        reverse(res.begin(),res.end());
        return res;
    }
};
