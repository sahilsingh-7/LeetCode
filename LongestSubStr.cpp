class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> ar(256,-1);
        int maxm = 0, start = -1,i;
        for(i=0;i != s.length();i++){
            if(ar[s[i]]>start)
                start = ar[s[i]];
            ar[s[i]] = i;
            maxm = max(maxm,i-start);
        }
        return maxm;
    }
};