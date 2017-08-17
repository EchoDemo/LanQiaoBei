问题描述
输入A、B，输出A+B


输入格式
输入的第一行包括两个整数，由空格分隔，分别表示A、B。
输出格式
输出一行，包括一个整数，表示A+B的值。


样例输入
12 45
样例输出
57

代码：


#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a + b);
	system("pause");
	return 0;
}

