class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            num = sumdig(num);
        }
        return num;
    }
    int sumdig(int num){
        int sum = 0;
        while(num>0){
            int dig = num%10;
            num/=10;
            sum+=dig;
        }
        return sum;
    }
};