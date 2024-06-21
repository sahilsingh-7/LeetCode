class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int x = c.size();
        int i,j,Maxunsatisfied = 0,currentS=0;

        for(i=0;i<m;i++){
            currentS += c[i] * g[i];
        }
        Maxunsatisfied = currentS;
        i =0;
        j = m;
        while(j<x){
            currentS += c[j] * g[j] - c[i] * g[i];
            Maxunsatisfied = max(Maxunsatisfied,currentS);
            i++,j++;
        }
        for(i=0;i<x;i++){
            if(!g[i]) Maxunsatisfied+= c[i];
        }
        return Maxunsatisfied;
    }
};
