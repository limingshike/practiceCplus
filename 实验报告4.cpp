/*#include<stdio.h>
int main()
{
	int year, mouth;
	char c1;
	printf("������������Ϣ�����磺n/m��");		
	scanf("%d%c%d", &year, &c1, &mouth);
	switch (mouth)
	{
	case 1:
	case 3 :
	case 5:
	case 7: 
	case 8: 
	case 10:
	case 12:printf("%d��%d����31��", year, mouth); break;
	case 2:if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d��%d����29��", year, mouth);
		  else printf("%d��%d����28��", year, mouth);
		break;
	case 4:
	case 6:
	case 9:
	case 11:printf("%d��%d����30��", year, mouth); break;
	}
	
	return 0;
}
/*#include <iostream>
using namespace std;
template<class numtype>
class Compare
{
public:
	Compare(numtype a, numtype b)
	{
		x = a; y = b;
	}
	numtype max();
	numtype min();
private:
	numtype x, y;
};
template<class numtype>
numtype Compare<numtype>::max()
{
	return x > y ? x : y;
}
template<class numtype>
numtype Compare<numtype>::min()
{
	return x < y ? x : y;
}
int main()
{
	Compare<int> cmp1(3, 7);
	cout << cmp1.max() << " is the Maximum of two integer numbers." << endl;
	cout << cmp1.min() << " is the Minimum of two integer numbers." << endl << endl;
	Compare<float> cmp2(45.78, 93.6);
	cout << cmp2.max() << " is the Maximum of two float numbers." << endl;
	cout << cmp2.min() << " is the Minimum of two float numbers." << endl << endl;
	Compare<char> cmp3('a', 'A');
	cout << cmp3.max() << " is the Maximum of two characters." << endl;
	cout << cmp3.min() << " is the Minimum of two characters." << endl;
	return 0;
}


///*����̬���ݳ�Ա�;�̬��Ա�������̵�����ĳһ��Ʒ���̵�ÿ�칫��ͳһ���ۿ�(discount)��
//ͬʱ����������Ա������ʱ��������ۼ�(price)���ڴ˻����ϣ���һ�ι�10�������ߣ�����������98���Żݡ�����֪3������Աһ���������Ϊ
//����Ա�ţ�num��	��������(quantity)	��������(price)
//101		5		23.5
//102		12		24.56
//103		100		21.5
//���д���򣬼��������Ʒ�������ۿ�sum�Լ�ÿ����Ʒ��ƽ���ۼۡ�Ҫ���þ�̬���ݳ�Ա�;�̬��Ա����ʵ�֡�*/
//#include<iostream>
//using namespace std;
//class Goods {
//public:
//	Goods(int a, int b, float c) :num(a), quantity(b), price(c) {};
//	void total();
//	static void show();
//private:
//	int num;
//	int quantity;
//	float price;
//	static	float sum;
//	static int n;
//	static float discount;
//};
//float Goods::sum=0;
//int Goods::n=0;
//float Goods::discount=0.98;
//void Goods::total()
//{
//	if (quantity > 10)
//		sum =sum+ price * quantity * discount;
//	if (quantity < 10)
//		sum =sum+ price * quantity ;
//	n = n + quantity;
//}
//void Goods::show()
//{
//	cout << "�����ۿ�Ϊ:" <<sum<< endl;
//	cout << "ƽ���ۼ�Ϊ:" << sum/n << endl;
//}
//int main()
//{
//	static Goods a[3] =
//	{
//	Goods(101,5,23.5),
//	Goods(102, 12, 24.56),
//	Goods(103, 100, 21.5),
//	};
//	for (int i = 0; i < 3; i++) {
//		a[i].total();
//	}
//	a[0].show();
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//class Student
//{
//public:
//	Student(int n, float s) :num(n), score(s) {}
//	void change(int n, float s) { num = n; score = s; }
//	void display() { cout << num << " " << score << endl; }
//private:
//	int num;
//	float score;
//};
//void fun(Student& p)
//{
//	p.display();
//	p.change(101, 80.5);
//	p.display();
//}
//int main()
//{
//	Student stud(101, 78.5);
//	fun(stud);
//	return 0;
//}
////Ҫ������һ��fun��������дmain��������Ϊ��fun�����е���change��display��������fun������ʹ�ö��������(Student&)��Ϊ�βΡ�