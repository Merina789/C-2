#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	printf("%d\n",sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	return 0;
}


/*
  2023��12��6�� ����

  ���ܣ�sizeof  .....�Ĵ�С
*/

/*
������
����������������������������������������������������������
1
2
4
4
8
4
8

����������������������������������������������������������
   �ܽ᣺
       1���ֽ�=8������λ
	   2���ֽ�=16������λ

	   һ������λ���һ��������λ ����0/1

	   short int age = 20;  // 2���ֽ�  16������λ 2^16 - 1 = 63365
	   int age;  //4���ֽ�  ����ʡ�ռ�

*/
