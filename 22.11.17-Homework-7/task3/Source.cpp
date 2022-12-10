#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	int** a = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[n] {0};
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			scanf_s("%d", &a[n - j][n - i]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;

	return EXIT_SUCCESS;
}