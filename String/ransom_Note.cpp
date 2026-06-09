// problem - Ransom Note
//leetcode - 383
// link - https://leetcode.com/problems/ransom-note/description/

/*
Input: ransomNote = "aa", magazine = "aab"
Output: true


Input: ransomNote = "aa", magazine = "ab"
Output: false
*/

#include<iostream>
#include<string>
using namespace std;

bool canConstruct(string ransomNote , string magazine){
    int freq[26] = {0};

    for(auto ch : magazine){
        freq[ch-'a']++;
    }

    for(auto ch : ransomNote){
        freq[ch-'a']--;

        if(freq[ch-'a'] < 0){
            return false;
        }
    }
    
    return true;
}
int main (){
    string ransomNote;
    cout<<"enter the ransomNote string : ";
    cin>>ransomNote;
    
    string magazine;
    cout<<"enter the magazine string : ";
    cin>>magazine;

    bool flag = canConstruct(ransomNote, magazine);
    string ans = "";
    if(flag==1){
        ans  = "true";
    }
    else ans = "false";
    cout<<"output is : "<<ans;
}