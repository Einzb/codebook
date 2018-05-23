// Example of using stack

#include <iostream>

#include "stack.h"
#include "stack.cpp"

using namespace std;

int main()
{
    Stack<int> a;
    a.push(0);
    a.push(7);
    a.push(2);
    a.push(0);

    a.show();
    return 0;
}
