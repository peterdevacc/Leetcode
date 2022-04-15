//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_INORDER_TRAVERSAL_H
#define LEETCODE_INORDER_TRAVERSAL_H

#include "easy_util.h"


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

namespace Easy {

    vector<int> inorderTraversal(TreeNode *root);

}

#endif //LEETCODE_INORDER_TRAVERSAL_H
