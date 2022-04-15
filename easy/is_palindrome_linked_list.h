//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_IS_PALINDROME_LINKED_LIST_H
#define LEETCODE_IS_PALINDROME_LINKED_LIST_H

#include "easy_util.h"

struct ListNodeForIsPalindrome {
    int val;
    ListNodeForIsPalindrome *next;

    ListNodeForIsPalindrome() : val(0), next(nullptr) {}

    ListNodeForIsPalindrome(int x) : val(x), next(nullptr) {}

    ListNodeForIsPalindrome(int x, ListNodeForIsPalindrome *next) : val(x), next(next) {}
};

namespace Easy {

    bool isPalindromeLinkedList(ListNodeForIsPalindrome *head);

}

#endif //LEETCODE_IS_PALINDROME_LINKED_LIST_H
