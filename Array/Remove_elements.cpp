// problem - Remove element 
// leetcode - 27
//link - https://leetcode.com/problems/remove-element/description/

// Time Complexity: O(n)
// Space Complexity: O(1)


#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val){
    int n = nums.size();
    int j = 0;

    for(int i=0; i<n; i++){
        if(nums[i]!=val){
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
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
    int val ;
    cout<<"Enter the val :";
    cin>>val;

    int ans = removeElement(nums, val);
    cout<<"The size of after removing element is : "<<ans<<endl;;
    cout<<"nums is after removing element is : [";
    for(int i=0; i<ans; i++){
        cout<<nums[i]<<",";
    }
    cout<<"]";

}