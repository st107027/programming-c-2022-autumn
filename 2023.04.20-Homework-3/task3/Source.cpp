#include<iostream>
#include<cmath>

struct Rectangle
{
private:
	int a;
	int b;
public:
	Rectangle() {}
	Rectangle(const int a, const int b) : a(a), b(b) {}
	Rectangle(const Rectangle& re) : a(re.a), b(re.b) {}

	~Rectangle() {}

	int getAreaRS() const
	{
		return a * b;
	}
};

struct Triangle
{
private:
	int a;
	int b;
	float corner;
public:
	Triangle() {}
	Triangle(const int a, const int b, const float corner) : a(a), b(b), corner(corner) {}
	Triangle(Triangle& tr) :a(tr.a), b(tr.b), corner(tr.corner) {}

	float getAreaTr() const
	{
		return 0.5 * a * b * sin(corner);
	}
};

struct Square :public Rectangle
{
private:
	int side;
public:
	Square() {}
	Square(int a) : Rectangle(a,a) {}
	Square(const Square& sq) : Rectangle(sq) {}

	~Square() {}
};

struct Circle
{
private:
	int r;
public:
	Circle() {}
	Circle(const int r) :r(r) {}
	Circle(const Circle& cr) :r(cr.r) {}

	~Circle() {}

	float getAreaCr() const
	{
		return (r * r * 3, 14);
	}
};

int main()
{
	Rectangle rec(5, 6);

	std::cout << rec.getAreaRS() << std::endl;

	Triangle abc(4, 9, 1.046);

	std::cout << abc.getAreaTr() << std::endl;

	Circle sir(5);

	std::cout << sir.getAreaCr() << std::endl;

	Square abcd(5);

	std::cout << abcd.getAreaRS() << std::endl;

	return 0;
}