//
// Created by Peter on 2022/4/15.
//

#ifndef LEETCODE_MIN_STACK_H
#define LEETCODE_MIN_STACK_H

class MyStack {
public:
    int val;
    int min;
    MyStack *next = nullptr;

    MyStack(int val, MyStack *next) {
        this->val = val;
        if (next != nullptr) {
            if (this->val > next->min) {
                this->min = next->min;
            } else {
                this->min = this->val;
            }
            this->next = next;
        } else {
            this->min = this->val;
        }
    }
};

namespace Easy {

    class MinStack;

}

#endif //LEETCODE_MIN_STACK_H
