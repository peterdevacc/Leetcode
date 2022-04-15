//
// Created by Peter on 2022/4/15.
//

#include "is_palindrome_linked_list.h"

namespace Easy {

    /*
     * Date: 2021/12/20
     * Runtime: 208 ms, faster than 63.33% of C++ online submissions for Palindrome Linked List.
     * Memory Usage: 123.4 MB, less than 21.30% of C++ online submissions for Palindrome Linked List.
     * */
    bool isPalindromeLinkedList(ListNodeForIsPalindrome *head) {
        auto reverse = stack<int>{};
        auto temp = head;
        while (temp != nullptr) {
            reverse.push(temp->val);
            temp = temp->next;
        }

        while (head != nullptr) {
            if (head->val != reverse.top()) {
                return false;
            }

            reverse.pop();
            head = head->next;
        }

        return true;
    }

}
