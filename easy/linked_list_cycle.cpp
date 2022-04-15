//
// Created by Peter on 2022/4/15.
//

#include "linked_list_cycle.h"

namespace Easy {

    /*
     * Date: 2020/10/4
     * Runtime: 12 ms, faster than 60.01% of C++ online submissions for Linked List Cycle.
     * Memory Usage: 7.9 MB, less than 22.06% of C++ online submissions for Linked List Cycle.
     * */
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {
            return false;
        }

        auto slow = head;
        auto fast = head->next;
        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }

}
