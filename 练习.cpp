#include <iostream> 
using namespace std;
class Point
{
public:
	Point(double x = 0, double y = 0);      //构造函数
		void setPoint(double, double);                  //设置坐标值
		double getX() const { return x; }              //读 x 坐标
		double getY() const { return y; }              //读 y 坐标
		friend ostream& operator<<(ostream&, const Point&);//重载运算符“<<” 
protected:           //受保护成员 
	double x, y;
};


//Point 的构造函数 
Point::Point(double a, double b)

{
	x = a;
	y = b;
}
//设置 x 和 y 的坐标值 
void Point::setPoint(double a, double b)
{
	x = a;
	y = b;
}

ostream& operator<<(ostream& output, const Point& p)
{
	output << "[" << p.x << "," << p.y << "]" << endl;
	return output;
}

class Circle :public Point   //circle 是 Point 类的公用派生类
{
public:
	Circle(double x = 0, double y = 0, double r = 0);  //构造函数
		void setRadius(double);                  //设置半径值径值
		double area() const;                   //计算圆面积
		double getRadius() const;
		friend ostream& operator<<(ostream&, const Circle&);//重载运算符“<<” 
protected:
	double radius;
};

//定义构造函数，对圆心坐标和半径初始化 
Circle::Circle(double a, double b, double r) :Point(a, b), radius(r) { }

//设置半径值 
void Circle::setRadius(double r)
{
	radius = r;
}

//读取半径值 
double Circle::getRadius() const
{
	return radius;
}

//计算圆面积 
double Circle::area() const
{
	return 3.14159 * radius * radius;
}

//重载运算符“<<”，使之按规定的形式输出圆的信息 
ostream& operator<<(ostream& output, const Circle& c)
{
	output << "Center=[" << c.x << ", " << c.y << "], r = "<<c.radius<<", area = "<<c.area( )<<endl; 
		return output;
}

class Cylinder :public Circle
{
public:
	Cylinder(double x = 0, double y = 0, double r = 0, double
		h = 0);//构造函数 
	void setHeight(double);                      //设置圆柱高
		double getHeight() const;                    //读取圆柱高
		double area() const;                         //计算圆柱表面积
		double volume() const;                       //计算圆柱体积
		friend ostream& operator<<(ostream&, const Cylinder&);//重载运算符“<<” 
protected:
	double height;                               //圆柱高
};

//定义构造函数 
Cylinder::Cylinder(double a, double b, double r, double
	h) :Circle(a, b, r), height(h) {}

//设置圆柱高 
void Cylinder::setHeight(double h)
{
	height = h;
}

//读取圆柱高 
double Cylinder::getHeight() const
{
	return height;
}

//计算圆柱表面积 
double Cylinder::area() const
{
	return 2 * Circle::area() + 2 * 3.14159 * radius * height;
}

//计算圆柱体积 
double Cylinder::volume() const
{
	return Circle::area() * height;
}

//重载运算符“<<” 
ostream& operator<<(ostream& output, const Cylinder&
	cy)
{
	output << "Center=[" << cy.x << "," << cy.y << "], r = "<<cy.radius<<", h = "<<cy.height << "\narea=" << cy.area() << ", volume = "<<cy.volume( )<<endl; 
		return output;
}

int main()
{
	//静态多态性 
	Cylinder cy1(3.5, 6.4, 5.2, 10);
	cout << cy1 << endl;
	Point* p = &cy1;
	cout << "用指向点的指针输出：" << endl;
	cout << (*p);
	Circle* c = &cy1;
	cout << "用指向圆的指针输出：" << endl;
	cout << (*c);
	Cylinder* cy = &cy1;
	cout << "用指向圆柱的指针输出：" << endl;
	cout << (*cy) << endl;

	//静态多态性 
	cout << "使用引用：" << endl;
	Point& pRef = cy1;
	cout << "用点的引用输出：" << endl;
	cout << pRef << endl;
	Circle& cRef = cy1;
	cout << "用圆的引用输出：" << endl;
	cout << cRef << endl;
	Cylinder& cyRef = cy1;
	cout << "用圆柱的引用输出：" << endl;
	cout << cyRef << endl;

	//静态多态性 
	Circle* c = &cy1;
	cout << "关于面积：" << endl;
	cout << "用指向圆的指针输出：" << endl;
	cout << c->area() << endl;
	Cylinder* cy = &cy1;
	cout << "用指向圆柱的指针输出：" << endl;
	cout << cy->area() << endl << endl;
	return 0;
}