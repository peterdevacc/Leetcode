//
// Created by Peter on 2022/4/15.
//

#include "maximum_depth_of_binary_tree.h"

namespace Easy {

    /**
    * Date: 2020/9/25
    * Runtime: 12 ms, faster than 74.56% of C++ online submissions for Maximum Depth of Binary Tree.
    * Memory Usage: 19.1 MB, less than 80.39% of C++ online submissions for Maximum Depth of Binary Tree.
    */
    int maxDepthRecursion(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        auto leftDepth = maxDepthRecursion(root->left);
        auto rightDepth = maxDepthRecursion(root->right);

        if (leftDepth > rightDepth) {
            return leftDepth + 1;
        } else {
            return rightDepth + 1;
        }
    }

    /**
     * Date: 2020/9/25
     * Runtime: 8 ms, faster than 95.80% of C++ online submissions for Maximum Depth of Binary Tree.
     * Memory Usage: 19.3 MB, less than 34.18% of C++ online submissions for Maximum Depth of Binary Tree.
     */
    int maxDepthIteration(TreeNode *root) {
        int depth = 0;

        if (root == nullptr) {
            return depth;
        }

        auto additionNode = stack<TreeNode *>{};
        auto path = stack<TreeNode *>{};

        additionNode.push(root);
        while (!additionNode.empty()) {
            auto node = additionNode.top();
            if (!path.empty() && node == path.top()) {
                auto size = path.size();
                if (size > depth) {
                    depth = size;
                }
                path.pop();
                additionNode.pop();
            } else {
                path.push(node);
                if (node->right != nullptr) {
                    additionNode.push(node->right);
                }
                if (node->left != nullptr) {
                    additionNode.push(node->left);
                }
            }
        }

        return depth;
    }

}
