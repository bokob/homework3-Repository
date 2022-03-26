#include <stdio.h>

void print1 (int *ptr, int rows);     // print1 함수 선언

int main()
{
    int one[] = {0, 1, 2, 3, 4};     // int형 배열 list 생성. 0, 1, 2, 3, 4의 값 할당

    printf("[----- [복무창] [2021040021] -----]\n\n");

    printf("one     = %p\n", one);      // 배열 one의 주소 출력
    printf("&one    = %p\n", &one);     // 배열 one의 주소 출력
    printf("&one[0] = %p\n", &one[0]);  // 배열 one의 주소 출력

    print1(&one[0], 5);  // print1 함수에 배열 one의 주소와 요소의 개수를 넘겨줌

    return 0;
}

void print1 (int *ptr, int rows)   // one의 시작주소를 ptr에 할당. 5를 rows에 할당
{
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));      
    // 역참조 연산자(*)에 의해 ptr이 가리키는 배열 one의 주소를 순차적으로 출력한다.
    // 0부터 4까지 출력
    printf("\n");
}