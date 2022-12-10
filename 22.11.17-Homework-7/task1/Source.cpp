#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;

	scanf_s("%d%d", &n, &m);

	int** a = new int* [n];
	int* string = new int[n] {0};
	int* column = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf_s("%d", &a[i][j]);

			string[i] += a[i][j];
			column[j] += a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << string[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < m; ++i)
	{
		std::cout << column[i] << " ";
	}

	std::cout << std::endl << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << a[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;
	delete[] string;
	delete[] column;

	return EXIT_SUCCESS;
}