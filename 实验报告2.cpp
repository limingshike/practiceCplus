//��ͼ�顿��дһ��Book�࣬����name������)��writer�����ߣ���
//public_name�������磩��price���۸񣩡�number����������NO����ţ������ݳ�Ա��
//�����Ա����setBook������Ϊ�鼮�����ݳ�Ա��ֵ�������Ա����borrow��restore��
//�ֱ�������ͻ��أ��衢����ʱ����ʱֻ�����������1��1�������������һ����ĸ��
//���ſγ̽�չ�����Ǽ�����������ͼ�����ϵͳ��ÿ���鶼��׷�ٵ���˭��ʱ���ˣ�
//��ʱ���ˣ�ҵ�񣬶����Ա����print����������й������Ϣ��
//����set_NO��get_NO��ʵ���޸����������������������š��Լ�дmain�����������������д���ࡣ
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
	cout << "���������ߣ������磬�۸����������" << endl;
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
	cout << "�����޸��鼮��ϢΪ��";
	cin >> NO;
}
void Book::get_NO()
{
	cout << "�鼮��ϢΪ" << NO << endl;
	cout << "---------------------" << endl;
}
void Book::print()
{
	cout << "����Ϊ��" << name << endl;
	cout << "����Ϊ��" << writer << endl;
	cout << "������Ϊ��" << public_name << endl;
	cout << "�۸�Ϊ��" << price << endl;
	cout << "����Ϊ��" << number << endl;
	cout << "���Ϊ��" << NO << endl;
	cout << "---------------------" << endl;
}
void menu()
{
	cout << "---------------------" << endl;
	cout << "1.¼���鼮��Ϣ" << endl;
	cout << "2.�����鼮" << endl;
	cout << "3.�黹�鼮" << endl;
	cout << "4.�޸��鼮���" << endl;
	cout << "5.��ȡ�鼮���" << endl;
	cout << "6.��ȡ�鼮��Ϣ" << endl;
	cout << "7.�˳����˵�" << endl;
	cout << "---------------------" << endl;
}
void main1()
{
	Book a1;

	while (1) {

		menu();
		int num;
		cout << "��������Ҫִ�е���" << endl;
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



//�ڶ���
//����������������������ڣ������գ���������������ڡ�Ҫ������������ںϷ�����֤���������Ķ�����2��

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
	cout << "���������ڣ���ʽ��/��/�գ�" << endl;
	while (1)
	{
		cin >> year >> c1 >> mouth >> c2 >> day;
		if (c1 != '/' || c2 != '/')
			cout << "��ʽ����ȷ������������" << endl;
		else if (!is_time(year, mouth, day))
			cout << "ʱ��Ƿ�������������" << endl;
		else break;
	}
	add_day(year, mouth, day);
}
void Time::show_time()
{
	cout << "��һ�콫��" << endl;
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
//��һ��
//��������Χ����ۡ���һ��Բ�εĺ������أ�Χ���÷���Χ�ɣ�ÿƽ�������MԪ�����뺵�����뾶��Χ���߶ȣ�
//�ó�����������ۡ���������Ѹ����������Ƴ�Ա�����Ķ�������������������Ķ�����2��

#include<iostream>
using namespace std;
const int M = 20;
const double Pi = 3.1415926;
class Circle {
public:
	void setRadius(double r);
	void setHigh(double h);
	double s(); //���
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
	cout << "�����뺵�����İ뾶��";
	cin >> r;
	cout << endl;
	cout << "�����뺵������g�߶ȣ�";
	cin >> h;
	cout << endl;
	Circle c;
	c.setRadius(r);
	c.setHigh(h);
	cout << "�����������Ϊ" <<  M * c.s() << "Ԫ��" << endl;
	return 0;
}*/