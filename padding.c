#include <stdio.h>

struct student{         // student ����ü ����
    char lastName[13]; // ũ�Ⱑ 13�� char�� �迭 lastName ���� 
    int studentId;     // int�� ���� studentId  ����
    short grade;       // short�� ���� grade ����
};

int main()
{
    struct student pst;              // �޸��� Stack ������ student���� pst ����ü ����

    printf("[----- [����â] [2021040021] -----]\n\n");
    //������ ���� �޸� ��迡�� �����ϰ� ������ �Ѵ�. 
    //���� ¦�� ����Ʈ�̰ų� 4, 8 ,16 ���� ����� �Ǵ� �޸� ��踦 ���´�.
    printf("size of student = %ld\n", sizeof(struct student));
    // student���� �ȿ� ũ�Ⱑ 13�� char�� �迭, int��, short�� �ڷᰡ �ִ�.
    // ũ�Ⱑ 13�� char�� �迭�� 4, 8����Ʈ ���� ũ�� ������ 16����Ʈ ������ �����ȴ�.
    // int�� �ڷ�� 4����Ʈ. 4����Ʈ ������ �����ȴ�.
    // short�� �ڷ�� 2����Ʈ. 4����Ʈ ���� �����Ƿ� 4����Ʈ ������ �����ȴ�.
    // 16 + 4 + 4 = 24      24 ���
    printf("size of int = %ld\n", sizeof(int)); //int�� �ڷ����� ũ�� 4 ���
    printf("size of short = %ld\n", sizeof(short)); //short�� �ڷ��� ũ�� 2 ���

    return 0;
}