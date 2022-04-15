//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_MERGE_TWO_SORTED_LISTS_H
#define LEETCODE_MERGE_TWO_SORTED_LISTS_H

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

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);

}

#endif //LEETCODE_MERGE_TWO_SORTED_LISTS_H
