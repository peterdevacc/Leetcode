//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
#define LEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H

#include "easy_util.h"

/**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     * };
     */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

namespace Easy {

    /*
     * Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
     * For this problem, a height-balanced binary tree is defined as a binary tree
     * in which the depth of the two subtrees of every node never differ by more than 1.
     * */
    TreeNode *sortedArrayToBSTIteration(vector<int> &nums);

    TreeNode *sortedArrayToBSTRecursion(vector<int> &nums);

}

#endif //LEETCODE_CONVERT_SORTED_ARRAY_TO_BINARY_SEARCH_TREE_H
