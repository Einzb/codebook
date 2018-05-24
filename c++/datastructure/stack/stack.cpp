// code by Jason Huang aka Einz
// github: https://github.com/Einzb
// website: https://einzmind.blogspot.tw
// discord: https://discord.gg/G4jEeDC
// email: jason199786109@gmail.com

#include <iostream>
#include "stack.h"

const int defaultsize = 32;

// Initial with default size
template <class T>
Stack<T>::Stack()
{
    top = -1;
    maxsize = defaultsize;
    data = new int[defaultsize];
}

// Initial with given size
template <class T>
Stack<T>::Stack(int size)
{
    if(size <= 0){
        std::cerr << "*Error: Stack size must >= 0" << std::endl;
        exit(1);
    }
    top = -1;
    maxsize = size;
    data = new int[size];
}

template <class T>
Stack<T>::~Stack()
{
    delete data;
}

// Given an element and add it to top of the stack
template <class T>
void Stack<T>::push(T item)
{
    if(isfull()){
        std::cerr << "Can't push!, Stack is full" << std::endl;
    }
    else{
        data[++top] = item;
    }
}

// Remove the top element in the stack and return it
template <class T>
T Stack<T>::pop()
{
    if(isempty()){
        std::cerr << "Can't pop, Stack is empty" << std::endl;
    }
    else{
        return data[top--];
    }
}

// Return the top element in the stack
template <class T>
T Stack<T>::topitem()
{
    if(top == -1){
        std::cerr << "Stack is empty" << std::endl;
    }
    else{
        return data[top];
    }
}

// Check whether the stack is empty
template <class T>
bool Stack<T>::isempty()
{
    if(top == -1) return true;
    else return false;
}

// Check whether the stack is full
template <class T>
bool Stack<T>::isfull()
{
    if(top == maxsize-1) return true;
    else return false;
}

// Show all the elements in the stack
template <class T>
void Stack<T>::show()
{
    if(top == -1){
        std::cerr << "Stack is empty" << std::endl;
    }
    else{
        for(int i=0; i<=top; ++i){
            std::cout << "item " << i << " = "
                      << data[i] << std::endl;
        }
    }
}

