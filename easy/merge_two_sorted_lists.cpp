//
// Created by Peter on 2022/4/15.
//

#include "merge_two_sorted_lists.h"

namespace Easy {

    /*
     * Date: 2020/9/29
     * Runtime: 8 ms, faster than 81.51% of C++ online submissions for Merge Two Sorted Lists.
     * Memory Usage: 15.2 MB, less than 6.90% of C++ online submissions for Merge Two Sorted Lists.
     * */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if (l2 == nullptr) {
            return l1;
        }
        if (l1 == nullptr) {
            return l2;
        }

        auto *result = new ListNode;
        auto tmp = result;
        auto l1Counter = 0;
        auto l2Counter = 0;
        auto resultCounter = 0;
        while (l1 != nullptr && l2 != nullptr) {
            int val;
            if (l1->val < l2->val) {
                val = l1->val;
                l1 = l1->next;
                l1Counter += 1;
            } else {
                val = l2->val;
                l2 = l2->next;
                l2Counter += 1;
            }
            if (resultCounter == 0) {
                tmp->val = val;
            } else {
                tmp->next = new ListNode{val};
                tmp = tmp->next;
            }
            resultCounter++;
        }

        if (l1 == nullptr && l2 != nullptr) {
            while (l2 != nullptr) {
                tmp->next = new ListNode{l2->val};
                tmp = tmp->next;
                l2 = l2->next;
            }
        } else if (l1 != nullptr && l2 == nullptr) {
            while (l1 != nullptr) {
                tmp->next = new ListNode{l1->val};
                tmp = tmp->next;
                l1 = l1->next;
            }
        }

        return result;
    }

}
