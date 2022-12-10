#include<iostream>

int main(int argc, char* argv[])
{
	long n = 0;
	int cnt = 0;
	int c = 1;

	std::cin >> n;

	for (; n > 0;)
	{
		cnt += (n % 10) * c;
		n /= 10;
		c *= 2;
	}

	std::cout << cnt;

	return EXIT_SUCCESS;
}