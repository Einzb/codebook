// code by Jason Huang aka Einz
// github: https://github.com/Einzb
// website: https://einzmind.blogspot.tw
// discord: https://discord.gg/G4jEeDC
// email: jason199786109@gmail.com

#include <stack>
#include <algorithm>
#include <cstring>
#include <iostream>

#include "infix.h"
using namespace std;

Infix::Infix()
{
}

// Given an infix expression and convert it to postfix expression
void Infix::infix2postfix(char *exp)
{
    stack<char> myoperator; // A stack to hold operator
    int len = strlen(exp), pos(0);

    for(int i(0); i<len; ++i){
        if(isoperand(exp[i])){
            exp[pos++] = exp[i];
        }
        else if(exp[i] == '('){
            myoperator.push(exp[i]);
        }
        else if(exp[i] == ')'){
            // Get and pop in stack until encounter '('
            while(myoperator.top() != '('){
                exp[pos++] = myoperator.top();
                myoperator.pop();
            } myoperator.pop();
        }
        else{
            while(!myoperator.empty() &&
                  (prec(exp[i]) <= prec(myoperator.top()))){
                exp[pos++] = myoperator.top();
                myoperator.pop();
            }
            myoperator.push(exp[i]);
        }
    }
    // Get all the operators left in stack
    while(!myoperator.empty()){
        exp[pos++] = myoperator.top();
        myoperator.pop();
    }

    exp[pos] = '\0';
}

void Infix::infix2prefix(char *exp)
{

}

int Infix::infixeval(char *exp)
{

}

// Given an char array and reverse it
void Infix::reverse(char *exp)
{
    int len = strlen(exp);

    for(int i(0); i<(len/2); ++i){
        swap(exp[i], exp[len-1-i]);
    }
}

// Given an char and check Whether it is an operand
bool Infix::isoperand(char ch)
{
    if(isdigit(ch) || isalpha(ch) || isspace(ch)) return true;
    else return false;
}

// Given an operator and return back it's precedence
// Higher the returned value is means higher the precedence is.
int Infix::prec(char op)
{
    switch(op)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    default:
        return -1;
    }
}
