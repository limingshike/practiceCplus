/*
#include<iostream>
#include<Cmath>
using namespace std;
class Triangle
{
public:
	Triangle(double x, double y, double z) :a(x), b(y), c(z){}
	Triangle(double x, double y) :a(x), b(y), c(1) {}
	Triangle(double x) :a(x), b(1), c(1) {}
	Triangle() :a(1), b(1), c(1) {}
	double perimeter();//���������ε��ܳ�
	double area();//���㲢���������ε����
	void showMessage();
private:
	double a, b, c; //����Ϊ˽�г�Ա����
};

double Triangle::perimeter()
{
	return (a + b + c);
}

double Triangle::area()
{
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::showMessage()
{
	cout << "�����ε����߳��ֱ�Ϊ��" << a << ' ' << b << ' ' << c << endl;
	cout << "�������ε��ܳ�Ϊ" << perimeter() << "�����Ϊ" << area() << endl << endl;
}

int main() {
	Triangle Tri1;   //����߳�Ϊ1 1 1����������ʵ��
	Tri1.showMessage();
	Triangle Tri2(1.5);//����߳�Ϊ1.5 1 1����������ʵ��
	Tri2.showMessage();
	Triangle Tri3(1.5, 1.5);//����߳�Ϊ1.5 1.5 1����������ʵ��
	Tri3.showMessage();
	Triangle Tri4(7, 8, 9); //����߳�Ϊ7 8 9����������ʵ��
	Tri4.showMessage();

	return 0;
}

/*ʵ����Ŀ5
������ָ����Ϊ�����Ĳ���������һ���������飬�ڷ�5��ѧ������
��ѧ�ţ��ַ������ͣ����ɼ������ͣ��������һ������max����ָ������ָ��������������
��max�������ҳ�5��ѧ���гɼ�����ߣ��������ѧ�š�*/
/*#include<iostream>
using namespace std;
class Student {
public:
	Student(string n, int s) : number(n), grade(s) {}
	Student():number("0"),grade(0){}
	void set(string, int);
	void get();
	string number;
	int grade;
};
void Student::get() {
	cout << number << "		" << grade << endl;
}
void Student::set(string p, int n) {
	number = p;
	grade = n;
}
void max(Student* ap)
{
	Student* p = ap ,ma;
	int max=p->grade;
	for (max = ap->grade; p < ap+ 5; p++)
		if ((p->grade) > max) {
			max = p->grade;
			ma = *p;
		}
	cout << ma.number << endl;
}
int main()
{
	Student a[5];
	a[0].set("one", 10); a[1].set("two", 20); a[2].set("three", 30); a[3].set("fore", 40); a[4].set("five", 50);
	max(a);
}
/*ʵ����Ŀ4
����������Ͷ���ָ���ʹ�á�����һ���������飬�ڷ�5��ѧ������
��ѧ�ţ��ַ������ͣ����ɼ������ͣ�������ָ��ָ��������Ԫ�أ������1��3��5��ѧ�������ݡ�*/
/*

#include<iostream>
using namespace std;
class Student {
private:
	string number;
	int grade;
public:
	Student();
	void set(string,int);
	void get();
};
void Student::get() {
	cout << number <<"		"<< grade << endl;
}
Student::Student(){
	number = '0'; grade = 0;
}
void Student::set(string p, int n){
	number = p;
	grade = n;
}
int main()
{
	Student a[5];
	Student* p[5];
	for (int n = 0; n < 5; n++)
	{
		p[n] = &a[n];
	}
	a[0].set("one", 10); a[1].set("two", 20); a[2].set("three", 30); a[3].set("fore", 40); a[4].set("five", 50);
	p[0]->get();	p[2]->get(); p[4]->get();
	return 0;
}*/