class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int count = (arrivalTime + delayedTime)%24;
        return count;
    }
};