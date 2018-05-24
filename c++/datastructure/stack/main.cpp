// Example of using stack

#include <iostream>

#include "stack.h"
#include "stack.cpp"

using namespace std;

void show_help()
{
    cout << " ------------- "<<endl
         << " HELP: 0" <<endl
         << " PUSH: 1" <<endl
         << " POP: 2" <<endl
         << " TOP: 3" <<endl
         << " FULL?: 4" <<endl
         << " EMPTY?: 5" <<endl
         << " SHOW: 6" <<endl
         << " ------------- "<<endl;
}

int main()
{
    Stack<int> stack;

    show_help();

    int instr;
    while(cin>>instr){
        if(instr == 0){
            show_help();
        }
        if(instr == 1){
            cout<<" PUSH >> ";
            int num; cin>>num;
            stack.push(num);
        }
        else if(instr == 2){
            cout<<" POP: "<<stack.pop()<<endl;
        }
        else if(instr == 3){
            cout<<" TOP: "<<stack.topitem()<<endl;
        }
        else if(instr == 4){
            cout<<" FULL? "<<stack.isfull()<<endl;
        }
        else if(instr == 5){
            cout<<" EMPTY? "<<stack.isempty()<<endl;
        }
        else if(instr == 6){
            stack.show();
        }
    }

    return 0;
}
