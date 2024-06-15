class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int i, x = profits.size();

        vector<pair<int, int>> v(x);

        for(i=0;i<x;i++){
            v[i] = {capital[i],profits[i]};
        }

        sort(begin(v),end(v));
        i=0;
        priority_queue<int> p;

        while(k--){
            while(i<x && w>= v[i].first){
                p.push(v[i].second);
                i++;
            }

            if(p.empty()) break;

            w += p.top();
            p.pop();

        }
        return w;

    }
};
