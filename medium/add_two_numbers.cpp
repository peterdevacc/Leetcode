//
// Created by Peter on 2022/4/16.
//

#include "add_two_numbers.h"

namespace Medium {

    /*
    * Date: 2020/9/25
    * Runtime: 48 ms, faster than 31.73% of C++ online submissions for Add Two Numbers.
    * Memory Usage: 71.4 MB, less than 5.05% of C++ online submissions for Add Two Numbers.
    */
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        ListNode *result = l1;
        vector<int> v1{};
        vector<int> v2{};
        while (l1 != nullptr) {
            v1.push_back(l1->val);
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            v2.push_back(l2->val);
            l2 = l2->next;
        }
        auto vs1 = v1.size();
        auto vs2 = v2.size();
        bool addOne = false;
        if (vs1 == vs2) {
            auto save = t1;
            for (int i = 0; i < vs1; i++) {
                auto v = v1[i] + v2[i];
                if (addOne) {
                    v += 1;
                }
                if (v < 10) {
                    t1->val = v;
                    addOne = false;
                } else {
                    auto r = v % 10;
                    t1->val = r;
                    addOne = true;
                }
                save = t1;
                t1 = t1->next;
            }
            if (addOne) {
                auto node = new ListNode(1);
                save->next = node;
            }
        } else if (vs1 > vs2) {
            auto save = t1;
            for (int i = 0; i < vs1; i++) {
                int v = v1[i];
                if (i < vs2) {
                    v = v1[i] + v2[i];
                }
                if (addOne) {
                    v += 1;
                }
                if (v < 10) {
                    t1->val = v;
                    addOne = false;
                } else {
                    auto r = v % 10;
                    t1->val = r;
                    addOne = true;
                }
                save = t1;
                t1 = t1->next;
            }
            if (addOne) {
                auto node = new ListNode(1);
                save->next = node;
            }
        } else {
            result = t2;
            auto save = t2;
            for (int i = 0; i < vs2; i++) {
                int v = v2[i];
                if (i < vs1) {
                    v = v1[i] + v2[i];
                }
                if (addOne) {
                    v += 1;
                }
                if (v < 10) {
                    t2->val = v;
                    addOne = false;
                } else {
                    auto r = v % 10;
                    t2->val = r;
                    addOne = true;
                }
                save = t2;
                t2 = t2->next;
            }
            if (addOne) {
                auto node = new ListNode(1);
                save->next = node;
            }
        }

        return result;
    }

}
