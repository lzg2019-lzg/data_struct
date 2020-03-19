#ifndef _LINK_LIST_H_
#define _LINK_LIST_H_

#include <stdbool.h>



/* ������ */
struct node
{
	int data;
	struct node* pNext;
};



/*
 * �������ƣ�creat_node
 * �����������������
 * �� �� ֵ�����ָ��
 */
struct node* creat_node(void);



/*
 * �������ƣ�insert_node_from_head
 * ������������ͷ��������
 * ���������pHead-����ͷָ�룬data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
 */
bool insert_node_from_head(struct node* pHead, int data);




/*
 * �������ƣ�insert_node_from_tail
 * ������������β��������
 * ���������pHead-����ͷָ�룬data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
 */
bool insert_node_from_tail(struct node* pHead, int data);




/*
 * �������ƣ�insert_node_to_specified_location
 * ������������ָ��λ�ò�����
 * ���������pHead-����ͷָ�룬loacation-Ҫ�����λ�ã�data-Ҫ�����ֵ
 * �� �� ֵ��true-�ɹ���false-ʧ��
 */
bool insert_node_to_specified_location(struct node* pHead, int loacation, int data);




/*
 * �������ƣ�remove_node
 * �����������Ƴ�ĳ�����
 * ���������pHead-����ͷָ�룬data-ɾ������Ӧ������
 * �� �� ֵ��true-�ɹ���false-ʧ��
 */
bool remove_node(struct node* pHead, int data);



/*
 * �������ƣ�linklist_print
 * ������������������
 * ���������pHead-����ͷָ��
 * �� �� ֵ����
 */
void linklist_print(struct node* pHead);




/*
 * �������ƣ�destroy_linklist
 * ������������������
 * ���������pHead-����ͷָ��
 * �� �� ֵ����
 */
void destroy_linklist(struct node* pHead);





#endif

