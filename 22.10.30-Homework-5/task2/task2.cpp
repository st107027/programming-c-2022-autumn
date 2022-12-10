#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int l = 0;
	int r = 0;
	int max = -1001;
	int max1 = 0;

	std::cin >> n;

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	std::cin >> l >> r;
	
	for (int i = l-1; i < r; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			max1 = i;
		}
	}
	
	std::cout << max << " " << max1 + 1;

	return EXIT_SUCCESS;
}