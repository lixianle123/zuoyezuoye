#include<iostream>
#include<cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Triangle
{
private:
	double a, b, c; //设三角形三边a,b,c为私有成员数据
public:
	void setABC(double x, double y, double z)
	{
		if ((x + y) > z && (x - y) < z)    //三角形边长法则，判断能否成三角形
		{
			cout << "输入格式正确！" << endl;
		}
		a = x;
		b = y;
		c = z;
	};
	
	void getABC(double *x, double *y, double *z)
	{
		*x = a;
		*y = b;
		*z = c;
	};//取三边的值

	double perimeter(void)
	{
		double ce;
		C = a + b + c;
		return C;
	}//计算三角形的周长

	double area()
	{
		double s;
		double p;
		p = (a + b + c) / 2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		return S;
	}//计算三角形的面积

	int vary()
	{
		double t, A;
		if (a > b)
			if (a > c)
				t = a;
			else t = c;
		if (a < b)
		{
			if (b > c)
				t = b;
			else t = c;
		}
		A = cos(b*b + c * c - t * t / 2 * b*c);

		return A;
	}
};


int main()
{
	Triangle tri1;	//定义三角形类
	double x, y, z, A;
	cin >> x >> y >> z; 
	tri1.setABC(x, y, z);	//为三边置初值
	tri1.getABC(&x, &y, &z);   //将三边的值为x,y,z赋值
	cout << "三条边为：" << x << '\t' << y << '\t' << z << endl;
	cout << "ASD" << endl;
	cout << "三角形的周长为：" << tri1.perimeter() << '\t' << "面积为：" << tri1.area() << '\t' << endl;
	A = tri1.vary();
	if (A > 0)
		cout << "此三角形为钝角三角形" << endl;
	else if (A < 0)
		cout << "此三角形为锐角三角形" << endl;
	else
		cout << "此三角形为直角三角形" << endl;
//判断此三角形的类型

	system("pause");
	return 0;
}
