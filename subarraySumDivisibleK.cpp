class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int i,r,sum = 0,count =0;
        int x = nums.size();
        unordered_map<int,int> mp;
        mp.insert({0,1});
        for(i=0;i<x;i++){
            sum+=nums[i];
            r = sum%k;
            if(r<0) r+=k;

            if(mp.find(r) != mp.end()){
                count+=mp[r];
            }
            mp[r]++;
        }
        return count;
    }
};
