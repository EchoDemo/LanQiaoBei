问题描述
Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。


输入格式
输入包含一个整数n
输出格式
输出一行，包含一个整数，表示Fn除以10007的余数。


样例输入
10
样例输出
55
样例输入
22
样例输出
7704
数据规模与约定
1 <= n <= 1,000,000。


代码：


#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int Fabonacci(int n) {
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return Fabonacci(n - 1) + Fabonacci(n - 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%I64d", Fabonacci(n)%10007);
	system("pause");
	return 0;
}
