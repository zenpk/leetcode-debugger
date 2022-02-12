# LeetCode-Debugger

A simple and crappy LeetCode problems debugger.

## How to Use
- Copy the LeetCode problem's input and paste it into `s1` in `main.cpp`
- Specify the input type and the output type (`inType` and `outType`)
- Code your Solution in `Solution.h`
- Call your Solution class in `main.cpp`, the program will automatically output the result.

## Supported I/O Type

1. int (e.g. [Problem 7](https://leetcode.com/problems/reverse-integer/))
2. vector\<int\> (e.g. [Problem 1](https://leetcode.com/problems/two-sum/))
3. vector\<vector\<int\>\> (e.g. [Problem 54](https://leetcode.com/problems/spiral-matrix/))
3. vector\<string\> (e.g. [Problem 539](https://leetcode.com/problems/minimum-time-difference/))
4. ListNode\* (e.g. [Problem 2](https://leetcode.com/problems/add-two-numbers/)) 
4. Doubly Linked List (Node*) (OUTPUT SUPPORT ONLY e.g. haven't found yet)
7. string (e.g. [Problem 6](https://leetcode.com/problems/zigzag-conversion/))
6. Binary Tree (TreeNode*) (e.g. [Problem Offer 32](https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof/))
7. Binary Tree (TreeNode*) (An alternative way: Manually set the input tree's pre-order traversal as `s1` and in-order traversal as `s2`)

## Examples
### Problem 1 ([link](https://leetcode.com/problems/two-sum/))
```c++
inType = "vector<int>", outType = "vector<int>";
s1 = "[2,7,11,15]";
vecOut = sol->twoSum(vecIn, 9);
```
```
Output: 
[0,1]
```
### Direct Output vector\<string\>
```c++
inType = "vector<string>", outType = "vector<string>"
s1 = R"(["abcde","12345"])"; // use R to avoid using '\'
vecStrOut = vecStrIn;
```
```
Output:
["abcde","12345"]
```
### Direct Output a Binary Tree
To create a binary tree as shown below:

<img src=".\treeExample.png" alt="Binary Tree">

```c++
inType = "TreeNode*", outType = "TreeNode*";
s1 = "[5,3,1,0,2,4,6,8,7]";
s2 = "[0,1,2,3,4,5,6,7,8]";
treeOut = treeIn;
```
```
Output:
5
3,6
1,4,Null,8
0,2,Null,Null,7,Null
Null,Null,Null,Null,Null,Null
```
