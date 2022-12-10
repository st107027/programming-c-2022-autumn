#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int p = 0;

	scanf_s("%d%d%d", &n, &m, &p);

	int** a = new int* [n];
	int** b = new int* [m];
	int** ans = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		a[i] = new int[m] {0};
		ans[i] = new int[p] {0};
	}

	for (int i = 0; i < m; ++i)
	{
		b[i] = new int[p] {0};
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			scanf_s("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				ans[i][j] += a[i][k] * b[k][j];
			}

			std::cout << ans[i][j] << " ";
		}

		std::cout << std::endl;
	}

	delete[] a;
	delete[] b;
	delete[] ans;

	return EXIT_SUCCESS;
}