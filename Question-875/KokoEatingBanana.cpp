#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int minEatingSpeed(vecotr<int>& piles,int h){
    int low=1;
    int high=*maximum(piles.begin(),piles.end());
    while(low<high){
        int mid=low+(high-low)/2;
        int hours;
        for(int pile:piles){
            hours+=(piles+mid-1)/mid;
        }
        if(hours<h){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }
    return low;
}