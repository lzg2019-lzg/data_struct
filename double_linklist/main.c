#include <stdio.h>
#include "double_linklist.h"


int main(void)
{
    struct node* pHeader = creat_node();
    if(pHeader == NULL)
    {
        return -1;
    }

    int i;

    /* 尾插入从1到10 */
    for(i=0; i<10; i++)
        insert_node_from_tail(pHeader, i+1);
    
    printf("尾部插入从 1 到 10\n");
    linklist_print(pHeader);

    /* 在第3个位置插入5 */
    insert_node_to_specifiled_location(pHeader, 5, 3);

    printf("在第3个位置插入5\n");
    linklist_print(pHeader);

    /* 头部插入10 */
    insert_node_from_head(pHeader, 10);
    printf("在头部插入10\n");
    linklist_print(pHeader);

    /* 移除数据为5的结点 */
    remove_node(pHeader, 5);

    printf("移除数据为5的结点\n");
    linklist_print(pHeader);

    remove_node(pHeader, 8);

    printf("移除数据为8的结点\n");
    linklist_print(pHeader);

    destory_linklist(pHeader);

    return 0;
}