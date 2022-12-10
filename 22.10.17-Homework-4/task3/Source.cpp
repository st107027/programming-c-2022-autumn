#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c = 1;
	int cnt = 1;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cout << c << " ";

		if (cnt == c)
		{
			c += 1;
			cnt = 0;
		}
		++cnt;
	}

	return EXIT_SUCCESS;
}