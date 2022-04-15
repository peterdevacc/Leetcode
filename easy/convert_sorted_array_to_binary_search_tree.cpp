//
// Created by Peter on 2022/4/15.
//

#include "convert_sorted_array_to_binary_search_tree.h"

namespace Easy {

    /*
     * Date: 2020/9/27
     * Runtime: 20 ms, faster than 72.24% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
     * Memory Usage: 26.1 MB, less than 17.71% of C++ online submissions for Convert Sorted Array to Binary Search Tree.
     * */
    TreeNode *sortedArrayToBSTRecursionHelper(vector<int> &nums, long start, long end);

    TreeNode *sortedArrayToBSTRecursion(vector<int> &nums) {
        auto size = nums.size() - 1;
        return sortedArrayToBSTRecursionHelper(nums, 0, size);
    }

    TreeNode *sortedArrayToBSTRecursionHelper(vector<int> &nums, long start, long end) {
        if (start > end) {
            return nullptr;
        }

        auto mid = (start + end) / 2;
        auto root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBSTRecursionHelper(nums, start, mid - 1);
        root->right = sortedArrayToBSTRecursionHelper(nums, mid + 1, end);

        return root;
    }

}
