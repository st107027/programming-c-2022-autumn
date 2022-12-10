#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n + 2; ++i)
	{
		if ((a[i % n] + a[(i + 1) % n] + a[(i + 2) % n]) > ma)
		{
			ma = a[i % n] + a[(i + 1) % n] + a[(i + 2) % n];
		}
	}

	std::cout << ma;

	free(a);

	return EXIT_SUCCESS;
}