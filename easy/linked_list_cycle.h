//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_LINKED_LIST_CYCLE_H
#define LEETCODE_LINKED_LIST_CYCLE_H

#include "easy_util.h"

/**
     * Definition for singly-linked list.
     * struct ListNode {
     *     int val;
     *     ListNode *next;
     *     ListNode(int x) : val(x), next(NULL) {}
     * };
     */
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

namespace Easy {

    bool hasCycle(ListNode *head);

}

#endif //LEETCODE_LINKED_LIST_CYCLE_H
