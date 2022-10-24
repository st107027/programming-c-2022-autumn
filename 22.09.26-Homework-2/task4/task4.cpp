#include <iostream>

int main(int arg, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;

	if (a == 0 && b == 0)
	{
		std::cout << "INF";
	}
	else if (b % a == 0 && (b * c != a * d)) //ѕроверка, что числитель не равен знаменателю
	{
		std::cout << -1 * b / a;
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}
