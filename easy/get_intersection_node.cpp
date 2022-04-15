//
// Created by Peter on 2022/4/15.
//

#include "get_intersection_node.h"

namespace Easy {

    /*
     * Date: 2021/12/20
     * Runtime: 40 ms, faster than 86.73% of C++ online submissions for Intersection of Two Linked Lists.
     * Memory Usage: 14.5 MB, less than 71.34% of C++ online submissions for Intersection of Two Linked Lists.
     * */
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        auto tempA = headA;
        auto tempB = headB;

        auto sizeA = 0;
        auto sizeB = 0;
        while (tempA != nullptr) {
            sizeA += 1;
            tempA = tempA->next;
        }
        while (tempB != nullptr) {
            sizeB += 1;
            tempB = tempB->next;
        }

        auto listA = headA;
        auto listB = headB;
        if (sizeA > sizeB) {
            auto skip = sizeA - sizeB;
            for (int i = 0; i < skip; ++i) {
                if (listA == nullptr) {
                    return nullptr;
                }
                listA = listA->next;
            }

            while (listA != nullptr && listB != nullptr) {
                if (listA == listB) {
                    return listA;
                }

                listA = listA->next;
                listB = listB->next;
            }
        } else {
            auto skip = sizeB - sizeA;
            for (int i = 0; i < skip; ++i) {
                if (listB == nullptr) {
                    return nullptr;
                }
                listB = listB->next;
            }

            while (listB != nullptr && listA != nullptr) {
                if (listB == listA) {
                    return listB;
                }

                listB = listB->next;
                listA = listA->next;
            }
        }

        return nullptr;
    }

}
