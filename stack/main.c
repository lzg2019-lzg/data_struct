#include "stack.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
    struct stack_struct *stack_t = creat_stack(10);
    if(stack_t == NULL)
        return -1;

    int i;
    for(i=0; i<10; i++)
    {
        stack_push(stack_t, i+1);
    }

    printf("push:\n");
    stack_print(stack_t);

    for(i=0; i<10; i++)
    {
        stack_pop(stack_t);
        printf("pop: %d\n", i+1);
        stack_print(stack_t);
    }

    stack_destroy(stack_t);

    return 0;
}