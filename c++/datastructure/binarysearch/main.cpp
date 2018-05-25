// Example code of using my binarysearch library

#include <iostream>

#include "binarysearch.h"
#include "binarysearch.cpp"
using namespace std;

int main()
{
    int list[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    BinarySearch<int> a;
    for(int i(-1); i<=10; ++i){
        int index = a.search(i, list, 0, 9);

        if(index != -1)
            cout << "list[" << index << "] = " << i << endl;
        else
            cout << "No element " << i << " in the list!" << endl;
    }
    return 0;
}
