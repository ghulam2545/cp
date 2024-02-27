#include <iostream>
#include <vector>
using namespace std;
/*
        2
       / \
      /   \
     7     3
          / \
         /   \
        4     5
               \
                \
                 6
*/

struct Node {
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

struct Solution {
    static Node *tree() {
        Node *root = new Node(2);
        root->left = new Node(7);
        root->right = new Node(3);

        root->right->left = new Node(4);
        root->right->right = new Node(5);

        root->right->right->right = new Node(6);

        return root;
    }
};

/* tree traversal from root to leaf */
void root_to_leaf(Node *root, vector<vector<int>> &ans, vector<int> val) {
    if (root == nullptr)
        return;
    if (root->left == nullptr && root->right == nullptr) {
        val.push_back(root->val);
        ans.push_back(val);
    }

    val.push_back(root->val);
    root_to_leaf(root->left, ans, val);
    root_to_leaf(root->right, ans, val);
}

int main() {
    auto root = Solution::tree();

    vector<vector<int>> ans;
    vector<int> val;
    root_to_leaf(root, ans, val);

    cout << ans.size();

    return 0;
}