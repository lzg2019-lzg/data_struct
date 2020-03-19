#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

#include <stdbool.h>



/* 定义结点 */
struct node
{
	int data;
	struct node* pNext;
};



/*
 * 函数名称：creat_node
 * 功能描述：创建结点
 * 返 回 值：结点指针
 */
struct node* creat_node(void);



/*
 * 函数名称：insert_node_from_head
 * 功能描述：从头部插入结点
 * 输入参数：pHead-链表头指针，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_head(struct node* pHead, int data);




/*
 * 函数名称：insert_node_from_tail
 * 功能描述：从尾部插入结点
 * 输入参数：pHead-链表头指针，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_tail(struct node* pHead, int data);




/*
 * 函数名称：insert_node_to_specified_location
 * 功能描述：从指定位置插入结点
 * 输入参数：pHead-链表头指针，loacation-要插入的位置，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_to_specified_location(struct node* pHead, int loacation, int data);




/*
 * 函数名称：remove_node
 * 功能描述：移除某个结点
 * 输入参数：pHead-链表头指针，data-删除结点对应的数据
 * 返 回 值：true-成功，false-失败
 */
bool remove_node(struct node* pHead, int data);



/*
 * 函数名称：linklist_print
 * 功能描述：遍历链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：无
 */
void linklist_print(struct node* pHead);




/*
 * 函数名称：destroy_linklist
 * 功能描述：销毁链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：无
 */
void destroy_linklist(struct node* pHead);





#endif

