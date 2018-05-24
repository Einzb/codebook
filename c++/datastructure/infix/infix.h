#ifndef INFIX_H
#define INFIX_H


class Infix
{
public:
    Infix();

    void infix2prefix(char *exp);
    void infix2postfix(char *exp);
    int infixeval(char *exp);

private:
    void reverse(char *exp);
    bool isoperand(char ch);
    int prec(char op);
};

#endif // INFIX_H
