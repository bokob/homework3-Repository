#include <stdio.h>

#define MAX_SIZE 100               // 컴파일 과정에서 MAX_SIZE는 100으로 대치된다.

float sum(float [], int);          // float 자료형을 반환하는 sum 함수 선언
float input[MAX_SIZE], answer;     // float 자료형 answer와 input 배열 전역변수로 생성
int i;
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)   // 0부터 99까지 input 배열에 순차적으로 할당
        input[i] = i;

    printf("[----- [복무창] [2021040021] -----]\n\n");
    
    printf("address of input = %p\n", input);  //input 배열의 시작주소 출력

    answer = sum(input, MAX_SIZE);             
    // 함수 sum 안에 있는 printf 부분이 실행되고 반환값인 배열의 요소들의 합을 answer에 할당
    printf("The sum is: %f\n", answer); // answer의 값 4950.000000 출력
}

float sum(float list[], int n) // input의 주소를 list가 받는다. n은 MAX_SIZE의 값을 그대로 받는다.                
{
    printf("value of list = %p\n", list);           
    // input의 주소를 list가 받아 input 배열을 list를 통해 접근. input의 주소 출력
    printf("address of list = %p\n\n", &list); // input의 주소를 갖고 있는 공간의 주소

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++)
        tempsum += list[i];   
    // input의 배열을 list를 통해 접근해 0번 인덱스부터 MAX_SIZE의 값을 받은 n까지 더한다.
    return tempsum;  // 요소들의 합을 반환한다.
}