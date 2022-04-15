//
// Created by Peter on 2022/4/16.
//

#ifndef LEETCODE_ADD_TWO_NUMBERS_H
#define LEETCODE_ADD_TWO_NUMBERS_H

#include "medium_util.h"

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

namespace Medium {

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);

}

#endif //LEETCODE_ADD_TWO_NUMBERS_H
