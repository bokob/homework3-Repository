#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];                // �޸��� Stack ������ int�� �迭 list ����
    int *plist[5] = {NULL,};    
    // �޸��� Stack ������ int�� �迭�� ���� ������ plist ���� 
    // 0�� �ε����� NULL ���� ����Ű���� �ϰ� �������� 0���� �ʱ�ȭ

    plist[0] = (int *)malloc(sizeof(int));
    // �޸��� Heap ������ int�� �ڷ��� �ּҸ� ���� 4����Ʈ ������ �����
    //�޸��� Stack ������ �ִ� plist[0]�� �� ������ �ּ� �Ҵ� 

    list[0] = 1;      // list[0] 1 �Ҵ�
    list[1] = 100;    // list[1] 100 �Ҵ� 

    *plist[0] = 200;

    printf("[----- [����â] [2021040021] -----]\n\n");

    printf("value of list[0] = %d\n", list[0]);            // list[0]�� �� 1 ���
    printf("address of list[0]       = %p\n", &list[0]);   // list[0]�� �ּ� ���
    printf("value of list            = %p\n", list);       
    // list�ּ� ���, �迭�� �̸� list�� list[0]�� �ּҰ� ����.
    printf("address of list (&list)  = %p\n", &list);  // list�� �ּ� ���


    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);          // list[1]�� �� 100  ���
    printf("address of list[1] = %p\n", &list[1]);         // list[1]�� �ּ� ���
    printf("value of *(list+1) = %d\n", *(list + 1));      
    // ������ ������(*)�� ���� list[1]�� �ּҿ� �ִ� ���� ����Ų��.
    printf("address of list+1  = %p\n", list+1);  // list[1]�� �ּ� ���

    
    printf("----------------------------------------\n\n");
    
    printf("value of *plist[0] = %d\n", *plist[0]);   
    // ������ ������(*)�� ���� plist[0]�� �ּҿ� �ִ� �� 200 ���
    printf("&plist[0]          = %p\n", &plist[0]);   //plist[0]�� �ּ� ���
    printf("&plist             = %p\n", &plist);      // plist�� �ּ� ���, plist[0]�� ���� ���� ��µȴ�.
    printf("plist              = %p\n", plist);       
    // plist�� �ּ� ���, �迭�� plist�� plist[0]�� �ּҿ� ����.
    printf("plist[0]           = %p\n", plist[0]); // plist[0]�� �ִ� �� ���. ��, 200�� ����ִ� �ּ� ��� 
    printf("plist[1]           = %p\n", plist[1]); // �ʱ�ȭ �� ���� ����ִ�. 
    printf("plist[2]           = %p\n", plist[2]); // �ʱ�ȭ �� ���� ����ִ�.
    printf("plist[3]           = %p\n", plist[3]); // �ʱ�ȭ �� ���� ����ִ�.
    printf("plist[4]           = %p\n", plist[4]); // �ʱ�ȭ �� ���� ����ִ�.

    free(plist[0]); // plist[0]�� ����ִ� �ּҸ� ���� �޸��� Heap ������ ������� ���� ����