class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(i>0){
                arr[i]=arr[i]+arr[i-1];
            }
        }
        return arr;
    }
};