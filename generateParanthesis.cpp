class Solution {
public:
    vector<string> s;

    void generate(string &c,int n,int open,int close){
        if(c.length() == 2*n){
            s.push_back(c);
            return;
        }
        if(open<n){
            c.push_back('(');
            generate(c,n,open+1,close);
            c.pop_back();
        }

        if(close<open){
            c.push_back(')');
            generate(c,n,open,close+1);
            c.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        string c = "";
        generate(c,n,open,close);
        return s;
    }
};
