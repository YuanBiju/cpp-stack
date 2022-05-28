#include "stack.h"
#include <iostream>

int main(){
    Stack s0(5);
    s0.push(1);
    s0.push(2);
    s0.push(3);
    s0.push(4);
    s0.push(5);
    s0.display();
    s0.reverse();
    s0.display();

}