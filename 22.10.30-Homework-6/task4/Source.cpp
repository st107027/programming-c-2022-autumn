#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int l = 0;

	scanf_s("%d%d%d%d%d", &n, &a, &b, &c, &d);

	int* arr = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < (b - a + 1) / 2; ++i)
	{
		l = arr[i + a - 1];
		arr[i + a - 1] = arr[b - 1 - i];
		arr[b - 1 - i] = l;
	}

	for (int i = 0; i < (d - c + 1) / 2; ++i)
	{
		l = arr[i + c - 1];
		arr[i + c - 1] = arr[d - 1 - i];
		arr[d - 1 - i] = l;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << arr[i] << " ";
	}

	delete[]arr;

	return EXIT_SUCCESS;
}