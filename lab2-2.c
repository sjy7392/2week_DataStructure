#include <stdio.h>

int main()
{
    int i; //int형 변수 i 선언
    int *ptr; //int 포인터형 변수 ptr 선언
    int **dptr; //int 이중포인터형 변수 dptr 선언

    i = 1234; //i에 1234 대입

    printf("[----- [손지연] [2020039104] -----]\n");

    printf("[checking values before ptr = &i] \n"); //ptr에 i의 주소를 대입하기 전의 값 확인
    printf("value of i == %d\n", i); //i의 값 정수 형태로 출력
    printf("address of i == %p\n", &i); //i의 주소 포인터 형태로 출력
    printf("value of ptr == %p\n", ptr); //ptr의 값 포인터 형태로 출력
    printf("address of ptr == %p\n", &ptr); //ptr의 주소 포인터 형태로 출력
    //i에 관한 값은 제대로 출력되지만
    //ptr은 선언되지 않아 쓰레기 값 출력

    ptr = &i; /* ptr is now holding the address of i */
    //ptr에 i의 주소 대입

    printf("\n[checking values after ptr = &i] \n"); //ptr에 i의 주소 대입한 후의 값 확인
    printf("value of i == %d\n", i); //i의 값 정수 형태로 출력
    printf("address of i == %p\n", &i); //i의 주소 포인터 형태로 출력
    printf("value of ptr == %p\n", ptr); //ptr의 값 포인터 형태로 출력
    printf("address of ptr == %p\n", &ptr); //ptr의 주소 포인터 형태로 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 변수(=i)를 정수 형태로 출력
    //i에 관한 값은 그대로 출력되고
    //ptr의 값은 i의 주소 출력, 주소는 그대로 출력
    //*ptr은 ptr이 가리키는 변수 i 값(=1234) 출력
    
    dptr = &ptr; /* dptr is now holding the address of ptr */ 
    //dptr에 ptr의 주소 대입

    printf("\n[checking values after dptr = &ptr] \n"); //dptr에 ptr의 주소 대입한 후의 값 확인
    printf("value of i == %d\n", i); //i의 값 정수 형태로 출력
    printf("address of i == %p\n", &i); //i의 주소 포인터 형태로 출력
    printf("value of ptr == %p\n", ptr); //ptr의 값 포인터 형태로 출력
    printf("address of ptr == %p\n", &ptr); //ptr의 주소 포인터 형태로 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 변수(=i) 정수 형태로 출력
    printf("value of dptr == %p\n", dptr); //dptr의 값 포인터 형태로 출력
    printf("address of dptr == %p\n", &dptr); //dptr의 주소 포인터 형태로 출력
    printf("value of *dptr == %p\n", *dptr); //dptr이 가리키는 변수(=ptr) 값 포인터 형태로 출력
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 변수(=ptr)가 가리키는 변수(=i) 값 정수 형태로 출력
    //dptr에 ptr의 주소를 대입했기에 dptr과 관련된 값만 변경

    *ptr = 7777; /* changing the value of *ptr */
    //ptr이 가리키고 있는 주소에 해당하는 값에 7777 할당

    printf("\n[after *ptr = 7777] \n"); //ptr이 가리키는 변수에 7777 대입
    printf("value of i == %d\n", i); //i의 값 정수 형태로 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 변수 정수 형태로 출력
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 변수(=ptr)가 가리키는 변수(=i) 값 출력
    //*ptr은 ptr이 가리키는 변수 i이고, **dptr은 dptr이 가리키는 변수 ptr이 가리키는 변수 i이기에 모두 7777이 출력

    **dptr = 8888; /* changing the value of **dptr */ 
    //dptr이 가리키는 변수(=ptr)가 가리키는 변수(=i)에 8888 대입

    printf("\n[after **dptr = 8888] \n"); //dptr이 가리키는 변수(=ptr)가 가리키는 변수(=i)에 8888 대입
    printf("value of i == %d\n", i); //i의 값 정수 형태로 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 값 정수 형태로 출력
    printf("value of **dptr == %d\n", **dptr); //dptr이 가리키는 변수(=ptr)가 가리키는 변수(=i) 값 출력
    //*ptr은 ptr이 가리키는 변수 i이고, **dptr은 dptr이 가리키는 변수 ptr이 가리키는 변수 i이기에 모두 8888이 출력
    
    return 0;
}