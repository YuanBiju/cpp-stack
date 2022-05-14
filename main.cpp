#include "stack.h"
#include <iostream>

int main(){
    Stack s0(5);
    s0.push(1);
    s0.push(2);
    s0.peek();
    s0.pop();
    s0.peek();
    s0.pop();
    s0.peek();

}