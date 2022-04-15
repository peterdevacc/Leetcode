//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H
#define LEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H

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

    int maxDepthRecursion(TreeNode *root);

    int maxDepthIteration(TreeNode *root);

}

#endif //LEETCODE_MAXIMUM_DEPTH_OF_BINARY_TREE_H
