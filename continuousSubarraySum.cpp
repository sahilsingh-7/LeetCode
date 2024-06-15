class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int i ,r,sum=0,x=nums.size();
        unordered_map<int,int> mp;
        mp.insert({0,-1});
        for(i=0;i<x;i++){
            sum+=nums[i];
            r = sum%k;
            if(mp.find(r) != mp.end()){
                if(i - mp[r] > 1){
                    return true;
                }
            }
            else mp[r] = i;
        }
        return false;
    }
};
