#include<iostream>
#include<cmath>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Triangle
{
private:
	double a, b, c; //������������a,b,cΪ˽�г�Ա����
public:
	void setABC(double x, double y, double z)
	{
		if ((x + y) > z && (x - y) < z)    //�����α߳������ж��ܷ��������
		{
			cout << "�����ʽ��ȷ��" << endl;
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
	};//ȡ���ߵ�ֵ

	double perimeter(void)
	{
		double ce;
		C = a + b + c;
		return C;
	}//���������ε��ܳ�

	double area()
	{
		double s;
		double p;
		p = (a + b + c) / 2;
		S = sqrt(p*(p - a)*(p - b)*(p - c));
		return S;
	}//���������ε����

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
	Triangle tri1;	//������������
	double x, y, z, A;
	cin >> x >> y >> z; 
	tri1.setABC(x, y, z);	//Ϊ�����ó�ֵ
	tri1.getABC(&x, &y, &z);   //�����ߵ�ֵΪx,y,z��ֵ
	cout << "������Ϊ��" << x << '\t' << y << '\t' << z << endl;
	cout << "ASD" << endl;
	cout << "�����ε��ܳ�Ϊ��" << tri1.perimeter() << '\t' << "���Ϊ��" << tri1.area() << '\t' << endl;
	A = tri1.vary();
	if (A > 0)
		cout << "��������Ϊ�۽�������" << endl;
	else if (A < 0)
		cout << "��������Ϊ���������" << endl;
	else
		cout << "��������Ϊֱ��������" << endl;
//�жϴ������ε�����

	system("pause");
	return 0;
}
