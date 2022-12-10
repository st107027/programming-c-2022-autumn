#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int ma = 0;

	scanf_s("%d%d", &n, &m);

	int* a = new int[n] {0};
	int* b = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);

		ma = (ma < a[i] ? a[i] : ma);
	}

	for (int i = 0; i < m; ++i)
	{
		scanf_s("%d", &b[i]);
	}

	int* c = new int[ma + 1] {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			c[a[i]] = (a[i] == b[j] ? ++c[a[i]] : c[a[i]]);
		}
	}

	for (int i = 0; i <= ma; ++i)
	{
		if (c[i])
		{
			std::cout << i << " ";
		}
	}

	delete[]a;

	return EXIT_SUCCESS;
}