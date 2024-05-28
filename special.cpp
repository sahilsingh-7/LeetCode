// special array with x elements greater or equal

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int x = nums.size();
        vector<int> s(x+1,0);
        int i,sum =0;
        for(i=0;i<x;i++){
            if(nums[i]>x) s[x]++;
            else s[nums[i]]++;
        }
        for(i=x;i>0;i--){
            sum+=s[i];
            if(sum == i) return i;
        }
        return -1;
    }
};
