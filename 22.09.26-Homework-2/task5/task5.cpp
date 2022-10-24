#include <iostream>

int main(int arg, char* argv[])
{
	int k = 0;
	int x = 0;

	std::cin >> k;

	if (x % 4 == 0)
	{
		std::cout << "YES";
	}
	else if (x == 1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}
