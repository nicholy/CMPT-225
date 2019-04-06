#include "char_stack.h"

char_stack::char_stack()
{
    top_index = -1;
}

void char_stack::push( char item )
{
    top_index = top_index + 1;
    A[top_index] = item;
}

char char_stack::top()
{
    return A[top_index];
}

char char_stack::pop()
{
    top_index = top_index - 1;
    return A[ top_index + 1 ];
}

bool char_stack::empty()
{
    return top_index == -1;
}

int char_stack::size()
{
    if (top_index == -1)
    {
        return 0;
    }
    return top_index + 1;
    
    
}

