class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        int a = d.size();
        int b = w.size();

        unordered_map<int,int> mp;

        int i,j=0,sum=0,maxProf =0;

        for(i=0;i<a;i++){
            mp[d[i]] = max(mp[d[i]],p[i]);
        }

        sort(begin(d),end(d));
        sort(begin(w),end(w));

        for(i=0;i<b;i++){
            while(j<a && d[j] <= w[i]){
                maxProf = max(maxProf,mp[d[j]]);
                j++;
            }
            sum+=maxProf;
        }
        return sum;
    }
};
