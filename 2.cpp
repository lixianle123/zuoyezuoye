#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

class Student
{
private:
	string Name;  //姓名
	int Number;   //学号
	bool Sex;     //性别
	string BrithDate;  //出生年月日
	string High;  //身高
	string Hight; //体重
	string Score; //高考成绩
	string Address; //家庭住址

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
	cout << "请输入学生姓名：";
	cin >> this->Name;
	cout << "学号：";
	cin >> this->Number;
	cout << "性别：";
	cin >> this->Sex;
	cout << "出生日期（年月日）:";
	cin >> this->BrithDate;
	cout << "身高:";
	cin >> this->High;
	cout << "体重:";
	cin >> this->Hight;
	cout << "高考成绩:";
	cin >> this->Score;
	cout << "家庭住址:";
	cin >> this->Address;
}
void Student::print()
{
	cout << "学生信息：姓名：" << Name << "\t学号：" << Number << "\t性别：" << Sex << endl;
	cout << "\t出生日期（年月日）:" << BrithDate << "\t身高:" << High << "\t体重:" << Hight << endl;
	cout << "\t高考成绩:" << Score << "\t家庭住址:" << Address << endl;
}
int main()
{
	Student s;
	s.init();
	s.print();

	system("pause");
	return 0;
}