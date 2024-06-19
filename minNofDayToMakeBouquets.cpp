class Solution {
public:

    int checkBouq(vector<int>& bq,int mid,int k ){

        int i,Bqcount=0,countF=0;
        for(i=0;i<bq.size();i++){
            if(bq[i]<= mid) countF++;
            else countF = 0;
            if(countF == k) {
                Bqcount++;
                countF = 0;
            }
        }
        return Bqcount;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int i=0,maxDay = 0 , miniDays = -1;
        int x = bloomDay.size();
        // if(m*k > x) return -1;
        while(i<x){
            if(maxDay<bloomDay[i]) maxDay = bloomDay[i];
            i++;
        }
        int s,e,mid;
        s = 0;
        e = maxDay;
        while(s<=e){
            mid = s + (e-s)/2;
            if(checkBouq(bloomDay,mid,k) >= m){
                miniDays = mid;
                e = mid -1;
            }
            else s = mid+1;
        }
        return miniDays;
    }
};
