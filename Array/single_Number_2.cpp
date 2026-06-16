/*
link -> https://leetcode.com/problems/single-number-ii/
leetcode -> 137. Single Number II

Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,3,2]
Output: 3

Example 2:
Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(auto x : nums){
            freq[x]++;
        }
        
        for(auto m : freq){
            if(m.second==1){
                return m.first;
            }
        }
        return nums[0];
}

int main (){
    int n;
    cout<<"enter the size of nums : ";
    cin>>n;

    vector<int> nums;
    cout<<"Enter the nums value : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    int ans = singleNumber(nums);
    cout<<"single number is : "<<ans;
}