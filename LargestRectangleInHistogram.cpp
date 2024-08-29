class Solution {
public:
    vector<int> NSN(vector<int>& h,int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(s.top()!= -1 && h[i]<=h[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> PSN(vector<int>& h,int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(s.top()!= -1 && h[i]<=h[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<int> next(n);
        next = NSN(h,n);
        vector<int> prev(n);
        prev = PSN(h,n);

        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l = h[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            int newarea = l*b;
            area = max(area,newarea);
        }
        return area;
    }
};
