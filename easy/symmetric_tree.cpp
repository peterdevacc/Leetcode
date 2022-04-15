//
// Created by Peter on 2022/4/16.
//

#include "symmetric_tree.h"

namespace Easy {

    /*
     * Date: 2020/10/1
     * Runtime: 8 ms, faster than 61.82% of C++ online submissions for Symmetric Tree.
     * Memory Usage: 16.6 MB, less than 33.58% of C++ online submissions for Symmetric Tree.
     * */
    bool isSymmetricIteration(TreeNode *root) {
        vector<TreeNode *> nodeVec{};
        nodeVec.push_back(root);
        nodeVec.push_back(root);

        while (!nodeVec.empty()) {
            auto node1 = nodeVec.front();
            nodeVec.erase(nodeVec.begin());
            auto node2 = nodeVec.front();
            nodeVec.erase(nodeVec.begin());
            if (node1 == nullptr && node2 == nullptr) {
                continue;
            }
            if (node1 == nullptr || node2 == nullptr) {
                return false;
            }
            if (node1->val != node2->val) {
                return false;
            }

            nodeVec.push_back(node1->left);
            nodeVec.push_back(node2->right);
            nodeVec.push_back(node1->right);
            nodeVec.push_back(node2->left);
        }

        return true;
    }

    bool isTheSame(TreeNode *node1, TreeNode *node2);

    /*
     * Date: 2020/10/1
     * Runtime: 8 ms, faster than 61.82% of C++ online submissions for Symmetric Tree.
     * Memory Usage: 16.6 MB, less than 39.96% of C++ online submissions for Symmetric Tree.
     * */
    bool isSymmetricRecursion(TreeNode *root) {
        return isTheSame(root, root);
    }

    bool isTheSame(TreeNode *node1, TreeNode *node2) {
        if (node1 == nullptr && node2 == nullptr) {
            return true;
        }
        if (node1 == nullptr || node2 == nullptr) {
            return false;
        }
        if (node1->val != node2->val) {
            return false;
        }
        return isTheSame(node1->left, node2->right) &&
               isTheSame(node1->right, node2->left);
    }

}
