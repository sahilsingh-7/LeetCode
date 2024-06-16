class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int i=0,patch=0,x;
        x = nums.size();
        long maxReach = 0;

        while(maxReach < n){
            if(i<x && nums[i] <= (maxReach + 1)){
                maxReach += nums[i];
                i++;
            }
            else{
                maxReach += (maxReach +1);
                patch++;
            }
        }
        return patch;
    }
};
