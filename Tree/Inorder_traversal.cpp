// problem = . Binary Tree Inorder Traversal
// leetcode - 94
// link - https://leetcode.com/problems/binary-tree-inorder-traversal/description/?envType=problem-list-v2&envId=tree


#include<iostream>
#include<vector>
using namespace std;

// Step 1 - Pehle TreeNode define karo
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Step 2 - Phir function likho
void inorder(TreeNode* root, vector<int>& ans){
    if(root == NULL) return;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}

int main(){
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(5);
    TreeNode* f = new TreeNode(6);
    TreeNode* g = new TreeNode(7);

    a->left  = b;
    a->right = c;
    b->left  = d;
    b->right = e;
    c->left  = f;
    c->right = g;

    vector<int> ans;
    inorder(a, ans);

    // Display result
    cout << "[";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
        if(i < ans.size()-1) cout << ",";
    }
    cout << "]";

    return 0;
}