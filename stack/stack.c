#include "stack.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>



/*
 * 函数名称：creat_stack
 * 功能描述：创建栈
 * 输入参数：capacity-容量
 * 返 回 值：栈结构体指针
 */
 struct stack_struct *creat_stack(int capacity)
 {
     
     struct stack_struct *stack = (struct stack_struct *)malloc(sizeof(struct stack_struct));
     if(stack == NULL)
        return NULL;

    if(stack->bottom == NULL)
    {
        stack->bottom = (int *)malloc(sizeof(int)*capacity);
        if(stack->bottom == NULL)
            return NULL;
    }

    stack->top = stack->bottom;
    stack->capacity = capacity;

    return stack;
    /*
    struct stack_struct *stack = NULL;

    stack->bottom = (int *)malloc(sizeof(int)*capacity);
    if(stack->bottom == NULL)
        return NULL;

    stack->top = stack->bottom;
    stack->capacity = capacity;

    return stack;
    */
 }




 /*
 * 函数名称：stack_is_empty
 * 功能描述：判断栈是否为空
 * 输入参数：stack_t-栈结构体指针
 * 返 回 值：true-空，false-不为空
 */
bool stack_is_empty(struct stack_struct * stack_t)
{
    if(stack_t->top == stack_t->bottom)
    {
        return true;
    }

    return false;
}



 /*
 * 函数名称：stack_is_full
 * 功能描述：判断栈是否已满
 * 输入参数：stack_t-栈结构体指针
 * 返 回 值：true-满，false-不满
 */
 bool stack_is_full(struct stack_struct *stack_t)
 {
    if((stack_t->top - stack_t->bottom) >= stack_t->capacity)
    {
        printf("stack is full...\n");
        return true;
    }

    return false;
 }



/*
 * 函数名称：stack_push
 * 功能描述：入栈
 * 输入参数：stack_t-栈结构体指针，data-入栈数据
 * 返 回 值：true-入栈成功，false-入栈失败
 */
bool stack_push(struct stack_struct *stack_t, int data)
{
    if(stack_is_full(stack_t) != true)
    {
        *stack_t->top = data;
        stack_t->top++;

        return true;
    }

    return false;
}



/* 
 * 函数名称：stack_pop
 * 功能描述：出栈
 * 输入参数：statck_t-栈指针
 * 返 回 值：true-成功，false-失败
 */
 bool stack_pop(struct stack_struct *stack_t)
 {
     if(stack_is_empty(stack_t) == true)
     {
         printf("stack is empty, pop failed...\n");
         return false;
     }

    stack_t->top--;

     return true;
 }



/*
 * 函数名称：stack_print
 * 功能描述：遍历栈数据
 * 输入参数：stack_t-栈指针
 */
 void stack_print(struct stack_struct *stack_t)
 {
     printf("stack[%d]:", stack_t->capacity);

    int *tmp_t = stack_t->top;
     while(tmp_t != stack_t->bottom)
     {
         printf("%d ", *(--tmp_t));
     }

     printf("\r\n");
 }




/* 
 * 函数名称：stack_destroy
 * 功能描述：销毁栈
 * 输入参数：栈指针
 */
 void stack_destroy(struct stack_struct *stack_t)
 {
     free(stack_t);
 }