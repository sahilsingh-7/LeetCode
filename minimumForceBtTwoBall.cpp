class Solution {
public:

    bool possibleF(int mid, vector<int> &p,int x,int m){
        int countBall = 1;
        int i,prevBall = p[0];
        for(i=1;i<x;i++){
            int currPosition = p[i];
            if(currPosition - prevBall >= mid){
                countBall++;
                prevBall = currPosition;
            }
            if(countBall == m) break;
        }
        return countBall == m;
    }


    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        int res,x = p.size();
        int minF = 1;
        int maxF = p[x-1] - p[0];
        while(minF<=maxF){
            int mid = minF + (maxF - minF)/2;
            if(possibleF(mid,p,x,m)){
                res = mid;
                minF = mid+1;
            }
            else maxF = mid -1 ;
        }
        return res;
    }
};
