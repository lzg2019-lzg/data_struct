#include "link_list.h"
#include <stdlib.h>
#include <stdio.h>


/*
 * 函数名称：creat_node
 * 功能描述：创建结点
 * 返 回 值：结点指针
 */
struct node* creat_node(void)
{
    struct node* pNode = (struct node*)malloc(sizeof(struct node));
    if (pNode != NULL)
    {
        pNode->data = 0;
        pNode->pNext = NULL;
        return pNode;
    }

    return NULL;
}



/*
 * 函数名称：insert_node_from_head
 * 功能描述：从头部插入结点
 * 输入参数：pHead-链表头指针，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_head(struct node* pHead, int data)
{
    struct node* pTmp = creat_node();
    if (pTmp == NULL)
        return false;

    pTmp->data = data;
    pTmp->pNext = pHead->pNext;

    pHead->pNext = pTmp;

    return true;
}




/*
 * 函数名称：insert_node_from_tail
 * 功能描述：从尾部插入结点
 * 输入参数：pHead-链表头指针，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_tail(struct node* pHead, int data)
{
    struct node* pTmp = pHead;

    struct node* pAdd = creat_node();
    if (pAdd == NULL)
        return false;

    pAdd->data = data;
    pAdd->pNext = NULL;

    while (pTmp->pNext != NULL)
    {
        pTmp = pTmp->pNext;
    }

    pTmp->pNext = pAdd;

    return true;
}




/*
 * 函数名称：insert_node_to_specified_location
 * 功能描述：从指定位置插入结点
 * 输入参数：pHead-链表头指针，loacation-要插入的位置，data-要插入的值
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_to_specified_location(struct node* pHead, int loacation, int data)
{
    int i;

    struct node* pTmp = pHead;

    struct node* pAdd = creat_node();
    if (pAdd == NULL)
        return false;

    pAdd->data = data;
    pAdd->pNext = NULL;

    struct node* p = NULL;

    for (i = 0; i < loacation; i++)
    {
        pTmp = pTmp->pNext;
    }

    p = pTmp->pNext;
    pTmp->pNext = pAdd;
    pAdd->pNext = p;

    
    return true;
}




/*
 * 函数名称：remove_node
 * 功能描述：移除某个结点
 * 输入参数：pHead-链表头指针，data-删除结点对应的数据
 * 返 回 值：true-成功，false-失败
 */
bool remove_node(struct node* pHead, int data)
{
    struct node* pTmp = pHead;
    struct node* p = creat_node();
    if (p == NULL)
        return false;

    while (pTmp->pNext != NULL)
    {
        p = pTmp;
        pTmp = pTmp->pNext;

        if (pTmp->data == data)
        {
            p->pNext = pTmp->pNext;
            free(pTmp);
            return true;
        }
    }

    return false;
}





/*
 * 函数名称：linklist_print
 * 功能描述：遍历链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：无
 */
void linklist_print(struct node* pHead)
{
    struct node* pTmp = pHead->pNext;

    printf("linklist: ");
    while (pTmp->pNext != NULL)
    {
        printf("%d ", pTmp->data);
        pTmp = pTmp->pNext;
    }

    printf("%d", pTmp->data);

    printf("\r\n");
}


/*
 * 函数名称：destroy_linklist
 * 功能描述：销毁链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：无
 */
void destroy_linklist(struct node* pHead)
{
    struct node* pTmp, * pDel;

    pTmp = pHead;

    while (pTmp->pNext != NULL)
    {
        pDel = pTmp;
        free(pDel);
        pDel = NULL;

        pTmp = pTmp->pNext;
    }
}



