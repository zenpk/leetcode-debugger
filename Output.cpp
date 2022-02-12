#include "Output.h"

void Output::getOutput(string &outType, int intOut, const vector<int> &vecOut, const vector<vector<int>> &matrixOut,
                       const vector<string> &vecStrOut, ListNode *listOut, Node *nodeOut, const string &strOut,
                       TreeNode *treeOut) {
    if (outType == "int") {
        cout << intOut << endl;
        return;
    }
    if (outType == "vector<int>") {
        cout << '[';
        for (int i = 0; i < vecOut.size(); i++) {
            cout << vecOut[i];
            if (i < vecOut.size() - 1) cout << ',';
        }
        cout << ']' << endl;
        return;
    }
    if (outType == "vector<vector<int>>") {
        cout << '[';
        for (int i = 0; i < matrixOut.size(); i++) {
            cout << '[';
            for (int j = 0; j < matrixOut[i].size(); j++) {
                cout << matrixOut[i][j];
                if (j < matrixOut[i].size() - 1) cout << ',';
            }
            cout << ']';
            if (i < matrixOut.size() - 1) cout << ',';
        }
        cout << ']' << endl;
        return;
    }
    if (outType == "vector<string>") {
        cout << '[';
        for (int i = 0; i < vecStrOut.size(); i++) {
            cout << '"';
            for (char j: vecStrOut[i]) {
                cout << j;
            }
            cout << '"';
            if (i < vecStrOut.size() - 1) cout << ',';
        }
        cout << ']' << endl;
        return;
    }
    if (outType == "ListNode*") {
        if (listOut == nullptr)return;
        cout << '[';
        ListNode *now = listOut;
        while (now != nullptr) {
            cout << now->val;
            if (now->next != nullptr) cout << ',';
            now = now->next;
        }
        cout << ']' << endl;
        return;
    }
    if (outType == "Node*") {
        if (nodeOut == nullptr)return;
        cout << '[';
        Node *now = nodeOut;
        while (now != nullptr) {
            cout << now->val;
            now = now->right;
            if (now == nodeOut || now == nullptr)break;
            cout << ',';
        }
        cout << ']' << endl;
        cout << '[';
        now = nodeOut->left;
        while (now != nullptr) {
            cout << now->val;
            now = now->left;
            if (now == nodeOut->left || now == nullptr)break;
            cout << ',';
        }
        cout << ']' << endl;
        return;
    }
    if (outType == "string") {
        cout << strOut << endl;
        return;
    }
    if (outType == "TreeNode*") {
        if (treeOut == nullptr)return;
        queue<TreeNode *> q;
        queue<int> height;
        q.push(treeOut);
        height.push(0);
        while (!q.empty()) {
            TreeNode *now = q.front();
            int h = height.front();
            q.pop();
            height.pop();
            if (now != nullptr) cout << now->val;
            else cout << "null";
            if (height.front() == h) cout << ',';
            else cout << endl;
            if (now != nullptr) {
                q.push(now->left);
                height.push(h + 1);
                q.push(now->right);
                height.push(h + 1);
            }
        }
        return;
    }
    cout << "Wrong outType" << endl;
}