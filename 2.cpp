#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

class Student
{
private:
	string Name;  //����
	int Number;   //ѧ��
	bool Sex;     //�Ա�
	string BrithDate;  //����������
	string High;  //���
	string Hight; //����
	string Score; //�߿��ɼ�
	string Address; //��ͥסַ

public:
	void init();
	void print();
	string GetName;
	int GetNumber;
	bool GetSex;
	string GetBrithDate;
	string GetHigh;
	string GetHight;
	string GetScore;
	string GetAddress;
};

void Student::init()
{
	cout << "������ѧ��������";
	cin >> this->Name;
	cout << "ѧ�ţ�";
	cin >> this->Number;
	cout << "�Ա�";
	cin >> this->Sex;
	cout << "�������ڣ������գ�:";
	cin >> this->BrithDate;
	cout << "���:";
	cin >> this->High;
	cout << "����:";
	cin >> this->Hight;
	cout << "�߿��ɼ�:";
	cin >> this->Score;
	cout << "��ͥסַ:";
	cin >> this->Address;
}
void Student::print()
{
	cout << "ѧ����Ϣ��������" << Name << "\tѧ�ţ�" << Number << "\t�Ա�" << Sex << endl;
	cout << "\t�������ڣ������գ�:" << BrithDate << "\t���:" << High << "\t����:" << Hight << endl;
	cout << "\t�߿��ɼ�:" << Score << "\t��ͥסַ:" << Address << endl;
}
int main()
{
	Student s;
	s.init();
	s.print();

	system("pause");
	return 0;
}