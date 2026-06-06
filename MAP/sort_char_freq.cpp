// problem = Sort Characters By Frequency
//leetcode = 451
//link = https://leetcode.com/problems/sort-characters-by-frequency/description/?envType=problem-list-v2&envId=sorting


/*
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears 
twice while 'r' and 't' both appear once.
So 'e' must appear
before both 'r' and 't'
. Therefore "eetr" is also a valid answer.
*/


#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
string frequencySort(string s){
    unordered_map<char, int> freq;

    for(auto c : s){
        freq[c]++;
    }

    vector<pair<char, int> > vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end() , [](auto &a, auto &b){
        return a.second > b.second;
    });

    string ans = "";
    for(auto p : vec){
        ans += string(p.second, p.first);
    }
    return ans;
}
int main (){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    
    cout<<"The sort Characters by freq. string is : "<<frequencySort(s);
}