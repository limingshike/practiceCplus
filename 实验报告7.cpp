/*дһ�����򣬶���������Shape������������3�������ࣺCircle(Բ��)��
Square(������)��Rectangle(����)�����麯���ֱ���㼸��ͼ�������
�������ǵĺ͡�Ҫ���û���ָ�����飬ʹ����ÿһ��Ԫ��ָ��һ�����������*/
//#include<iostream>
//using namespace std;
//class Shape {
//public:
//	virtual void area() {};
//	virtual float are() { return 0; };
//};
//class Circle :public Shape {
//public:
//	Circle(int a = 0) :r(a) {};
//	~Circle() {};
//	virtual float are() { return  3.14 * r * r ; };
//	virtual void area() { cout <<"Circle's area is	"<< 3.14 * r * r<<endl; };
//protected:
//	int r;
//};
//class Rectangle :public Shape {
//public:
//	Rectangle(int c, int d) :a(c), b(d) {};
//	~Rectangle() {};
//	virtual float are() { return  a*b; };
//	virtual void area() { cout << "Rectangle's area is	"<<a*b << endl; };
//protected:
//	int a;
//	int b;
//};
//class Square :public Shape {
//public:
//	Square(int c) :a(c) {};
//	~Square() {};
//	virtual float are() { return  a * a; };
//	virtual void area() { cout <<"Square's area is	"<< a*a<< endl; };
//protected:
//	int a;
//};
//
//int main()
//{
//	Shape *a[3];
//	Circle c(2);
//	Rectangle r(2, 4);
//	Square s(3);
//	a[0] = &c;
//	a[1] = &r;
//	a[2] = &s;
//	(*a[0]).area();
//	a[1]->area();
//	(*a[2]).area();
//	cout << "The total area is	" << a[0]->are() + a[1]->are() + a[2]->are() << endl;
//	return 0;
//}
