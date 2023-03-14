#include <stdio.h>
int main()
{
    char charType; //char형 변수 charType 선언
    int integerType; //정수형 변수 integerType 선언
    float floatType; //4비트 실수형 변수 floatType 선언
    double doubleType; //8비트 실수형 변수 doubleType 선언

    printf("[----- [손지연] [2020039104] -----]\n");

    printf("Size of char: %ld byte\n",sizeof(charType));  //charType 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //integerType 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //floatType 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //doubleType 메모리 공간 크기 10진수 정수 형태로 출력

    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //char 자료형 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of int: %ld bytes\n",sizeof(int)); //int 자료형 메모리 공간//char형 포인터의 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of float: %ld bytes\n",sizeof(float)); //float 자료형 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of double: %ld bytes\n",sizeof(double)); //double 자료형 메모리 공간 크기 10진수 정수 형태로 출력

    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char 자료형의 주소 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int 자료형의 주소 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float 자료형의 주소 메모리 공간 크기 10진수 정수 형태로 출력
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double 자료형의 주소 메모리 공간 크기 10진수 정수 형태로 출력
    //주소를 저장하는 크기를 출력하므로 모두 4byte
    return 0;
}