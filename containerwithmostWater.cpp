class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j,max = INT_MIN,temp;
        for(i=0,j=height.size()-1;i!=j;){
            temp = min(height[i],height[j]) * (j-i);
            if(max<temp) max = temp;
            if(height[i]<height[j]) i++;
            else j--;
        }
        return max;
    }
};
