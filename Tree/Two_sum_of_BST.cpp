// Problem  - Two Sum IV - Input is a BST
// Leetcode - 653
// Link     - https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

// Time Complexity  - O(n)
// Space Complexity - O(n)

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void inorder(TreeNode* root, vector<int>& ans){
        if(root == NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root, ans);

        int i = 0;
        int j = ans.size()-1;

        while(i < j){
            if(ans[i]+ans[j] > k) j--;
            else if(ans[i]+ans[j] < k) i++;
            else return true;
        }
        return false;
    }
};

int main(){
    // Tree banana
    //        5
    //       / \
    //      3   6
    //     / \   \
    //    2   4   7

    TreeNode* root = new TreeNode(5);
    root->left     = new TreeNode(3);
    root->right    = new TreeNode(6);
    root->left->left  = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);

    Solution sol;

    // Test 1 - k = 9 (3+6) → true
    cout << "k=9 : " << (sol.findTarget(root, 9) ? "true" : "false") << endl;

    // Test 2 - k = 28 → false
    cout << "k=28 : " << (sol.findTarget(root, 28) ? "true" : "false") << endl;

    return 0;
}