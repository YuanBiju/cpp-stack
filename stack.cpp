#include <stdlib.h>
#include <iostream>
#include "stack.h"

Stack::Stack(int _size){
    msize = _size;
    marr = (int*)malloc(_size*sizeof(int));
}

void Stack::push(int _num){
    if(mtop == msize) {std::cout<<"Stack overflow"<<std::endl;}

    else {
        mtop += 1;
        marr[mtop] = _num;
    }
}

void Stack::pop(){
    if(mtop == -1) {std::cout<<"Stack underflow"<<std::endl;}

    else {mtop -= 1;}
}

int Stack::peek(){
    if(mtop == -1){
        std::cout<<"Stack empty"<<std::endl;
        return -1;
    }

    else{std::cout<<marr[mtop]<<std::endl;}
}

void Stack::display(){
    if(mtop == -1){std::cout<<"Stack empty"<<std::endl;}

    else {
        for(int i=0;i<=mtop;i++){
            std::cout<<marr[i]<<" ";
        }
        std::cout<<std::endl;
    }
}

