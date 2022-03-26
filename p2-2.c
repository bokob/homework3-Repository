#include <stdio.h>

void print1 (int *ptr, int rows);     // print1 �Լ� ����

int main()
{
    int one[] = {0, 1, 2, 3, 4};     // int�� �迭 list ����. 0, 1, 2, 3, 4�� �� �Ҵ�

    printf("[----- [����â] [2021040021] -----]\n\n");

    printf("one     = %p\n", one);      // �迭 one�� �ּ� ���
    printf("&one    = %p\n", &one);     // �迭 one�� �ּ� ���
    printf("&one[0] = %p\n", &one[0]);  // �迭 one�� �ּ� ���

    print1(&one[0], 5);  // print1 �Լ��� �迭 one�� �ּҿ� ����� ������ �Ѱ���

    return 0;
}

void print1 (int *ptr, int rows)   // one�� �����ּҸ� ptr�� �Ҵ�. 5�� rows�� �Ҵ�
{
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));      
    // ������ ������(*)�� ���� ptr�� ����Ű�� �迭 one�� �ּҸ� ���������� ����Ѵ�.
    // 0���� 4���� ���
    printf("\n");
}