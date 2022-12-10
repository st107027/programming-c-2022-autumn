#include<iostream>

int main(int argc, char* argv[])
{
	long x = 0;
	float cnt = 0;

	std::cin >> x;

	for (int i = 1; i * i <= x; ++i)
	{
		if (x % i == 0)
		{
			++cnt;
		}
		if (i * i == x)
		{
			cnt -= 0.5;
		}
	}

	std::cout << cnt * 2;

	return EXIT_SUCCESS;
}