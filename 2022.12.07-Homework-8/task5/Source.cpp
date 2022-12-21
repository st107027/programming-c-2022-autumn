#include <iostream>

int fun(int st, int en)
{
	if (st == en)
	{
		return 1;
	}

	else if (st > en)
	{
		return 0;
	}

	else
	{
		return fun(st + 3, en) + fun(st + 5, en);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (fun(1, n))
	{
		std::cout << "YES";
	}

	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}