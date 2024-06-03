class Solution {
public:
    int appendCharacters(string s, string t) {
        int a,b,i=0,j=0;
        a = s.size();
        b = t.size();
        while(i<a && j<b){
            if(s[i] == t[j]) i++,j++;
            else i++;
        }
        return b-j;
    }
};
