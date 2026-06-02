// problem - Remove duplicate sorted array 
// leetcode - 26
// link = https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=two-pointers

//  Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0; 
        int j = 1;
        

        while(j<n){
            if(nums[i]!=nums[j]){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
    }
int main(){
    int n;
    cout<<"Enter the size of nums : ";
    cin>>n; 

    vector<int> nums;
    cout<<"Enter the value of nums : ";
    for(int i=0; i<n; i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }   
    int ans = removeDuplicates(nums);
    cout<<"after removing Duplicate so nums size is :  "<<ans<<endl;
    cout<<"After removing duplicate nums is :  [";
    for(int i = 0; i<ans; i++){
        cout<<nums[i]<<" ,";
    }
    cout<<" ]";

}