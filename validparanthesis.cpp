class Solution {
public:
    bool isValid(string s) {
        int x = s.length(),top = -1;
        char ar[x];
        if(s[0] == '}'||s[0] == ']'||s[0] == ')' || x%2!=0) return false;

        for(int i=0;i<x;i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                top++;
                ar[top] = s[i];
            }
            else{
                if(top == -1 && (s[i] == '}' || s[i] == ']' || s[i] == ')')) return false;
                if(s[i] == '}' && ar[top] == '{') top--;
                else if(s[i] == ']' && ar[top] == '[') top--;
                else if(s[i] == ')' && ar[top] == '(') top--;
                else return false;
            }
        }
        if(top == -1) return true;
        else return false;
    }
};
