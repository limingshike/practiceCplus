////第五题
////编写一个程序，用同一个函数名对n个数据进行从小到大排序，
////数据类型可以是整型、单精度型、双精度型。要求用函数模板实现。
//#include<iostream>
//using namespace std;
//template<typename T>
//T put(T a[], int n)
//{
//	T b;
//	int i, j;
//	for (j = 0; j < n - 1; j++)
//		for (i = 0; i < n - 1; i++)
//			if (a[i] > a[j])
//			{
//				b = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = b;
//			}
//	for (i = 0; i < n; i++)
//		cout << a[i];
//	cout << endl;
//	return 0;
//}
//int main()
//{
//	int m;
//	cout << "1.整型  2.单精度型  3.双精度型" << endl;
//	cout << "请问输入的类型是（仅写序号）" << endl;
//	cin >> m;
//	int n;
//	cout << "输入的数字个数为:";
//	cin >> n;
//	if (m == 1) {
//		int a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	if (m == 2) {
//		float a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	if (m == 3) {
//		double a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	return 0;
//}
////第四题
////编写一个程序，用同一个函数名对n个数据进行从小到大排序，
////数据类型可以是整型、单精度型、双精度型。要求用重载函数实现。
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int put(int a[], int n);
//	float put(float a[], int n);
//	double put(double a[], int n);
//
//	int m;
//	cout << "1.整型  2.单精度型  3.双精度型" << endl;
//	cout << "请问输入的类型是（仅写序号）" << endl;
//	cin >> m;
//	int n;
//	cout << "输入的数字个数为:";
//	cin >> n;
//	if (m == 1) {
//		int a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	if (m == 2) {
//		float a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	if (m == 3) {
//		double a[30];
//		int i;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		put(a, n);
//	}
//	return 0;
//}
//int put(int a[], int n)
//{
//	int i, j;
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < n - j - 1; i++)
//		{
//			if (a[i] > a[i + 1]) {
//				int m;
//				m = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = m;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		cout << a[i];
//	cout << endl;
//	return 0;
//}
//float put(float a[], int n)
//{
//	int i, j;
//	for (j = 0; j < n - 1; j++)
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			if (a[i] > a[i + 1]) {
//				float m;
//				m = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = m;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		cout << a[i];
//	cout << endl;
//	return 0;
//}
//double put(double a[], int n)
//{
//	int i, j;
//	for (j = 0; j < n - 1; j++)
//	{
//		for (i = 0; i < n - 1; i++)
//		{
//			if (a[i] > a[i + 1]) {
//				double m;
//				m = a[i + 1];
//				a[i + 1] = a[i];
//				a[i] = m;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//		cout << a[i];
//	cout << endl;
//	return 0;
//}
//
//
////第三题
////输入一个字符串，把其中的字符按逆序输出。如输入LIGHT,输出THGIL。要求用string方法。
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	char a[100];
//	int num;
//	cin >> a;
//	num = (int)strlen(a);
//	for (num--; num > 0; num--)
//	{
//		cout << a[num];
//	}
//	cout << endl;
//	return 0;
//}
//
////第二题
////对3个变量按从小到大顺序排序，要求使用变量的引用。
//
//#include<iostream>
//using namespace std;
//void change(int &a,int &b)
//{
//	int* p,temp;
//	p = &a;
//	if (*p > b)
//	{
//		temp = *p;
//		*p = b;
//		b = temp;
//	}
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b)
//		change(a, b);
//	if (a > c)
//		change(a, c);
//	if (b > c)
//		change(b, c);
//	cout << a << '<' << b << '<' << c << endl;
//	return 0;
//}
//
////第一题
////求2个或3个正整数中的最大值，用带有默认参数的函数实现。
//
//#include<iostream>
//using namespace std;
//int puts(int a, int b, int c=0);
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout <<"三个数中最大的是"<<puts(a,b,c) << endl;
//	cout << "两个数中最大的是" << puts(a, b) << endl;
//	return 0;
//}
//int puts(int a, int b, int c)
//{
//	int max=a;
//	if (max < b)	max = b;
//	if (max < c)	max = c;
//	return max;
//}
