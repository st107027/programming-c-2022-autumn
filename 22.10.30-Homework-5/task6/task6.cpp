#include<iostream>

int main(int argc, char* argv[])
{
	int b = 0;
	int n = 0;
	int ma = 0;
	int num = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &b);

		if (b * a[i] > ma)
		{
			num = i + 1;
			ma = b * a[i];
		}
	}

	std::cout << num;

	free(a);

	return EXIT_SUCCESS;
}