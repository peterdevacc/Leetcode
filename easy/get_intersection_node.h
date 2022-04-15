//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_GET_INTERSECTION_NODE_H
#define LEETCODE_GET_INTERSECTION_NODE_H

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

    void deleteNode(ListNode *node);

}

#endif //LEETCODE_GET_INTERSECTION_NODE_H
