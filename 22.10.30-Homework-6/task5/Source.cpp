#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int x = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);

		k = (a[i] < a[k] ? i : k);
	}

	for (int i = k; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	for (int i = 0; i < k; i++)
	{
		std::cout << a[i] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}