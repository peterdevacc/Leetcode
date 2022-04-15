//
// Created by Peter on 2022/4/16.
//

#include "reverse_linked_list.h"

namespace Easy {

    /*
     * Date: 2020/9/25
     * Runtime: 8 ms, faster than 67.98% of C++ online submissions for Reverse Linked List.
     * Memory Usage: 8.6 MB, less than 12.96% of C++ online submissions for Reverse Linked List.
     * */
    ListNode *reverseListIteration(ListNode *head) {
        auto reverse = stack<int>{};

        auto tmp = head;
        while (tmp != nullptr) {
            reverse.push(tmp->val);
            tmp = tmp->next;
        }

        auto result = head;
        while (result != nullptr) {
            result->val = reverse.top();
            reverse.pop();
            result = result->next;
        }

        return head;
    }

    /*
     * Date: 2020/9/25
     * Runtime: 8 ms, faster than 67.98% of C++ online submissions for Reverse Linked List.
     * Memory Usage: 8.7 MB, less than 7.32% of C++ online submissions for Reverse Linked List.
     * */
    ListNode *reverseListRecursion(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }

        if (head->next == nullptr) {
            return head;
        }

        auto remain = reverseListRecursion(head->next);

        head->next->next = head;
        head->next = nullptr;

        return remain;
    }

}
