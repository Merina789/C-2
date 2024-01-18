#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	{
		int num = 0;
	}        //它的定义域就是它所在的这个{ } ，之外是不能用的

	printf("num=%d\n", num);

	return 0;
}

/*
  2024年1月9日 周二
  功能：
*/

/*
输出结果
—————————————————————————————

—————————————————————————————
    error C2065: “num”: 未声明的标识符

   总结：作用域之外是不能用的
*/