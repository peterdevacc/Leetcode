//
// Created by Peter on 2022/4/16.
//

#ifndef LEETCODE_REVERSE_LINKED_LIST_H
#define LEETCODE_REVERSE_LINKED_LIST_H

#include "easy_util.h"

/**
     * Definition for singly-linked list.
     * struct ListNode {
     *     int val;
     *     ListNode *next;
     *     ListNode() : val(0), next(nullptr) {}
     *     ListNode(int x) : val(x), next(nullptr) {}
     *     ListNode(int x, ListNode *next) : val(x), next(next) {}
     * };
     */
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    explicit ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

namespace Easy {

    ListNode *reverseListIteration(ListNode *head);

    ListNode *reverseListRecursion(ListNode *head);

}

#endif //LEETCODE_REVERSE_LINKED_LIST_H
