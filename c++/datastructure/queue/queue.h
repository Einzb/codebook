#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

template <class Type>
class Queue
{
    typedef Node<Type> nodeType;

public:
    Queue(): _head(nullptr), _tail(nullptr) {}
    Queue(const Queue &list);
    void enqueue(Type data);
    Type dequeue();
    void clear();

private:
    nodeType *_head;
    nodeType *_tail;
};

#endif // LINKEDLIST_H
