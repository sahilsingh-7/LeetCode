class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int i,j,a = 0;
        for(i=0;i<arr2.size();i++){
            for(j=0;j<arr1.size();j++){
                if(arr1[j] == arr2[i]){
                    swap(arr1[a],arr1[j]);
                    a++;
                }
            }
        }
        sort(arr1.begin()+a,arr1.end());
        return arr1;
    }
};
