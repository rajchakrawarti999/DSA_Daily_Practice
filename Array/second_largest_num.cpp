// problem -find the second largest number 



/*
Example 1:
Input: nums = [3,4,2,3,2,5,7]
Output: 5
*/




#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of array : ";
    cin>>n;
    int  arr[n];
    cout<<"enter the element of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
     for(int i=0; i<n; i++){
       if(arr[i]>max){
        max = arr[i];
       }
    }
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]!=max && smax<arr[i])
        smax = arr[i];
    }
    cout<<"maximum element is = "<<max<<endl;
    cout<<"second maximum element is = "<<smax<<endl;
}