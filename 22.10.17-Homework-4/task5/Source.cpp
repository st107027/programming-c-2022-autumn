#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float c = 1;
	float cnt = 1;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		c *= i;
		cnt += (1 / c);
	}

	printf("%.5f", cnt);

	return EXIT_SUCCESS;
}