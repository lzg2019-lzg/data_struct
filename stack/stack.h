#ifndef _STACK_H_
#define _STACK_H_




#include <stdbool.h>



/* 栈结构 */
struct stack_struct
{
    int *top;
    int *bottom;
    int capacity;
};



/*
 * 函数名称：creat_stack
 * 功能描述：创建栈
 * 输入参数：capacity-容量
 * 返 回 值：栈结构体指针
 */
 struct stack_struct *creat_stack(int capacity);



/*
 * 函数名称：stack_is_empty
 * 功能描述：判断栈是否为空
 * 输入参数：stack_t-栈结构体指针
 * 返 回 值：true-空，false-不为空
 */
bool stack_is_empty(struct stack_struct * stack_t);





/*
 * 函数名称：stack_push
 * 功能描述：入栈
 * 输入参数：stack_t-栈结构体指针，data-入栈数据
 * 返 回 值：true-入栈成功，false-入栈失败
 */
bool stack_push(struct stack_struct *stack_t, int data);



/* 
 * 函数名称：stack_pop
 * 功能描述：出栈
 * 输入参数：
 */
 bool stack_pop(struct stack_struct *stack_t);


/*
 * 函数名称：stack_print
 * 功能描述：遍历栈数据
 * 
 */
 void stack_print(struct stack_struct *stack_t);

 
/* 
 * 函数名称：stack_destroy
 * 功能描述：销毁栈
 * 输入参数：栈指针
 */
 void stack_destroy(struct stack_struct *stack_t);

 

#endif



