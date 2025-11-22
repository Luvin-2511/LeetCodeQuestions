class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int n:nums){
            int temp = n;
            int digits=0;
            while(temp>0){
                temp/=10;
                digits++;
            }
            if(digits%2==0){
                count++;
            }
        }
        return count;
    }
};