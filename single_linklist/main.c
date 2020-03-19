#include <stdio.h>
#include "link_list.h"


int main(void)
{
	/* ��������ͷ */
	struct node* pListHeader = creat_node();
	if (pListHeader == NULL)
		return -1;

	printf("β������\n");

	/* �������� */
	int i = 0;
	for (i = 0; i < 10; i++)
		insert_node_from_tail(pListHeader, i + 1);

	linklist_print(pListHeader);

	printf("ɾ������Ϊ5�Ľ��\n");
	remove_node(pListHeader, 5);

	linklist_print(pListHeader);
	printf("\r\n");

	struct node* p = creat_node();
	
	printf("ͷ������\n");
	for (i = 0; i < 10; i++)
		insert_node_from_head(p, i + 1);
	linklist_print(p);

	printf("\r\n");

	printf("�ڵ�5��λ�ò�������Ϊ8�Ľ��\n");
	insert_node_to_specified_location(p, 5, 8);
	
	linklist_print(p);

	destroy_linklist(pListHeader);
	destroy_linklist(p);

	return 0;
}