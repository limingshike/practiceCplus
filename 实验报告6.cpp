/*�����ؼ̳С�
�ֱ���Teacher(��ʦ)���Cadre���ɲ����࣬���ö��ؼ̳з�ʽ��������������������Teacher_Cadre����ʦ��ɲ�����Ҫ��
��1�������������ж��������������䡢�Ա𡢵�ַ���绰�����ݳ�Ա��
��2����Teacher���л��������ݳ�Աtitle(ְ��)����Cadre���л��������ݳ�Աpost��ְ�񣩣���Teacher_Cadre���л��������ݳ�Աwages(����)��
��3�������������е����������䡢�Ա𡢵�ַ���绰�����ݳ�Ա����ͬ�����֣���������Щ���ݳ�Աʱ��ָ��������
��4����������������Ա�����������ⶨ���Ա������
��5����������Teacher_Cadre�ĳ�Ա����show�е���Teacher���е�display������
������������䡢�Ա�ְ�ơ���ַ���绰��Ȼ������cout������ְ���빤�ʡ�*/
//#include<iostream>
//using namespace std;
//class Teacher_Cadre;
//class Teacher {
//public:
//	Teacher(string, int, string, string, int, string);
//	void display();
//protected:
//	string name;
//	int age;
//	string sex;
//	string address;
//	int number;
//	string title;	//ְ��
//};
//Teacher::Teacher(string nam, int ag, string s, string add, int num, string tit) {
//	Teacher::name = nam;
//	Teacher::age = ag;
//	Teacher::sex = s;
//	Teacher::address = add;
//	Teacher::number = num;
//	Teacher::title = tit;
//}
//void Teacher::display() {
//	cout << "����:" << Teacher::name << "	����:" << Teacher::age << "	�Ա�:" << Teacher::sex << "	ְ��:" << Teacher::title << "	��ַ:" << Teacher::address << "	�绰:" << Teacher::number << endl;
//}
//class Cadre {
//public:
//	Cadre(string, int, string, string, int, string);
//protected:
//	string name;
//	int age;
//	string sex;
//	string address;
//	int number;
//	string post;	//ְ��
//};
//Cadre::Cadre(string nam, int ag, string s, string add, int num, string po) {
//	Cadre::name = nam;
//	Cadre::age = ag;
//	Cadre::sex = s;
//	Cadre::address = add;
//	Cadre::number = num;
//	Cadre::post = po;
//}
//class Teacher_Cadre : public Teacher, public Cadre {
//public:
//	Teacher_Cadre(string, int, string, string, int, string, string, int);
//	void show();
//protected:
//	int wages;		//����
//};
//Teacher_Cadre::Teacher_Cadre(string nam, int ag, string s, string add, int num, string tit, string po, int wage) :
//	Teacher(nam, ag, s, add, num, tit), Cadre(nam, ag, s, add, num, po), wages(wage) {}
////	Teacher_Cadre::wages = wage;
////	, name(nam), age(ag), sex(s), address(add), number(num), wages(wage)
//
//void Teacher_Cadre::show()
//{
//	Teacher::display();
//	cout << "ְ��Ϊ:" << Cadre::post << "����Ϊ:" << Teacher_Cadre::wages << endl;
//}
//
//int main()
//{
//	Teacher_Cadre a("̷��ǿ", 29, "��", "�й�", 110, "����ר��", "��ʦ", 4000);
//	a.show();
//	return 0;
//}
/*���༶������
�����µ���ʾ���ɻ������ƺͲ��Կ�ʼ���𽥵���ɸ��������ƣ����Բ������ı���������������������Ҫ��ļ�������
��1���Ƚ���һ��Point(��)�࣬�������ݳ�Աx, y(�����)��ʵ����Ҫ�ĳ�Ա�����������main������ɲ��ԣ�
��2����PointΪ���࣬������һ��Circle(Բ)�࣬�������ݳ�Աr(�뾶)���Լ�������ĳ�Ա����area��
ʵ��������Ҫ�ĳ�Ա���������main������ɲ��ԣ�
��3������Circle��Ϊֱ�ӻ��࣬������һ��Cylinder(Բ����)�࣬���������ݳ�Աh(��)��
�Լ���Բ��������ĳ�Ա����area����Բ������ĳ�Ա����volume��ʵ����Ҫ�ĳ�Ա�����������main������ɲ��ԡ�
Ҫ���д������Ƴ������С���Ҫ�ĳ�Ա���������������캯���������������޸����ݳ�Ա
�ͻ�ȡ���ݳ�Ա�Ĺ����ӿڡ��������������������� << �������ȡ�*/
//#include<iostream>
//using namespace std;
//const float PI = 3.14;
//class Point {
//public:
//	Point(int a, int b) :x(a), y(b) {};
//	~Point() {};
//	void setX(int a) { x = a; };
//	void setY(int b) { y = b; };
//	int getX() { return x; };
//	int getY() { return y; };
//	friend ostream& operator << (ostream & out,  Point& t);
//protected:
//	int x;
//	int y;
//};
//ostream& operator << (ostream& out, Point& t) {
//	out << t.x << t.y;
//	return out;
//}
//class Circle :virtual public Point {
//public:
//	Circle(int a, int b, int c) :Point(a, b), r(c) {};
//	~Circle() {};
//	float area() { return  PI * r * r; };
//	void setR(int a) { r = a; };
//	int getR() { return r; };
//	friend ostream& operator << (ostream & out,  Circle & t);
//protected:
//	int r;
//};
//ostream& operator << (ostream& out, Circle& t) {
//	out << "Բ�����Ϊ:" << t.area();
//	return out;
//}
//class Cylinder :public Circle {
//public:
//	Cylinder(int a, int b, int c, int d) :Point(a, b),Circle(a,b,c), h(d) {};
//	~Cylinder() {};
//	void setH(int a) { h = a; };
//	int getH() { return h; };
//	float area() { return 2 * PI * r * r + 2 * PI * r * h ; }; 
//	float volume() { return PI * r * r * h; };
//	friend ostream& operator << (ostream & out,  Cylinder & t);
//protected:
//	int h;
//};
//ostream& operator<< (ostream& out,  Cylinder& t)
//{
//	out <<"Բ����ı����:"<<t.area();
//	out << "	Բ��������:" << t.volume();
//	return out;
//}
//int main() {
//	Cylinder a(1, 1, 1, 1);
//	cout << a << endl;
//	return 0;
//}