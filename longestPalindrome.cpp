class Solution {
public:
    int longestPalindrome(string s) {
        int x,i,sum=0;
        x = s.size();
        if(x==1) return 1;
        vector<int> freq(123,0);
        bool hasodd = false;

        for(i=0;i<x;i++){ // for keeping occurances of each character in the string
            freq[s[i]]++;
        }

        for(i=65;i<123;i++){
            if(freq[i]>0 && freq[i]%2==0) sum+=freq[i];

            else if(freq[i]%2 != 0){
                sum+= freq[i] - 1;
                hasodd = true;
            }
            if(i==90) i=96;
        }
        if(hasodd) return sum + 1;
        return sum;
    }
};
