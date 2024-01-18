#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	{
		int num = 0;
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

   总结：内部的{}就是它所在的这个局部的代码块的作用域
*/