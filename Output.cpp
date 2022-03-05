#include "Output.h"

void Output::getOutput(std::string &outType, int intOut, const std::vector<int> &vecOut,
                       const std::vector<std::vector<int>> &matrixOut, const std::vector<std::string> &vecStrOut,
                       ListNode *listOut, Node *nodeOut, const std::string &strOut, TreeNode *treeOut) {
    if (outType == "int") {
        std::cout << intOut << std::endl;
        return;
    }
    if (outType == "vector<int>") {
        std::cout << '[';
        for (int i = 0; i < vecOut.size(); i++) {
            std::cout << vecOut[i];
            if (i < vecOut.size() - 1) std::cout << ',';
        }
        std::cout << ']' << std::endl;
        return;
    }
    if (outType == "vector<vector<int>>") {
        std::cout << '[';
        for (int i = 0; i < matrixOut.size(); i++) {
            std::cout << '[';
            for (int j = 0; j < matrixOut[i].size(); j++) {
                std::cout << matrixOut[i][j];
                if (j < matrixOut[i].size() - 1) std::cout << ',';
            }
            std::cout << ']';
            if (i < matrixOut.size() - 1) std::cout << ',';
        }
        std::cout << ']' << std::endl;
        return;
    }
    if (outType == "vector<string>") {
        std::cout << '[';
        for (int i = 0; i < vecStrOut.size(); i++) {
            std::cout << '"';
            for (char j: vecStrOut[i]) {
                std::cout << j;
            }
            std::cout << '"';
            if (i < vecStrOut.size() - 1) std::cout << ',';
        }
        std::cout << ']' << std::endl;
        return;
    }
    if (outType == "ListNode*") {
        if (listOut == nullptr)return;
        std::cout << '[';
        ListNode *now = listOut;
        while (now != nullptr) {
            std::cout << now->val;
            if (now->next != nullptr) std::cout << ',';
            now = now->next;
        }
        std::cout << ']' << std::endl;
        return;
    }
    if (outType == "Node*") {
        if (nodeOut == nullptr)return;
        std::cout << '[';
        Node *now = nodeOut;
        while (now != nullptr) {
            std::cout << now->val;
            now = now->right;
            if (now == nodeOut || now == nullptr)break;
            std::cout << ',';
        }
        std::cout << ']' << std::endl;
        std::cout << '[';
        now = nodeOut->left;
        while (now != nullptr) {
            std::cout << now->val;
            now = now->left;
            if (now == nodeOut->left || now == nullptr)break;
            std::cout << ',';
        }
        std::cout << ']' << std::endl;
        return;
    }
    if (outType == "string") {
        std::cout << strOut << std::endl;
        return;
    }
    if (outType == "TreeNode*") {
        if (treeOut == nullptr)return;
        std::queue<TreeNode *> q;
        std::queue<int> height;
        q.push(treeOut);
        height.push(0);
        while (!q.empty()) {
            TreeNode *now = q.front();
            int h = height.front();
            q.pop();
            height.pop();
            if (now != nullptr) std::cout << now->val;
            else std::cout << "null";
            if (height.front() == h) std::cout << ',';
            else std::cout << std::endl;
            if (now != nullptr) {
                q.push(now->left);
                height.push(h + 1);
                q.push(now->right);
                height.push(h + 1);
            }
        }
        return;
    }
    std::cout << "Wrong outType" << std::endl;
}