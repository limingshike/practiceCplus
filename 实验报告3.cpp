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
	double perimeter();//计算三角形的周长
	double area();//计算并返回三角形的面积
	void showMessage();
private:
	double a, b, c; //三边为私有成员数据
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
	cout << "三角形的三边长分别为：" << a << ' ' << b << ' ' << c << endl;
	cout << "该三角形的周长为" << perimeter() << "，面积为" << area() << endl << endl;
}

int main() {
	Triangle Tri1;   //定义边长为1 1 1的三角形类实例
	Tri1.showMessage();
	Triangle Tri2(1.5);//定义边长为1.5 1 1的三角形类实例
	Tri2.showMessage();
	Triangle Tri3(1.5, 1.5);//定义边长为1.5 1.5 1的三角形类实例
	Tri3.showMessage();
	Triangle Tri4(7, 8, 9); //定义边长为7 8 9的三角形类实例
	Tri4.showMessage();

	return 0;
}

/*实验题目5
【对象指针作为函数的参数】建立一个对象数组，内放5个学生数据
（学号（字符串类型）、成绩（整型）），设计一个函数max，用指向对象的指针作函数参数，
在max函数中找出5个学生中成绩最高者，并输出其学号。*/
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
/*实验题目4
【对象数组和对象指针的使用】建立一个对象数组，内放5个学生数据
（学号（字符串类型）、成绩（整型）），用指针指向数组首元素，输出第1，3，5个学生的数据。*/
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