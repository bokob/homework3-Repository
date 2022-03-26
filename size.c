#include <stdio.h>
#include <stdlib.h>

void main()
{
    int **x; // int형 포인터에 대한 포인터 x를 메모리의 Stack 영역에 생성

    printf("[----- [복무창] [2021040021] -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));     
    //이중 포인터이기 때문에 32비트 운영체제에서는 4바이트, 64비트 운영체제에서는 8바이트 출력 
    printf("sizeof(*x) = %lu\n", sizeof(*x));    
    // 단일 포인터이기 때문에 32비트 운영체제에서는 4바이트, 64비트 운영체제에서는 8바이트 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); 
    // sizeof(int)와 같다.
    // x가 가리키는 곳의 주소가 가리키는 자료인 int형 자료의 크기 4바이트 출력
}