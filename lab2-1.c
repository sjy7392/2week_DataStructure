#include <stdio.h>
int main()
{
    char charType; //char�� ���� charType ����
    int integerType; //������ ���� integerType ����
    float floatType; //4��Ʈ �Ǽ��� ���� floatType ����
    double doubleType; //8��Ʈ �Ǽ��� ���� doubleType ����

    printf("[----- [������] [2020039104] -----]\n");

    printf("Size of char: %ld byte\n",sizeof(charType));  //charType �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of int: %ld bytes\n",sizeof(integerType)); //integerType �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of float: %ld bytes\n",sizeof(floatType)); //floatType �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); //doubleType �޸� ���� ũ�� 10���� ���� ���·� ���

    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); //char �ڷ��� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of int: %ld bytes\n",sizeof(int)); //int �ڷ��� �޸� ����//char�� �������� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of float: %ld bytes\n",sizeof(float)); //float �ڷ��� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of double: %ld bytes\n",sizeof(double)); //double �ڷ��� �޸� ���� ũ�� 10���� ���� ���·� ���

    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); //char �ڷ����� �ּ� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of int*: %ld bytes\n",sizeof(int*)); //int �ڷ����� �ּ� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of float*: %ld bytes\n",sizeof(float*)); //float �ڷ����� �ּ� �޸� ���� ũ�� 10���� ���� ���·� ���
    printf("Size of double*: %ld bytes\n",sizeof(double*)); //double �ڷ����� �ּ� �޸� ���� ũ�� 10���� ���� ���·� ���
    //�ּҸ� �����ϴ� ũ�⸦ ����ϹǷ� ��� 4byte
    return 0;
}