#include <stdio.h>

struct student1{      // student1 구조체 선언
    char lastName;    // char형 변수 lastName 생성
    int studentId;    // int형 변수 studentId 생성
    char grade;       // char형 변수 grade 생성
};

typedef struct{      // 구조체 선언     
    char lastName;   // char형 변수 lastName 생성
    int studentId;   // int형 변수 studentId 생성
    char grade;      // char형 변수 grade 생성
} student2;          // 선언된 구조체를 student2라고 선언

int main()
{
    struct student1 st1 = {'A', 100, 'A'};    
    // typedef로 구조체를 선언하지 않았으면 struct라고 명시해야한다.
    // student1형 st1 구조체 생성
    // lastName에 A, studentId에 100, grade에 A 할당

    printf("[----- [복무창] [2021040021] -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);     // st1의 lastName 값 A 출력
    printf("st1.studentId = %d\n", st1.studentId);   // st1의 studentId 값 100 출력
    printf("st1.grade = %c\n", st1.grade);           // st1의 grade 값 A 출력

    student2 st2 = {'B', 200, 'B'};     // student2형 st2 구조체 생성
    // lastName에 B, studentId에 200, grade에 B 할당

    printf("\nst2.lastName = %c\n", st2.lastName); // st2의 lastName 값 B 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2의 studentId 값 200 출력
    printf("st2.grade = %c\n", st2.grade);         // st2의 grade 값 B 출력

    student2 st3; // student2형 st3 구조체 생성
    
    st3 = st2;   // 구조체 치환

    printf("\nst3.lastName = %c\n", st3.lastName);    // st3의 lastName 값 B 출력
    printf("st3.studentId = %d\n", st3.studentId);    // st3의 studentId 값 200 출력
    printf("st3.grade = %c\n", st3.grade);            // st3의 grade 값 B 출력

    /* 전체 구조의 동등성 검사 */
    if(st3 == st2)    /* 작동하지 않는다. */
        printf("equal\n");
    else
        printf("not equal\n");
    
    return 0;
}