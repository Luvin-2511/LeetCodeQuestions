/*----------------------LeetCode Question No-9---------------------------------
Given an integer x, return true if x is a palindrome, and false otherwise.*/

class Solution {
    public boolean isPalindrome(int x){
        int rev=0;
        int num=x;
        if(x<0){
            return 0;
        }
        while(num!=0){
            rev=rev*10+(num%10);
            num/=10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }
}
