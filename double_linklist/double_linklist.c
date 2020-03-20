#include <stdio.h>
#include <stdlib.h>
#include "double_linklist.h"


/*
 * 函数名称：creat_node
 * 函数功能：创建结点
 * 返 回 值：结点指针
 */
 struct node* creat_node(void)
 {
     struct node* pTmp = (struct node*)malloc(sizeof(struct node));
     if(pTmp == NULL)
        return NULL;

     pTmp->data = 0;
     pTmp->pPre = NULL;
     pTmp->pNext = NULL;
 }



/*
 * 函数名称：insert_node_from_tail
 * 函数功能：从尾部插入结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_tail(struct node* pHead, int data)
{
    struct node* pTmp = pHead;

    while(pTmp->pNext != NULL)
    {
        pTmp = pTmp->pNext;
    }

    struct node* pAdd = creat_node();
    if(pAdd == NULL)
        return false;

    pAdd->data = data;
    pAdd->pPre = pTmp;
    pAdd->pNext = NULL;

    pTmp->pNext = pAdd; 

    return true;
}




/*
 * 函数名称：insert_node_from_head
 * 函数功能：从头部插入结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_from_head(struct node* pHead, int data)
{
    struct node* pAdd = creat_node();
    if(pAdd == NULL)
        return NULL;

    pAdd->data = data;
    pAdd->pPre = pHead;
    pAdd->pNext = pHead->pNext;

    pHead->pNext = pAdd;

    return true;
}




/*
 * 函数名称：insert_node_to_specifiled_location
 * 函数功能：插入到指定位置
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool insert_node_to_specifiled_location(struct node* pHead, int data, int location)
{
    struct node*pTmp = pHead->pNext;

    struct node* pAdd = creat_node();
    if(pAdd == NULL)
        return false;

    int i;
    for(i=0; i<location; i++)
    {
        if(pTmp->pNext == NULL)
            return false;

        pTmp = pTmp->pNext;
    }

    pAdd->data = data;
    pAdd->pNext = pTmp;
    pAdd->pPre = pTmp->pPre;
    pTmp->pPre->pNext = pAdd;

    return false;
}





/*
 * 函数名称：remove_node
 * 函数功能：移除结点
 * 输入参数：pHead-链表头指针，data-需要插入的结点的数据
 * 返 回 值：true-成功，false-失败
 */
bool remove_node(struct node* pHead, int data)
{
    struct node* pTmp = pHead->pNext;

    struct node* pDel = creat_node();
    if(pDel == NULL)
        return false;

    int del_couts = 0;

    while(pTmp != NULL)
    {
        if(pTmp->data == data)
        {
            pDel = pTmp;

            pDel->pPre->pNext = pDel->pNext;
            free(pDel);

            del_couts++;
        }

        pTmp = pTmp->pNext;
    }

    if(del_couts != 0)
        return true;
        
    return false;
}





/*
 * 函数名称：destory_linklist
 * 函数功能：销毁链表
 * 输入参数：pHead-链表头指针
 * 返 回 值：true-成功，false-失败
 */
void destory_linklist(struct node* pHead)
{
    struct node* pTmp = NULL;

    while( pHead != NULL)
    {
        pTmp = pHead;
        free(pTmp);
        pTmp = NULL;

        pTmp = pTmp->pNext;
    }

}





/* 
 * 函数名称：linklist_print
 * 函数功能：遍历钟表
 * 输入参数：pHead - 链表头指针
 */
 void linklist_print(struct node* pHead)
 {
     printf("linklist: ");
     pHead = pHead->pNext;

     while(pHead != NULL)
     {
         printf("%d ", pHead->data);
         pHead = pHead->pNext;
     }

     printf("\r\n");
 }