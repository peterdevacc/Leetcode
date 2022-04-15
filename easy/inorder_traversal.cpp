//
// Created by Peter on 2022/4/15.
//

#include "inorder_traversal.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 0 ms, faster than 100.00% of C++ online submissions for Binary Tree Inorder Traversal.
     * Memory Usage: 8.4 MB, less than 60.07% of C++ online submissions for Binary Tree Inorder Traversal.
     * */
    vector<int> inorderTraversal(TreeNode *root) {
        auto result = vector<int>{};
        auto save = stack<TreeNode *>{};

        while (root != nullptr) {
            save.push(root);
            root = root->left;
        }

        while (!save.empty()) {
            auto node = save.top();
            save.pop();
            result.push_back(node->val);
            auto rightSub = node->right;
            if (rightSub != nullptr) {
                save.push(rightSub);
                auto tempRightSub = rightSub;
                while (tempRightSub->left != nullptr) {
                    save.push(tempRightSub->left);
                    tempRightSub = tempRightSub->left;
                }
            }
        }

        return result;
    }

}
