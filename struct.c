#include <stdio.h>

struct student1{      // student1 ����ü ����
    char lastName;    // char�� ���� lastName ����
    int studentId;    // int�� ���� studentId ����
    char grade;       // char�� ���� grade ����
};

typedef struct{      // ����ü ����     
    char lastName;   // char�� ���� lastName ����
    int studentId;   // int�� ���� studentId ����
    char grade;      // char�� ���� grade ����
} student2;          // ����� ����ü�� student2��� ����

int main()
{
    struct student1 st1 = {'A', 100, 'A'};    
    // typedef�� ����ü�� �������� �ʾ����� struct��� ����ؾ��Ѵ�.
    // student1�� st1 ����ü ����
    // lastName�� A, studentId�� 100, grade�� A �Ҵ�

    printf("[----- [����â] [2021040021] -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);     // st1�� lastName �� A ���
    printf("st1.studentId = %d\n", st1.studentId);   // st1�� studentId �� 100 ���
    printf("st1.grade = %c\n", st1.grade);           // st1�� grade �� A ���

    student2 st2 = {'B', 200, 'B'};     // student2�� st2 ����ü ����
    // lastName�� B, studentId�� 200, grade�� B �Ҵ�

    printf("\nst2.lastName = %c\n", st2.lastName); // st2�� lastName �� B ���
    printf("st2.studentId = %d\n", st2.studentId); // st2�� studentId �� 200 ���
    printf("st2.grade = %c\n", st2.grade);         // st2�� grade �� B ���

    student2 st3; // student2�� st3 ����ü ����
    
    st3 = st2;   // ����ü ġȯ

    printf("\nst3.lastName = %c\n", st3.lastName);    // st3�� lastName �� B ���
    printf("st3.studentId = %d\n", st3.studentId);    // st3�� studentId �� 200 ���
    printf("st3.grade = %c\n", st3.grade);            // st3�� grade �� B ���

    /* ��ü ������ ��� �˻� */
    if(st3 == st2)    /* �۵����� �ʴ´�. */
        printf("equal\n");
    else
        printf("not equal\n");
    
    return 0;
}