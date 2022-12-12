#include<iostream>

std::string k(int n, int i)
{
	if (i * i > n)
	{
		return "prime";
	}

	else if (n % i == 0)
	{
		return "composite";
	}

	return k(n, ++i);
}

int main(int argc, char* argv[])
{
	int a = 0;

	std::cin >> a;

	std::cout << k(a, 2);

	return EXIT_SUCCESS;
}