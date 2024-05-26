class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i,j,k,sum,temp,x,min = 2000;
        x = nums.size();
        sort(nums.begin(),nums.end());
        if(target <= nums[0] + nums [1] + nums[2]) return nums[0] + nums[1] + nums[2];
        if(target >= nums[x-1] + nums[x-2] + nums[x-3]) return nums[x-1] + nums[x-2] + nums[x-3];

        for(i=0; i<x-2;i++){
            if(i && nums[i] == nums[i-1]) continue;
            j = i+1;
            k = x-1;

            while(j<k){
                sum = nums[i] + nums[j] + nums[k];
                if(sum == target) return sum;

                if(abs(sum - target) < min){
                    min = abs(sum - target);
                    temp = sum;
                }

                if(sum<target){
                    while(j<k && nums[j] == nums[j+1]) j++;
                    j++;
                }
                else{
                    while(j<k && nums[k] == nums[k-1]) k--;
                    k--;
                }
            }
        }
        return temp;
    }
};
