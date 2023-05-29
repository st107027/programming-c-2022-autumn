#include<iostream>
#include<cmath>

struct Complex
{
private:
	Complex AbsArg(double abs, double arg) const
	{
		return Complex(abs * cos(arg), abs * sin(arg));
	}
	double re;
	double im;
public:
	Complex(double re, double im)
		:re(re), im(im) {}
	Complex(const Complex& c)
		:re(c.re), im(c.im) {}
	~Complex() {};

	double GetRe() const
	{
		return re;
	}

	double GetIm() const 
	{
		return im; 
	}

	Complex conj()
	{
		return Complex(re, -im);
	}

	double arg() const
	{
		return atan2(re, im);
	}

	double abs() const
	{
		return (sqrt(re * re + im * im));
	}

	Complex operator+(double d)
	{
		return (re + d, im);
	}

	Complex operator-(double d)
	{
		return (re - d, im);
	}

	Complex operator/(double d)
	{
		if (d == 0)
		{
			return 0;

		}
		else
		{
			return (re / d, im);
		}
	}

	Complex operator*(double d)
	{
		return (re * d, im);
	}

	friend Complex operator+(double d, Complex c)
	{
		return(c.re + d, c.im);
	}

	friend Complex operator-(double d, Complex c)
	{
		return(c.re - d, c.im);
	}

	friend Complex operator/(double d, Complex c)
	{
		if (c.re == 0)
		{
			return 0;
		}
		else
		{
			return(d / c.re, c.im);
		}
	}

	friend Complex operator*(double d, Complex c)
	{
		return(c.re * d, c.im);
	}

	Complex operator+(Complex c)
	{
		return (re + c.re, im + c.im);
	}

	Complex operator-(Complex c)
	{
		return (re - c.re, im - c.im);
	}

	Complex operator*(Complex c)
	{
		return AbsArg(abs() * c.abs(), arg() + c.arg());
	}

	Complex operator/(Complex c)
	{
		return 0;
	}
	void Print(const Complex c)
	{
		std::cout << c.GetRe() << "+" << c.GetIm() << "i" << std::endl;
	}

};

int main()
{

	return 0;
}