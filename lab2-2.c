#include <stdio.h>

int main()
{
    int i; //int�� ���� i ����
    int *ptr; //int �������� ���� ptr ����
    int **dptr; //int ������������ ���� dptr ����

    i = 1234; //i�� 1234 ����

    printf("[----- [������] [2020039104] -----]\n");

    printf("[checking values before ptr = &i] \n"); //ptr�� i�� �ּҸ� �����ϱ� ���� �� Ȯ��
    printf("value of i == %d\n", i); //i�� �� ���� ���·� ���
    printf("address of i == %p\n", &i); //i�� �ּ� ������ ���·� ���
    printf("value of ptr == %p\n", ptr); //ptr�� �� ������ ���·� ���
    printf("address of ptr == %p\n", &ptr); //ptr�� �ּ� ������ ���·� ���
    //i�� ���� ���� ����� ��µ�����
    //ptr�� ������� �ʾ� ������ �� ���

    ptr = &i; /* ptr is now holding the address of i */
    //ptr�� i�� �ּ� ����

    printf("\n[checking values after ptr = &i] \n"); //ptr�� i�� �ּ� ������ ���� �� Ȯ��
    printf("value of i == %d\n", i); //i�� �� ���� ���·� ���
    printf("address of i == %p\n", &i); //i�� �ּ� ������ ���·� ���
    printf("value of ptr == %p\n", ptr); //ptr�� �� ������ ���·� ���
    printf("address of ptr == %p\n", &ptr); //ptr�� �ּ� ������ ���·� ���
    printf("value of *ptr == %d\n", *ptr); //ptr�� ����Ű�� ����(=i)�� ���� ���·� ���
    //i�� ���� ���� �״�� ��µǰ�
    //ptr�� ���� i�� �ּ� ���, �ּҴ� �״�� ���
    //*ptr�� ptr�� ����Ű�� ���� i ��(=1234) ���
    
    dptr = &ptr; /* dptr is now holding the address of ptr */ 
    //dptr�� ptr�� �ּ� ����

    printf("\n[checking values after dptr = &ptr] \n"); //dptr�� ptr�� �ּ� ������ ���� �� Ȯ��
    printf("value of i == %d\n", i); //i�� �� ���� ���·� ���
    printf("address of i == %p\n", &i); //i�� �ּ� ������ ���·� ���
    printf("value of ptr == %p\n", ptr); //ptr�� �� ������ ���·� ���
    printf("address of ptr == %p\n", &ptr); //ptr�� �ּ� ������ ���·� ���
    printf("value of *ptr == %d\n", *ptr); //ptr�� ����Ű�� ����(=i) ���� ���·� ���
    printf("value of dptr == %p\n", dptr); //dptr�� �� ������ ���·� ���
    printf("address of dptr == %p\n", &dptr); //dptr�� �ּ� ������ ���·� ���
    printf("value of *dptr == %p\n", *dptr); //dptr�� ����Ű�� ����(=ptr) �� ������ ���·� ���
    printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�� ����(=ptr)�� ����Ű�� ����(=i) �� ���� ���·� ���
    //dptr�� ptr�� �ּҸ� �����߱⿡ dptr�� ���õ� ���� ����

    *ptr = 7777; /* changing the value of *ptr */
    //ptr�� ����Ű�� �ִ� �ּҿ� �ش��ϴ� ���� 7777 �Ҵ�

    printf("\n[after *ptr = 7777] \n"); //ptr�� ����Ű�� ������ 7777 ����
    printf("value of i == %d\n", i); //i�� �� ���� ���·� ���
    printf("value of *ptr == %d\n", *ptr); //ptr�� ����Ű�� ���� ���� ���·� ���
    printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�� ����(=ptr)�� ����Ű�� ����(=i) �� ���
    //*ptr�� ptr�� ����Ű�� ���� i�̰�, **dptr�� dptr�� ����Ű�� ���� ptr�� ����Ű�� ���� i�̱⿡ ��� 7777�� ���

    **dptr = 8888; /* changing the value of **dptr */ 
    //dptr�� ����Ű�� ����(=ptr)�� ����Ű�� ����(=i)�� 8888 ����

    printf("\n[after **dptr = 8888] \n"); //dptr�� ����Ű�� ����(=ptr)�� ����Ű�� ����(=i)�� 8888 ����
    printf("value of i == %d\n", i); //i�� �� ���� ���·� ���
    printf("value of *ptr == %d\n", *ptr); //ptr�� ����Ű�� �� ���� ���·� ���
    printf("value of **dptr == %d\n", **dptr); //dptr�� ����Ű�� ����(=ptr)�� ����Ű�� ����(=i) �� ���
    //*ptr�� ptr�� ����Ű�� ���� i�̰�, **dptr�� dptr�� ����Ű�� ���� ptr�� ����Ű�� ���� i�̱⿡ ��� 8888�� ���
    
    return 0;
}