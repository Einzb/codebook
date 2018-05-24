// Example code of using my infix library

#include <iostream>
#include <stack>

#include "infix.h"

using namespace std;

int main()
{
    Infix a;
    char msg[] = "12 + 32 * (42 - 5)";
    a.infix2postfix(msg);
    cout<<msg<<endl;
    return 0;
}
