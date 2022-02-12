#ifndef LEETCODE_OUTPUT_H
#define LEETCODE_OUTPUT_H

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "mystruct.h"

using namespace std;

class Output {
public:
    static void getOutput(string &outType, int intOut, const vector<int> &vecOut, const vector<vector<int>> &matrixOut,
                          const vector<string> &vecStrOut, ListNode *listOut, Node *nodeOut, const string &strOut,
                          TreeNode *treeOut);
};


#endif //LEETCODE_OUTPUT_H
