#include <stdio.h>
#include "link_list.h"


int main(void)
{
	/* 创建链表头 */
	struct node* pListHeader = creat_node();
	if (pListHeader == NULL)
		return -1;

	printf("尾部插入\n");

	/* 插入数据 */
	int i = 0;
	for (i = 0; i < 10; i++)
		insert_node_from_tail(pListHeader, i + 1);

	linklist_print(pListHeader);

	printf("删除数据为5的结点\n");
	remove_node(pListHeader, 5);

	linklist_print(pListHeader);
	printf("\r\n");

	struct node* p = creat_node();
	
	printf("头部插入\n");
	for (i = 0; i < 10; i++)
		insert_node_from_head(p, i + 1);
	linklist_print(p);

	printf("\r\n");

	printf("在第5个位置插入数据为8的结点\n");
	insert_node_to_specified_location(p, 5, 8);
	
	linklist_print(p);

	destroy_linklist(pListHeader);
	destroy_linklist(p);

	return 0;
}