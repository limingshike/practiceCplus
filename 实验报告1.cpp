////������
////��дһ��������ͬһ����������n�����ݽ��д�С��������
////�������Ϳ��������͡��������͡�˫�����͡�Ҫ���ú���ģ��ʵ�֡�
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
//	cout << "1.����  2.��������  3.˫������" << endl;
//	cout << "��������������ǣ���д��ţ�" << endl;
//	cin >> m;
//	int n;
//	cout << "��������ָ���Ϊ:";
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
////������
////��дһ��������ͬһ����������n�����ݽ��д�С��������
////�������Ϳ��������͡��������͡�˫�����͡�Ҫ�������غ���ʵ�֡�
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
//	cout << "1.����  2.��������  3.˫������" << endl;
//	cout << "��������������ǣ���д��ţ�" << endl;
//	cin >> m;
//	int n;
//	cout << "��������ָ���Ϊ:";
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
////������
////����һ���ַ����������е��ַ������������������LIGHT,���THGIL��Ҫ����string������
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
////�ڶ���
////��3����������С����˳������Ҫ��ʹ�ñ��������á�
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
////��һ��
////��2����3���������е����ֵ���ô���Ĭ�ϲ����ĺ���ʵ�֡�
//
//#include<iostream>
//using namespace std;
//int puts(int a, int b, int c=0);
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout <<"��������������"<<puts(a,b,c) << endl;
//	cout << "��������������" << puts(a, b) << endl;
//	return 0;
//}
//int puts(int a, int b, int c)
//{
//	int max=a;
//	if (max < b)	max = b;
//	if (max < c)	max = c;
//	return max;
//}
