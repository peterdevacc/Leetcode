//
// Created by Peter on 2022/4/15.
//

#include "min_stack.h"

namespace Easy {

    /*
     * Date: 2021/12/19
     * Runtime: 16 ms, faster than 97.54% of C++ online submissions for Min Stack.
     * Memory Usage: 16.5 MB, less than 34.34% of C++ online submissions for Min Stack.
     * */
    class MinStack {
    private:
        MyStack *myStack = nullptr;
    public:
        MinStack() {

        }

        void push(int val) {
            if (myStack == nullptr) {
                this->myStack = new MyStack(val, nullptr);
            } else {
                this->myStack = new MyStack(val, this->myStack);
            }
        }

        void pop() {
            this->myStack = this->myStack->next;
        }

        int top() {
            return myStack->val;
        }

        int getMin() {
            return myStack->min;
        }
    };

}
