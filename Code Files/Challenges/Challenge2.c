/*
Challenge Description:
You are given a program that gets three inputs from the user, op (char), n1 (int) and n2 (int).

Your task is to add code that initializes a new variable res (int) which will hold the following:

if op equals to '+', res will hold n1 + n2.

else if op equals to '-', res will hold n1 - n2.

else if op equals to '*', res will hold n1 * n2.

else res will hold 0.
*/

#include <stdio.h>

int main()
{
    char op;
    int n1;
    int n2;
    scanf("%c\n%d\n%d", &op, &n1, &n2);
    // Don't change above this line

    // Write code here
    int res;

    if (op == '+')
    {
        res = n1 + n2;
    }
    else if (op == '-')
    {
        res = n1 - n2;
    }
    else if (op == '*')
    {
        res = n1 * n2;
    }

    // Don't change below this line
    printf("%d", res);
    return 0;
}
