/*【多重继承】
分别定义Teacher(教师)类和Cadre（干部）类，采用多重继承方式由这两个类派生出新类Teacher_Cadre（教师兼干部）。要求：
（1）在两个基类中都包含姓名、年龄、性别、地址、电话等数据成员。
（2）在Teacher类中还包含数据成员title(职称)，在Cadre类中还包含数据成员post（职务），在Teacher_Cadre类中还包含数据成员wages(工资)。
（3）对两个基类中的姓名、年龄、性别、地址、电话等数据成员用相同的名字，在引用这些数据成员时，指定作用域。
（4）在类体中声明成员函数，在类外定义成员函数。
（5）在派生类Teacher_Cadre的成员函数show中调用Teacher类中的display函数，
输出姓名、年龄、性别、职称、地址、电话，然后再用cout语句输出职务与工资。*/
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
//	string title;	//职称
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
//	cout << "名字:" << Teacher::name << "	年龄:" << Teacher::age << "	性别:" << Teacher::sex << "	职称:" << Teacher::title << "	地址:" << Teacher::address << "	电话:" << Teacher::number << endl;
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
//	string post;	//职务
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
//	int wages;		//工资
//};
//Teacher_Cadre::Teacher_Cadre(string nam, int ag, string s, string add, int num, string tit, string po, int wage) :
//	Teacher(nam, ag, s, add, num, tit), Cadre(nam, ag, s, add, num, po), wages(wage) {}
////	Teacher_Cadre::wages = wage;
////	, name(nam), age(ag), sex(s), address(add), number(num), wages(wage)
//
//void Teacher_Cadre::show()
//{
//	Teacher::display();
//	cout << "职务为:" << Cadre::post << "工资为:" << Teacher_Cadre::wages << endl;
//}
//
//int main()
//{
//	Teacher_Cadre a("谭浩强", 29, "男", "中国", 110, "教育专家", "老师", 4000);
//	a.show();
//	return 0;
//}
/*【多级派生】
按以下的提示，由基类的设计和测试开始，逐渐地完成各个类的设计，求出圆格柱体的表面积、体积并输出并且完成要求的计算任务：
（1）先建立一个Point(点)类，包含数据成员x, y(坐标点)，实现需要的成员函数，并设计main函数完成测试；
（2）以Point为基类，派生出一个Circle(圆)类，增加数据成员r(半径)，以及求面积的成员函数area，
实现其他需要的成员函数，设计main函数完成测试；
（3）再以Circle类为直接基类，派生出一个Cylinder(圆柱体)类，再增加数据成员h(高)，
以及求圆柱表面积的成员函数area和求圆柱体积的成员函数volume，实现需要的成员函数，并设计main函数完成测试。
要求编写程序，设计出各类中“需要的成员函数”，包括构造函数、析构函数、修改数据成员
和获取数据成员的公共接口、用于输出的重载运算符“ << ”函数等。*/
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
//	out << "圆的面积为:" << t.area();
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
//	out <<"圆柱体的表面积:"<<t.area();
//	out << "	圆柱体的体积:" << t.volume();
//	return out;
//}
//int main() {
//	Cylinder a(1, 1, 1, 1);
//	cout << a << endl;
//	return 0;
//}