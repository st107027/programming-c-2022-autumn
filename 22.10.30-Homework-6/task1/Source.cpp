#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << a[i] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}