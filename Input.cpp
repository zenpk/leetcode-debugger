#include "Input.h"

void strToVec(std::string &s, std::vector<int> &vec) {
    std::string temp;
    for (std::string::iterator it = s.begin(); it < s.end(); it++) {
        while (*it != ',' && *it != ']') {
            if (*it != '[' && *it != ' ') temp += *it;
            it++;
        }
        vec.push_back(stoi(temp));
        temp.clear();
    }
}

void createTree(std::vector<int> &pre, std::vector<int> &in, TreeNode *head) {
    int n = (int) pre.size();
    TreeNode *now = head;
    std::stack<TreeNode *> history;
    std::stack<int> nodeStack;
    int j = 0;
    for (int i = 0; i < n; i++) {
        now->val = pre[i];
        nodeStack.push(pre[i]);
        history.push(now);
        if (in[j] != nodeStack.top()) {
            if (i + 1 < n) {
                now->left = new TreeNode;
                now = now->left;
                now->left = now->right = nullptr;
            }
            continue;
        }
        while (in[j] == nodeStack.top()) {
            nodeStack.pop();
            j++;
            now = history.top();
            history.pop();
            if (nodeStack.empty()) break;
        }
        if (i + 1 < n) {
            now->right = new TreeNode;
            now = now->right;
            now->left = now->right = nullptr;
        }
    }
}

void strToTree(std::string s, TreeNode *head) {
    std::vector<int> val;
    std::vector<int> nullFlag;
    std::string temp;
    for (std::string::iterator it = s.begin(); it < s.end(); it++) {
        if (*it != '[' && *it != ' ') {
            if (*it != ',' && *it != ']')temp += *it;
            else {
                if (temp == "null") {
                    val.push_back(0);
                    nullFlag.push_back(1);
                } else {
                    val.push_back(stoi(temp));
                    nullFlag.push_back(0);
                }
                temp.clear();
            }
        }
    }
    head->val = val[0];
    std::queue<TreeNode *> q;
    q.push(head);
    int n = val.size();
    int pos = 1;
    while (!q.empty()) {
        for (int i = q.size(); i > 0; i--) {
            TreeNode *temp = q.front();
            q.pop();
            if (!nullFlag[pos]) {
                temp->left = new TreeNode;
                temp->left->val = val[pos];
                q.push(temp->left);
            }
            pos++;
            if (!nullFlag[pos]) {
                temp->right = new TreeNode;
                temp->right->val = val[pos];
                q.push(temp->right);
            }
            pos++;
        }
        if (pos >= n)break;
    }
}

void Input::getInput(std::string &inType, std::string &s1, std::string &s2, int &intIn, std::vector<int> &vecIn,
                     std::vector<std::vector<int>> &matrixIn, std::vector<std::string> &vecStrIn, ListNode *listIn,
                     std::string &strIn, TreeNode *treeIn) {
    if (s1.length() == 0) {
        std::cout << "wrong s1" << std::endl;
        return;
    }
    if (inType == "int") {
        intIn = stoi(s1);
        return;
    }
    if (inType == "vector<int>") {
        strToVec(s1, vecIn);
        return;
    }
    if (inType == "vector<vector<int>>") {
        std::vector<int> vecTemp;
        std::string temp;
        for (std::string::iterator it = s1.begin(); it < s1.end(); it++) {
            while (*it != ',' && *it != ']') {
                if (*it != '[' && *it != ' ') temp += *it;
                it++;
            }
            if (temp.length() == 0) continue;
            vecTemp.push_back(stoi(temp));
            temp.clear();
            if (*it == ']') {
                matrixIn.push_back(vecTemp);
                vecTemp.clear();
            }
        }
        return;
    }
    if (inType == "vector<string>") {
        std::string temp;
        for (std::string::iterator it = s1.begin(); it < s1.end(); it++) {
            while (*it != ',' && *it != ']') {
                if (*it != '"' && *it != '[') temp += *it;
                it++;
            }
            vecStrIn.push_back(temp);
            temp.clear();
        }
        return;
    }
    if (inType == "ListNode*") {
        std::vector<int> temp;
        strToVec(s1, temp);
        ListNode *now = listIn;
        int i = 0;
        for (; i < temp.size() - 1; i++) {
            now->val = temp[i];
            now->next = new ListNode;
            now = now->next;
        }
        now->val = temp[i];
        now->next = nullptr;
        return;
    }
    if (inType == "string") {
        strIn = s1;
        return;
    }
    if (inType == "TreeNode*") {
        if (s2.length() != 0) {
            std::vector<int> vec1, vec2;
            strToVec(s1, vec1);
            strToVec(s2, vec2);
            createTree(vec1, vec2, treeIn);
            return;
        } else {
            strToTree(s1, treeIn);
            return;
        }
    }
    std::cout << "Wrong inType" << std::endl;
}
