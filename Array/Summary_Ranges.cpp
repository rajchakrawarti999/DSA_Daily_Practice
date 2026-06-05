//problem - summary ranges 

// link = https://leetcode.com/problems/summary-ranges/description/?envType=problem-list-v2&envId=array
//leetcode = 228

/*
Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    int n = nums.size();
    vector<string> ans;

    int i = 0;

    while (i < n) {
        int start = i;

        while (i + 1 < n && nums[i] + 1 == nums[i + 1]) {
            i++;
        }

        if (start == i) {
            ans.push_back(to_string(nums[i]));
        } else {
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
        }

        i++;
    }

    return ans;
}

int main() {
    vector<int> nums1 = {0, 1, 2, 4, 5, 7};
    vector<string> res1 = summaryRanges(nums1);
    cout << "Test 1: ";
    for (auto& s : res1) cout << s << "  ";
    cout << endl;

    vector<int> nums2 = {0, 2, 3, 4, 6, 8, 9};
    vector<string> res2 = summaryRanges(nums2);
    cout << "Test 2: ";
    for (auto& s : res2) cout << s << "  ";
    cout << endl;

    return 0;
}
