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
  2023年12月6日 周三

  功能：sizeof  .....的大小
*/

/*
输出结果
—————————————————————————————
1
2
4
4
8
4
8

—————————————————————————————
   总结：
       1个字节=8个比特位
	   2个字节=16个比特位

	   一个比特位存放一个二进制位 比如0/1

	   short int age = 20;  // 2个字节  16个比特位 2^16 - 1 = 63365
	   int age;  //4个字节  更节省空间

*/
