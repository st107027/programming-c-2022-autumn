#include <iostream>

int phib(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}

	else
	{
		return phib(n - 1) + phib(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	std::cout << phib(n);

	return EXIT_SUCCESS;
}