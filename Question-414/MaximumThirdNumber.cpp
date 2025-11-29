class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long a = LLONG_MIN;
        long long b = LLONG_MIN;
        long long c = LLONG_MIN;
        for(int n:nums){
            if(n == a || n==b || n==c) continue;
            if(n>a){
                c=b;
                b=a;
                a=n;
            }else if(n>b){
                c=b;
                b=n;
            }else if(n>c){
                c=n;
            }
        }
         return (c == LLONG_MIN ? a : c);
    }
};