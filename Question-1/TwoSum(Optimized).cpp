/*----------------------LeetCode Question No-1---------------------------------
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    unordered_map<int,int> num_indices;
    for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
        if(num_indices.find(complement)!=num_indices.end()){
            return (num_indices[complement],i);
        }
        num_indices[nums[i]]=i;
    }
    return {};
}
