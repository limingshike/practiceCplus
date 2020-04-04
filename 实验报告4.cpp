/*#include<stdio.h>
int main()
{
	int year, mouth;
	char c1;
	printf("请输入年月信息（例如：n/m）");		
	scanf("%d%c%d", &year, &c1, &mouth);
	switch (mouth)
	{
	case 1:
	case 3 :
	case 5:
	case 7: 
	case 8: 
	case 10:
	case 12:printf("%d年%d月有31天", year, mouth); break;
	case 2:if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		printf("%d年%d月有29天", year, mouth);
		  else printf("%d年%d月有28天", year, mouth);
		break;
	case 4:
	case 6:
	case 9:
	case 11:printf("%d年%d月有30天", year, mouth); break;
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


///*【静态数据成员和静态成员函数】商店销售某一商品，商店每天公布统一的折扣(discount)。
//同时允许销售人员在销售时灵活掌握售价(price)，在此基础上，对一次购10件以上者，还可以享受98折优惠。现已知3个销货员一次销售情况为
//销货员号（num）	销货件数(quantity)	销货单价(price)
//101		5		23.5
//102		12		24.56
//103		100		21.5
//请编写程序，计算出此商品的总销售款sum以及每件商品的平均售价。要求用静态数据成员和静态成员函数实现。*/
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
//	cout << "总销售款为:" <<sum<< endl;
//	cout << "平局售价为:" << sum/n << endl;
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
////要求：增加一个fun函数，改写main函数。改为在fun函数中调用change和display函数。在fun函数中使用对象的引用(Student&)作为形参。