class Solution {
public:
    void lpscalc(vector<int> &lps,string n){ // for calculating lps
        int x = lps.size();
        int i=0,j=1;
        while(j<x){
            if(n[i]==n[j]){
                lps[j] = i+1;
                i++,j++;
            }
            else{
                if(i==0){
                    lps[j] = 0;
                    j++;
                }
                else i = lps[i-1];
            }
        }
    }

    int strStr(string haystack, string needle) {
        int b = needle.size();
        int a = haystack.size();
        vector<int>lps(b,0);
        lpscalc(lps,needle);
        int i=0,j=0;

        while(i<a && j<b){
            if(haystack[i] == needle[j]) i++,j++;
            else{
                if(j==0) i++;
                else{
                    j=lps[j-1];
                }
            }
        }
        if(j>=b) return i-j;
        return -1;
        
    }
};
