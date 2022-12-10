#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int in = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &s);

	in = (s < 0 ? (-1 * s % n) : (n - s % n));

	for (int i = 0; i < n; i++)
	{
		std::cout << a[(i + in) % n] << " ";
	}

	delete[]a;

	return EXIT_SUCCESS;
}