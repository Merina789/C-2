#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//局部变量的作用域
	int num = 0;
	printf("num=%d\n",num);

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
   总结：本题只有一个{}，所以它的作用域就在此
*/
