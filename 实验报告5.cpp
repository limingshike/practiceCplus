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
	int a1 = 2, a2 = 3;//���ڲ�����������ʱ�õ�������
	//(1)���ԣ�>>������a��b
		//a��ֵ���£�
		//	1	1	1
		//	2	2	2
		//b��ֵ���£�
		//	3	2	1
		//	6	5	4
	cout << "������a��b" << endl;
	cin >> a >> b;
	cout << "--------------------------" << endl;

	//(2)���ԣ�<<�����a��b
		//��������ʽ��
		//a��ֵ���£���b��a���ƣ�
		//	1 1 1
		//	2 2 2
	cout << "a��ֵ���£�" << endl;
	cout << a << endl;
	cout << "b��ֵ���£�" << endl;
	cout << b << endl;
	cout << "--------------------------" << endl;

	//(3)���ԣ�+�������a+b�Ľ��
	cout << "a+b�Ľ�����£�" << endl;
	cout << a + b << endl;
	cout << "--------------------------" << endl;

	//(4)���ԣ�=����a����c�������c
	cout << "ִ��c=a֮��c��ֵ���£�" << endl;
	c = a;
	cout << c;
	cout << "--------------------------" << endl;

	//(4)���ԣ�������˾��󣬼���a1*c�����
	cout << "����������˾���" << endl;
	cout << "����Ϊ:" << a1 << endl;
	cout << "����Ϊ:" << endl << c;
	cout << "������˾��������£�" << endl;
	cout << a1 * c;
	cout << "--------------------------" << endl;

	//(5)���ԣ������ҳ˾��󣬼���c*a2�����
	cout << "���������ҳ˾���" << endl;
	cout << "����Ϊ:" << a2 << endl;
	cout << "����Ϊ:" << endl << c;
	cout << "�����ҳ˾��������£�" << endl;
	cout << c * a2;
	cout << "--------------------------" << endl;

	//(6)���ԣ�ǰ������++,����d=++c�����
	cout << "����ǰ������++" << endl;
	cout << "c�ĳ�ʼֵ���£�" << endl;
	cout << c;
	cout << "d=++cִ��֮�������£�" << endl;
	d = ++c;
	cout << "c�Ľ������:" << endl;
	cout << c;
	cout << "d�Ľ������:" << endl;
	cout << d;
	cout << "--------------------------" << endl;

	//(7)���ԣ���������++,����e=c++�����
	cout << "���Ժ�������++" << endl;
	cout << "c�ĳ�ʼֵ���£�" << endl;
	c = a;
	cout << c;
	cout << "e=c++ִ��֮�������£�" << endl;
	e = c++;
	cout << "c�Ľ������:" << endl;
	cout << c;
	cout << "e�Ľ������:" << endl;
	cout << e;
	cout << "--------------------------" << endl;
	return 0;
}
*/