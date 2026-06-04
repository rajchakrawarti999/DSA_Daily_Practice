// problem -count binary substring 
// leetcode = 696
// link = https://leetcode.com/problems/count-binary-substrings/description/?envType=problem-list-v2&envId=two-pointers


/*
Example 1:
Input: s = "00110011"
Output: 6

Explanation-:
There are 6 substrings that have equal number 
of consecutive 1's and 0's: "0011", "01", "1100",
"10", "0011", and "01".
*/


#include<iostream>
#include<string>
using namespace std;

int countBinarySubstrings(string s) {
        int n = s.size();
        int prev = 0;
        int curr = 1;
        int ans = 0;

        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                curr++;
            }
            else{
                ans += min(curr, prev);
                prev = curr;
                curr = 1;
            }
        }
        ans += min(curr, prev);
        return ans;

    }
int main (){
    string s;
    cout<<"enter the string : ";
    getline(cin, s);

    
    int count = countBinarySubstrings(s);
    cout<<"Number of substring count is : "<<count<<endl;

}
// cp "C:\Users\Raj\OneDrive\Documents\Desktop\Daily_DSA_Q\String\count_binary_substring.cpp" "String\"
