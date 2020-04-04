/*#include<iostream>
#include<cmath>
#include"Triangle.h"
using namespace std;
void Triangle::getABC(double x, double y, double z)
{
	while (1) 
	{
		if (x + y > z&& x + z > y&& y + z > x) { break; }
		else {
			cout << "输入的边无法构成三角形" << endl;
		}
	}
}
void getABC(double* x, double* y, double* z)
{
	a = x;
	b = y;
	c = z;
}
double perimeter(void)
{
	double num;
	num = a + b + c;
	return num;
}
double area(void)
{
	double p = (a + b + c) / 2;
	double num;
	num = sqrt(p * (p - a) * (p - b) * (p - c));
	return num;
}*/
//void setABC(double x, double y, double z);//置三边的值，注意要能成三角形
//void getABC(double* x, double* y, double* z);//取三边的值
//double perimeter(void);//计算三角形的周长
//double area(void);//计算并返回三角形的面积