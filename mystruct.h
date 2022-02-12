#ifndef LEETCODE_MYSTRUCT_H
#define LEETCODE_MYSTRUCT_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

struct Node {
    int val;
    Node *left;
    Node *right;

    Node() : val(0), left(nullptr), right(nullptr) {}

    Node(int x) : val(x), left(nullptr), right(nullptr) {}

    Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
};

#endif //LEETCODE_MYSTRUCT_H
