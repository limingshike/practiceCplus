//【图书】编写一个Book类，包含name（书名)、writer（著者）、
//public_name（出版社）、price（价格）、number（数量）、NO（书号）等数据成员。
//定义成员函数setBook，用来为书籍的数据成员赋值，定义成员函数borrow和restore，
//分别办理借出和还回（借、还书时，暂时只完成数量的增1减1，这里的书仍是一种书的概念，
//随着课程进展，我们继续做真正的图书管理系统，每本书都能追踪到是谁何时借了，
//何时还了）业务，定义成员函数print用于输出—有关书的信息，
//定义set_NO与get_NO来实现修改类对象的书号与获得类对象的书号。自己写main函数，用来测试你编写的类。
/*
#include<iostream>
using namespace std;
class Book {
public:
	void setBook();
	void borrow();
	void reatore();
	void set_NO();
	void get_NO();
	void print();
private:
	string name;
	string writer;
	string public_name;
	double price;
	int number;
	int NO;
};
void Book::setBook()
{
	cout << "书名，著者，出版社，价格，数量，书号" << endl;
	cin >> name >> writer >> public_name >> price >> number >> NO;
	cout << endl;
}
void Book::borrow()
{
	number--;
}
void Book::reatore()
{
	number++;
}
void Book::set_NO()
{
	cout << "请问修改书籍信息为：";
	cin >> NO;
}
void Book::get_NO()
{
	cout << "书籍信息为" << NO << endl;
	cout << "---------------------" << endl;
}
void Book::print()
{
	cout << "书名为：" << name << endl;
	cout << "著者为：" << writer << endl;
	cout << "出版社为：" << public_name << endl;
	cout << "价格为：" << price << endl;
	cout << "数量为：" << number << endl;
	cout << "书号为：" << NO << endl;
	cout << "---------------------" << endl;
}
void menu()
{
	cout << "---------------------" << endl;
	cout << "1.录入书籍信息" << endl;
	cout << "2.出借书籍" << endl;
	cout << "3.归还书籍" << endl;
	cout << "4.修改书籍书号" << endl;
	cout << "5.获取书籍书号" << endl;
	cout << "6.获取书籍信息" << endl;
	cout << "7.退出主菜单" << endl;
	cout << "---------------------" << endl;
}
void main1()
{
	Book a1;

	while (1) {

		menu();
		int num;
		cout << "请问你想要执行的是" << endl;
		cin >> num;
		switch (num)
		{
		case 1:	a1.setBook(); break;
		case 2:	a1.borrow(); break;
		case 3:	a1.reatore(); break;
		case 4:	a1.set_NO(); break;
		case 5:	a1.get_NO(); break;
		case 6:	a1.print(); break;
		case 7:   exit(0); default:break;
		}
	}
}
int main()
{
	main1();
	return 0;
}



//第二题
//【明天在哪里】输入今天的日期（年月日），计算明天的日期。要求进行输入日期合法性验证。（参与阅读程序2）

#include<iostream>
using namespace std;
class Time {
public:
	void set_time();
	void show_time();
	void add_day(int, int, int);
private:
	bool is_time(int, int, int);
	int year;
	int mouth;
	int day;
};
void Time::set_time()
{
	char c1, c2;
	cout << "请输入日期（格式年/月/日）" << endl;
	while (1)
	{
		cin >> year >> c1 >> mouth >> c2 >> day;
		if (c1 != '/' || c2 != '/')
			cout << "格式不正确，请重新输入" << endl;
		else if (!is_time(year, mouth, day))
			cout << "时间非法，请重新输入" << endl;
		else break;
	}
	add_day(year, mouth, day);
}
void Time::show_time()
{
	cout << "下一天将是" << endl;
	cout << year << '/' << mouth << '/' << day << endl;
}
void Time::add_day(int y, int m, int d)
{
	if (m == 12)
		if (d == 31)
			year++, mouth = 1, day = 1;
		else d++;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
		if (d == 31)
			mouth++, day = 1;
		else day++;
	if (m == 4 || m == 6 || m == 9 || m == 11)
		if (d == 30)
			mouth++, day = 1;
		else day++;
	if (m == 2)
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			if (d == 29)
				mouth++, day = 1;
			else day++;
		else if (d == 28)
			mouth++, day = 1;
		else day++;
}
bool Time::is_time(int y, int m, int d)
{
	if (m == 2)
	{
		if ((y % 4 == 0 && y % 400 != 0) || (y % 400 == 0))
		{
			if (d > 29 || d < 1)
				return false;
		}
		else if (d > 28 || d < 1)
			return false;

	}

	if (m > 12 || m < 1)
		return false;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
		if (d > 31 || d < 1)
			return false;
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d > 30 || d < 1)
			return false;
	}
	else return true;

}
int main()
{
	Time t1;
	t1.set_time();
	t1.show_time();
	return 0;
}/*
//第一题
//【旱冰场围栏造价】有一个圆形的旱冰场地，围栏用帆布围成，每平方米造价M元，输入旱冰场半径和围栏高度，
//用程序计算出其造价。类的声明已给出，请完善成员函数的定义和主函数。（参与阅读程序2）

#include<iostream>
using namespace std;
const int M = 20;
const double Pi = 3.1415926;
class Circle {
public:
	void setRadius(double r);
	void setHigh(double h);
	double s(); //面积
private:
	double radius;
	double high;
};
void Circle::setRadius(double r)
{
	radius = r;
}
void Circle::setHigh(double h)
{
	high = h;
}
double Circle::s()
{
	return 2 * Pi * radius * high;
}
int main()
{
	double r,h;
	cout << "请输入旱冰场的半径：";
	cin >> r;
	cout << endl;
	cout << "请输入旱冰场的g高度：";
	cin >> h;
	cout << endl;
	Circle c;
	c.setRadius(r);
	c.setHigh(h);
	cout << "旱冰场的造价为" <<  M * c.s() << "元。" << endl;
	return 0;
}*/