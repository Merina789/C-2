#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{    
	 //第一个{ }的内部都可以使用
	 //哪里能用，哪里就是作用域
	int num = 0; 
	{
		printf("num=%d\n", num);
	}

	return 0;
}

/*
  2024年1月9日 周二
  功能：
*/

/*
输出结果
—————————————————————————————
num=0
—————————————————————————————
   总结：第一个{ }的内部都可以使用
*/