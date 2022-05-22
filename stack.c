
#include <stdio.h>

#define SIZE 4

int stack[SIZE] = {};
int pointer = -1;


int push(int x)
{
    if(pointer + 1 >= SIZE)
    {
        return -1;
    }

    ++pointer;
    stack[pointer] = x;

    return 0;
}

int pop(int* x)
{
    if(pointer < 0)
    {
        *x = -1;
        return -1;
    }

    *x = stack[pointer];
    --pointer;

    return 0;
}

int peek(int* x)
{
    if(pointer < 0)
    {
        *x = -1;
        return -1;
    }

    *x = stack[pointer];

    return 0;
}
