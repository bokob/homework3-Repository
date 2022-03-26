#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];   // �޸��� Stack ������ int�� �迭 list ����
    int *plist[5]; // �޸��� Stack ������ int�� �迭�� ���� ������ plist ����

    list[0] = 10; // list[0] 10 �Ҵ�
    list[1] = 11; // list[1] 11 �Ҵ�

    plist[0] = (int*)malloc(sizeof(int)); 
    // �޸��� Heap ������ int�� �ڷ��� �ּҸ� ���� 4����Ʈ ������ �����
    //�޸��� Stack ������ �ִ� plist[0]�� Heap ������ ������� ������ �ּ� �Ҵ�

    printf("[----- [����â] [2021040021] -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);               // list[0] �� 10 ���
    printf("address of list \t= %p\n", list);          // list�� �ּ� ���
    printf("address of list[0] \t= %p\n", &list[0]);   // list[0]�� �ּ� ���. list�� �ּҿ� ����.
    printf("address of list + 0 \t= %p\n", list+0);    
    // list[0]�� �ּ� ���
    printf("address of list + 1 \t= %p\n", list+1);    
    // list[1]�� �ּ� ���. list�� �ּҿ��� 4x1 ����Ʈ ������ �ּ�
    printf("address of list + 2 \t= %p\n", list+2);    
    // list[2]�� �ּ� ���. list�� �ּҿ��� 4x2 ����Ʈ ������ �ּ�
    printf("address of list + 3 \t= %p\n", list+3);    
    // list[3]�� �ּ� ���. list�� �ּҿ��� 4x3 ����Ʈ ������ �ּ�
    printf("address of list + 4 \t= %p\n", list+4);    
    // list[4]�� �ּ� ���. list�� �ּҿ��� 4x4 ����Ʈ ������ �ּ�
    printf("address of list[4] \t= %p\n", &list[4]);   
    // list[4]�� �ּ� ���

    free(plist[0]); // plist[0]�� ����ִ� �ּҸ� ���� �޸��� Heap ������ ������� ���� ����
}