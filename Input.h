#ifndef LEETCODE_INPUT_H
#define LEETCODE_INPUT_H

#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <string>
#include "mystruct.h"

using namespace std;

class Input {
public:
    static void
    getInput(string &inType, string &s1, string &s2, int &intIn, vector<int> &vecIn, vector<vector<int>> &matrixIn,
             vector<string> &vecStrIn, ListNode *listIn, string &strIn, TreeNode *treeIn);

};


#endif //LEETCODE_INPUT_H
