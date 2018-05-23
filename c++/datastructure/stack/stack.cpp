#include <iostream>
#include "stack.h"

const int defaultsize = 32;

template <class T>
Stack<T>::Stack()
{
    top = -1;
    maxsize = defaultsize;
    data = new int[defaultsize];
}

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

template <class T>
void Stack<T>::push(T item)
{
    if(top == maxsize-1){
        std::cout<<"Can't push!, Stack is full"<<std::endl;
    }
    else{
        data[++top] = item;
    }
}

template <class T>
T Stack<T>::pop()
{

}

template <class T>
T Stack<T>::topitem()
{

}

template <class T>
bool Stack<T>::empty()
{

}

template <class T>
bool Stack<T>::full()
{

}

template <class T>
void Stack<T>::show()
{
    if(top == -1){
        std::cout << "Stack is empty" << std::endl;
    }
    else{
        for(int i=0; i<=top; ++i){
            std::cout << "item " << i << " = "
                      << data[i] << std::endl;
        }
    }
}

