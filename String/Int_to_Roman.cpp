// problem - interger to roman
// leetcode = 12
// link = https://leetcode.com/problems/integer-to-roman/description/?envType=problem-list-v2&envId=string



/*
Example 1:

Input: num = 3749
Output: "MMMDCCXLIX"
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string IntToRoman(int nums){
    vector<int> values {
        1000, 900, 500,400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1 
    };

    vector<string> rom{
        "M","CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    string ans = "";
    for(int i=0; i<values.size(); i++){
        while(nums >= values[i]){
            nums -= values[i];
            ans += rom[i];
        }
    }
    return ans;
}
int main (){
    int num;
    cout<<"Enter the Interger : ";
    cin>>num;
    string ans = IntToRoman(num);
    cout<<"the Integer to Roman is : "<<ans;
}
