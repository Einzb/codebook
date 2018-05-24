#ifndef STACK_H
#define STACK_H


template <class T>
class Stack
{
public:
    Stack();
    Stack(int size);
    ~Stack();

    void push(T item);
    T pop();
    T topitem();
    bool isempty();
    bool isfull();
    void show();

private:
    T *data;
    int top;
    int maxsize;
};

#endif // STACK_H
