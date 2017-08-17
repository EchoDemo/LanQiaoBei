问题描述
给定圆的半径r，求圆的面积

输入格式
输入包含一个整数r，表示圆的半径

输出格式
输出一行，包含一个实数，四舍五入保留小数点后7位，表示圆的面积

样例输入
4
样例输出
50.265482

数据规模与约定
1 <= r <= 10000。


注意：在此题中可以引入函数库来求π，头部文件：#include<cmath>,函数atan(1.0)*4.


#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<cmath>

int main()
{
	int r;
	double PI;
	scanf("%d", &r);
	PI = atan(1.0) * 4;
	printf("%.7f", PI*r*r);
	system("pause");
	return 0;
}
