#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int a = 10;

int main()
{
	printf("%d\n",a);
	return 0;
}

/*
int main()
{
	{
		int a = 10;
	}               //a在这个范围内定义，范围之外不可用
	printf("%d\n", a);
	return 0;
}

    会报错：error C2065 : “a”: 未声明的标识符
 */

 /*
   2024年1月9日 周二

   功能：全局变量的作用域是整个工程
 */

 /*
 输出结果
 —————————————————————————————
 10
 —————————————————————————————
	总结：a只能在范围内定义有意义，范围之外不可用
 */
