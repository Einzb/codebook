#include "queue.h"
#include <stdexcept>

template <class Type>
Queue<Type>::Queue(const Queue &list): _head(nullptr), _tail(nullptr)
{
    clear();
    nodeType *iter = list._tail;
    while(iter != nullptr) {
        enqueue(iter->_data);
        iter = iter->_prev;
    }
}

template <class Type> void
Queue<Type>::enqueue(Type data)
{
    _head = new Node<Type>(data, _head);
    if(_tail == nullptr) _tail = _head;
}

template <class Type> Type
Queue<Type>::dequeue()
{
    if(_tail == nullptr) {
        throw std::runtime_error("Attempt to dequeue empty queue");
    }
    Type data = _tail->_data;

    if(_tail->_prev != nullptr) {
        _tail = _tail->_prev;
        delete _tail->_next;
        _tail->_next = nullptr;
    } else {
        delete _tail;
        _tail = nullptr;
    }

    return data;
}

template <class Type> void
Queue<Type>::clear()
{
    while(_tail != nullptr) dequeue();
}


template class Queue<int>;
template class Queue<char>;
