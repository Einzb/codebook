#ifndef NODE_H
#define NODE_H

// Forward declaration
template <class Type>
class Queue;


template <class Type>
class Node
{
public:
    Node(Type data, Node* next): _data(data), _next(next), _prev(nullptr) {
        if(_next != nullptr) _next->_prev = this;
    }

    // Define friend class
    friend class Queue<Type>;

private:
    Type _data;
    Node *_next;
    Node *_prev;
};

#endif // NODE_H
