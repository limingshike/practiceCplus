/*#include<iostream>
using namespace std;
class Matrix {
	int a1, a2, a3, a4, a5, a6;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0, int e=0, int f=0) :a1(a), a2(b), a3(c), a4(d), a5(e), a6(f) {};
	Matrix &  operator+(Matrix& );
	Matrix& operator ++();
	Matrix& operator ++(int);
	friend Matrix& operator *(Matrix &,int);
	friend Matrix& operator *(int, Matrix&);
	friend ostream& operator <<(ostream& out, Matrix& t);
	friend istream& operator >>(istream& in, Matrix& t);
};
Matrix& operator *(Matrix& t, int a) {
	t.a1 = t.a1 * a, t.a2 = t.a2 * a, t.a3 = t.a3 * a, t.a4 = t.a4 * a, t.a5 = t.a5 * a, t.a6 = t.a6 * a;	
	return t;
}
Matrix& operator *(int a, Matrix& t) {
	return t* a;
}
Matrix  & Matrix::operator+(Matrix& c) {
	a1 += c.a1;
	a2 += c.a2;
	a3 += c.a3;
	a4 += c.a4;
	a5 += c.a5;
	a6 += c.a6;
	return *this;
}
istream& operator >>(istream& in, Matrix& t) {
	in >> t.a1 >> t.a2 >>t. a3 >>t. a4 >>t. a5 >>t. a6;
	return in;
}
ostream& operator <<(ostream& out, Matrix& t)
{
	out << t.a1 << "	" << t.a2 << "	" << t.a3 << endl;
	out << t.a4 << "	" << t.a5 << "	" << t.a6 << endl;
	return out;	
}
Matrix &Matrix:: operator ++() {
	++a1, ++a2, ++a3, ++a4, ++a5, ++a6;
	return *this;
}
Matrix& Matrix:: operator ++(int) {
	Matrix temp(*this);
	a1++, a2++, a3++, a4++, a5++, a6++;
	return temp;
}
int main()
{
	Matrix a(1, 2, 3, 4, 5, 6), b(6, 5, 4, 3, 2, 1), c, d, e;
	int a1 = 2, a2 = 3;//用于测试数乘运算时用到的整数
	//(1)测试：>>，输入a和b
		//a的值如下：
		//	1	1	1
		//	2	2	2
		//b的值如下：
		//	3	2	1
		//	6	5	4
	cout << "请输入a和b" << endl;
	cin >> a >> b;
	cout << "--------------------------" << endl;

	//(2)测试：<<，输出a和b
		//输出结果格式：
		//a的值如下：（b与a类似）
		//	1 1 1
		//	2 2 2
	cout << "a的值如下：" << endl;
	cout << a << endl;
	cout << "b的值如下：" << endl;
	cout << b << endl;
	cout << "--------------------------" << endl;

	//(3)测试：+，并输出a+b的结果
	cout << "a+b的结果如下：" << endl;
	cout << a + b << endl;
	cout << "--------------------------" << endl;

	//(4)测试：=，将a赋给c，并输出c
	cout << "执行c=a之后，c的值如下：" << endl;
	c = a;
	cout << c;
	cout << "--------------------------" << endl;

	//(4)测试：整数左乘矩阵，计算a1*c并输出
	cout << "测试整数左乘矩阵" << endl;
	cout << "整数为:" << a1 << endl;
	cout << "矩阵为:" << endl << c;
	cout << "整数左乘矩阵结果如下：" << endl;
	cout << a1 * c;
	cout << "--------------------------" << endl;

	//(5)测试：整数右乘矩阵，计算c*a2并输出
	cout << "测试整数右乘矩阵" << endl;
	cout << "整数为:" << a2 << endl;
	cout << "矩阵为:" << endl << c;
	cout << "整数右乘矩阵结果如下：" << endl;
	cout << c * a2;
	cout << "--------------------------" << endl;

	//(6)测试：前置自增++,计算d=++c并输出
	cout << "测试前置自增++" << endl;
	cout << "c的初始值如下：" << endl;
	cout << c;
	cout << "d=++c执行之后结果如下：" << endl;
	d = ++c;
	cout << "c的结果如下:" << endl;
	cout << c;
	cout << "d的结果如下:" << endl;
	cout << d;
	cout << "--------------------------" << endl;

	//(7)测试：后置自增++,计算e=c++并输出
	cout << "测试后置自增++" << endl;
	cout << "c的初始值如下：" << endl;
	c = a;
	cout << c;
	cout << "e=c++执行之后结果如下：" << endl;
	e = c++;
	cout << "c的结果如下:" << endl;
	cout << c;
	cout << "e的结果如下:" << endl;
	cout << e;
	cout << "--------------------------" << endl;
	return 0;
}
*/