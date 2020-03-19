#include "link_list.h"
#include <stdlib.h>
#include <stdio.h>


/*
 * �������ƣ�creat_node
 * �����������������
 * �� �� ֵ�����ָ��
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
 * �������ƣ�insert_node_from_head
 * ������������ͷ��������
 * ���������pHead-����ͷָ�룬data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
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
 * �������ƣ�insert_node_from_tail
 * ������������β��������
 * ���������pHead-����ͷָ�룬data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
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
 * �������ƣ�insert_node_to_specified_location
 * ������������ָ��λ�ò�����
 * ���������pHead-����ͷָ�룬loacation-Ҫ�����λ�ã�data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
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
 * �������ƣ�remove_node
 * �����������Ƴ�ĳ�����
 * ���������pHead-����ͷָ�룬data-ɾ������Ӧ������
 * �� �� ֵ��true-�ɹ���false-ʧ��
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
 * �������ƣ�linklist_print
 * ������������������
 * ���������pHead-����ͷָ��
 * �� �� ֵ����
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
 * �������ƣ�destroy_linklist
 * ������������������
 * ���������pHead-����ͷָ��
 * �� �� ֵ����
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



