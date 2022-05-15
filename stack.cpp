#include <stdlib.h>
#include <iostream>
#include "stack.h"

Stack::Stack(int _size){
    m_size = _size;
    m_arr = new int[m_size];
}

Stack::~Stack(){
    free(m_arr);
}

void Stack::push(int _num){
    if(m_top == m_size) {std::cout<<"Stack overflow"<<std::endl;}

    else {
        m_top += 1;
        m_arr[m_top] = _num;
    }
}

void Stack::pop(){
    if(m_top == -1) {std::cout<<"Stack underflow"<<std::endl;}

    else {m_top -= 1;}
}

int Stack::peek(){
    if(m_top == -1){
        std::cout<<"Stack empty"<<std::endl;
        return -1;
    }

    else{std::cout<<m_arr[m_top]<<std::endl;}
}

void Stack::display(){
    if(m_top == -1){std::cout<<"Stack empty"<<std::endl;}

    else {
        for(int i=0;i<=m_top;i++){
            std::cout<<m_arr[i]<<" ";
        }
        std::cout<<std::endl;
    }
}

