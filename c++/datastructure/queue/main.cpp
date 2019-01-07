#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    // Sample usage

    Queue<char> cList;
    cList.enqueue('a');
    cList.enqueue('b');
    cList.enqueue('c');

    Queue<char> cListCopy = cList;
    cout << cListCopy.dequeue() << endl; // Output: a
    cout << cListCopy.dequeue() << endl; // Output: b
    cout << cListCopy.dequeue() << endl; // Output: c
    cout << cListCopy.dequeue() << endl; // *throwing error
}
