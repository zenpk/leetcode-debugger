#include <string>
#include <vector>
#include "Input.h"
#include "mystruct.h"
#include "Output.h"
#include "Solution.h"

using namespace std;

int main() {
    // Types of I/O
    int intIn = 0, intOut = 0;
    vector<int> vecIn, vecOut;
    vector<vector<int>> matrixIn, matrixOut;
    vector<string> vecStrIn, vecStrOut;
    ListNode *listIn = new ListNode, *listOut = nullptr;
    Node *nodeIn = new Node, *nodeOut = nullptr;
    string strIn, strOut;
    TreeNode *treeIn = new TreeNode, *treeOut = nullptr;

    // --- INPUT ---
    /* Input examples:
     * TYPE 1:
     *          1. int: s1 = "1"
     *          2. vector<int>: s1 = "[1,2,3,4]"
     *          3. vector<vector<int>>: s1 = "[[1,2,3],[2,3,4],[3,4,5]]"
     *          4. vector<string>: s1 = R"(["abc","def"])"
     *          5. ListNode*: s1 = "[1,2,3,4]"
     *          6. Node*: currently only output supported
     *          7. string: s1 = "abc"
     *          8. TreeNode*: s1 = "[3,9,20,null,null,15,7]"
     * TYPE 2:
     *          1. TreeNode*: s1 = "[7,3,15,9,20]" (pre-order), s2 = "[3,7,9,15,20]" (In-order) (BINARY TREE ONLY)
     *          2. multiple calls: currently not supported
     */
    string inType = "TreeNode*"; // for function "getInput"
    string outType = "TreeNode*"; // for function "getOutput"
    string s1 = "[3,9,20,null,null,15,7]"; // for TYPE 1, you only need to specify s1
    string s2 = ""; // for TYPE 2, you need to specify both s1 and s2
    // --- INPUT END ---

    // Get input
    Input::getInput(inType, s1, s2, intIn, vecIn, matrixIn, vecStrIn, listIn, strIn, treeIn);

    // --- SOLUTION ---
    auto *sol = new Solution();
    // OUTPUT = sol->FUNCTION_NAME(INPUT); // call your solution here
    treeOut = treeIn; // direct output (for demonstration)
    // --- SOLUTION END ---

    // Get output
    Output::getOutput(outType, intOut, vecOut, matrixOut, vecStrOut, listOut, nodeOut, strOut, treeOut);

    return 0;
}
