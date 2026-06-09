// problem = partition array according to given pivot 

// leetcode 2161 
//link = https://leetcode.com/problems/partition-array-according-to-given-pivot/description/


/*
Input: nums = [9,12,5,10,14,3,10], pivot = 10
Output: [9,5,3,10,10,12,14]
Explanation: 
The elements 9, 5, and 3 are less than 
the pivot so they are on the left side of the array.
The elements 12 and 14 are greater than 
the pivot so they are on the right side of the array.
The relative ordering of the elements less 
than and greater than pivot is 
also maintained. [9, 5, 3] and [12, 14] are the 
respective orderings.
*/

#include<iostream>
#include<vector> 
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot){
    vector<int> less;
    vector<int> equal;
    vector<int> greater;

    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        if(pivot > nums[i]){
            less.push_back(nums[i]);
        }
        else if(pivot < nums[i]){
            greater.push_back(nums[i]);
        }
        else{
            equal.push_back(nums[i]);
        }
    }

    for(auto x : less) ans.push_back(x);
    for(auto x : equal) ans.push_back(x);
    for(auto x : greater) ans.push_back(x);

    return ans;
}
int main(){
    int n ;
    cout<<"enter the size of  nums : ";
    cin>>n;

    vector<int> nums;
    cout<<"enter the nums values : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    int pivot;
    cout<<"enter the pivot : ";
    cin>>pivot ;

    vector<int> ans = pivotArray(nums, pivot);

    cout<<"output is : [";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<", ";
    }
    cout<<"]";
}