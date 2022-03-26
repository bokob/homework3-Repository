#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];                // 메모리의 Stack 영역에 int형 배열 list 생성
    int *plist[5] = {NULL,};    
    // 메모리의 Stack 영역에 int형 배열에 대한 포인터 plist 생성 
    // 0번 인덱스는 NULL 값을 가리키도록 하고 나머지는 0으로 초기화

    plist[0] = (int *)malloc(sizeof(int));
    // 메모리의 Heap 영역에 int형 자료의 주소를 담을 4바이트 공간을 만들고
    //메모리의 Stack 영역에 있는 plist[0]에 그 공간의 주소 할당 

    list[0] = 1;      // list[0] 1 할당
    list[1] = 100;    // list[1] 100 할당 

    *plist[0] = 200;

    printf("[----- [복무창] [2021040021] -----]\n\n");

    printf("value of list[0] = %d\n", list[0]);            // list[0]의 값 1 출력
    printf("address of list[0]       = %p\n", &list[0]);   // list[0]의 주소 출력
    printf("value of list            = %p\n", list);       
    // list주소 출력, 배열의 이름 list는 list[0]과 주소가 같다.
    printf("address of list (&list)  = %p\n", &list);  // list의 주소 출력


    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);          // list[1]의 값 100  출력
    printf("address of list[1] = %p\n", &list[1]);         // list[1]의 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1));      
    // 역참조 연산자(*)에 의해 list[1]의 주소에 있는 값을 가리킨다.
    printf("address of list+1  = %p\n", list+1);  // list[1]의 주소 출력

    
    printf("----------------------------------------\n\n");
    
    printf("value of *plist[0] = %d\n", *plist[0]);   
    // 역참조 연산자(*)에 의해 plist[0]의 주소에 있는 값 200 출력
    printf("&plist[0]          = %p\n", &plist[0]);   //plist[0]의 주소 출력
    printf("&plist             = %p\n", &plist);      // plist의 주소 출력, plist[0]과 같은 값이 출력된다.
    printf("plist              = %p\n", plist);       
    // plist의 주소 출력, 배열의 plist는 plist[0]의 주소와 같다.
    printf("plist[0]           = %p\n", plist[0]); // plist[0]에 있는 값 출력. 즉, 200이 들어있는 주소 출력 
    printf("plist[1]           = %p\n", plist[1]); // 초기화 된 값이 들어있다. 
    printf("plist[2]           = %p\n", plist[2]); // 초기화 된 값이 들어있다.
    printf("plist[3]           = %p\n", plist[3]); // 초기화 된 값이 들어있다.
    printf("plist[4]           = %p\n", plist[4]); // 초기화 된 값이 들어있다.

    free(plist[0]); // plist[0]에 들어있는 주소를 갖는 메모리의 Heap 영역에 만들어진 공간 해제