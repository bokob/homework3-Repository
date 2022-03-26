#include <stdio.h>

struct student{         // student 구조체 선언
    char lastName[13]; // 크기가 13인 char형 배열 lastName 생성 
    int studentId;     // int형 변수 studentId  생성
    short grade;       // short형 변수 grade 생성
};

int main()
{
    struct student pst;              // 메모리의 Stack 영역에 student형의 pst 구조체 선언

    printf("[----- [복무창] [2021040021] -----]\n\n");
    //구조는 같은 메모리 경계에서 시작하고 끝나야 한다. 
    //또한 짝수 바이트이거나 4, 8 ,16 등의 배수가 되는 메모리 경계를 갖는다.
    printf("size of student = %ld\n", sizeof(struct student));
    // student형은 안에 크기가 13인 char형 배열, int형, short형 자료가 있다.
    // 크기가 13인 char형 배열은 4, 8바이트 보다 크기 때문에 16바이트 공간에 생성된다.
    // int형 자료는 4바이트. 4바이트 공간에 생성된다.
    // short형 자료는 2바이트. 4바이트 보다 작으므로 4바이트 공간에 생성된다.
    // 16 + 4 + 4 = 24      24 출력
    printf("size of int = %ld\n", sizeof(int)); //int형 자료으의 크기 4 출력
    printf("size of short = %ld\n", sizeof(short)); //short형 자료의 크기 2 출력

    return 0;
}