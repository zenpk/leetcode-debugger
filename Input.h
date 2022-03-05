#ifndef LEETCODE_INPUT_H
#define LEETCODE_INPUT_H

#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <string>
#include "mystruct.h"


class Input {
public:
    static void getInput(std::string &inType, std::string &s1, std::string &s2, int &intIn, std::vector<int> &vecIn,
                         std::vector<std::vector<int>> &matrixIn, std::vector<std::string> &vecStrIn, ListNode *listIn,
                         std::string &strIn, TreeNode *treeIn);

};


#endif //LEETCODE_INPUT_H
