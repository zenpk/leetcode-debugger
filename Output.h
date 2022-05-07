#ifndef LEETCODE_OUTPUT_H
#define LEETCODE_OUTPUT_H

#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include "mystruct.h"


class Output {
public:
    static void getOutput(std::string &outType, int intOut, const std::vector<int> &vecOut,
                          const std::vector<std::vector<int>> &matrixOut, const std::vector<std::string> &vecStrOut,
                          ListNode *listOut, Node *nodeOut, const std::string &strOut, TreeNode *treeOut);
};


#endif //LEETCODE_OUTPUT_H
