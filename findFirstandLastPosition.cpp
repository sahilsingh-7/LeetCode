class Solution {
public:
    int flm(vector<int> nums,int t){
        int l=0,h=nums.size()-1,le=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]>t) h = mid-1;
            else if(nums[mid]<t) l = mid+1;
            else {
                le = mid;
                h=mid-1;
            }
        }
        return le;
    }

    int frm(vector<int> nums,int t){
        int l=0,h=nums.size()-1,re=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]>t) h = mid-1;
            else if(nums[mid]<t) l = mid+1;
            else {
                re = mid;
                l=mid+1;
            }
        }
        return re;
    }

    

    vector<int> searchRange(vector<int>& nums, int target) {
        int l = flm(nums,target);
        int r = frm(nums,target);
        return {l,r};
    }
};
