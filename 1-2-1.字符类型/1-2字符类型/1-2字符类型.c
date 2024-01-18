#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	char ch = 'A'; //用字符类型创建了一个变量叫ch
	printf("%c\n",ch); 
	
	   //short int 短整型
	   //int - 整型
	int age = 20;  //整型
	printf("%d\n", age);

	long num = 100;  //长整形
	printf("%d\n", num);

	float f = 5.0;  //单精度浮点型
	printf("%f\n", f);

	double d = 3.14;  //双精度浮点型
	printf("%lf\n", d);

	return 0;
}



/*
  2024年1月8日 周一

  功能：知道各种数据类型的输出方法
*/


/*
输出结果
—————————————————————————————
A
20
100
5.000000
3.140000
—————————————————————————————
   总结：
      %d - 打印整型
	  %c - 打印字符
	  %f - 打印浮点数字
	  %p - 以地址的形式打出
	  %x - 打印16进制数字
*/


