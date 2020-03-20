#ifndef _DOUBLE_LINKLIST_H_
#define _DOUBLE_LINKLIST_H_



#include <stdbool.h>


/* 双向链表结构 */
struct node
{
    int data;
    struct node* pPre;
    struct node* pNext;
};



/*
 * 函数名称：creat_node
 * 函数功能：创建结点
 * 返 回 值：结点指针
 */
 struct node* creat_node(void);



/*
 * 函数名称：insert_node_from_tail
 * 函数功能：从尾部插入结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_tail(struct node* pHead, int data);




/*
 * 函数名称：insert_node_from_head
 * 函数功能：从头部插入结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_head(struct node* pHead, int data);





/*
 * 函数名称：insert_node_to_specifiled_location
 * 函数功能：插入到指定位置
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_to_specifiled_location(struct node* pHead, int data, int location);





/*
 * 函数名称：remove_node
 * 函数功能：移除结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool remove_node(struct node* pHead, int data);





/*
 * 函数名称：destory_linklist
 * 函数功能：销毁链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：true-成功，false-失败
 */
void destory_linklist(struct node* pHead);



/* 
 * 函数名称：linklist_print
 * 函数功能：遍历钟表
 * 输入参数：pHead - 链表头指针
 */
 void linklist_print(struct node* pHead);


 








#endif



