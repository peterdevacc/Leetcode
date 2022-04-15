//
// Created by Peter on 2022/4/15.
//

#include "delete_node.h"

namespace Easy {

    /*
     * Date: 2020/9/25
     * Runtime: 16 ms, faster than 86.22% of C++ online submissions for Delete Node in a Linked List.
     * Memory Usage: 7.7 MB, less than 100.00% of C++ online submissions for Delete Node in a Linked List.
     * */
    void deleteNode(ListNode *node) {
        auto tmp = node->next;
        node->val = tmp->val;
        node->next = tmp->next;
        delete tmp;
    }

}
