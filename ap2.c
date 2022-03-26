#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];   // 메모리의 Stack 영역에 int형 배열 list 생성
    int *plist[5]; // 메모리의 Stack 영역에 int형 배열에 대한 포인터 plist 생성

    list[0] = 10; // list[0] 10 할당
    list[1] = 11; // list[1] 11 할당

    plist[0] = (int*)malloc(sizeof(int)); 
    // 메모리의 Heap 영역에 int형 자료의 주소를 담을 4바이트 공간을 만들고
    //메모리의 Stack 영역에 있는 plist[0]에 Heap 영역에 만들어진 공간의 주소 할당

    printf("[----- [복무창] [2021040021] -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);               // list[0] 값 10 출력
    printf("address of list \t= %p\n", list);          // list의 주소 출력
    printf("address of list[0] \t= %p\n", &list[0]);   // list[0]의 주소 출력. list의 주소와 같다.
    printf("address of list + 0 \t= %p\n", list+0);    
    // list[0]의 주소 출력
    printf("address of list + 1 \t= %p\n", list+1);    
    // list[1]의 주소 출력. list의 주소에서 4x1 바이트 떨어진 주소
    printf("address of list + 2 \t= %p\n", list+2);    
    // list[2]의 주소 출력. list의 주소에서 4x2 바이트 떨어진 주소
    printf("address of list + 3 \t= %p\n", list+3);    
    // list[3]의 주소 출력. list의 주소에서 4x3 바이트 떨어진 주소
    printf("address of list + 4 \t= %p\n", list+4);    
    // list[4]의 주소 출력. list의 주소에서 4x4 바이트 떨어진 주소
    printf("address of list[4] \t= %p\n", &list[4]);   
    // list[4]의 주소 출력

    free(plist[0]); // plist[0]에 들어있는 주소를 갖는 메모리의 Heap 영역에 만들어진 공간 해제
}