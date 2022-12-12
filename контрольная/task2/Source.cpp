#include<iostream>

int* f(int n, int m, int* array)
{
	if (n * 2 >= m)
	{
		return array;
	}

	else
	{
		int c = array[n];
		array[n] = array[m - n];
		array[m - n] = c;

		return f(++n, m, array);
	}
}
int main(int argc, char* argv[])
{
	int k = 0;

	std::cin >> k;

	int* n = new int[k] {0};

	for (int i = 0; i < k; ++i)
	{
		std::cin >> n[i];
	}

	n = f(0, k - 1, n);

	for (int i = 0; i < k; ++i)
	{
		std::cout << n[i] << " ";
	}

	delete[] n;

	return EXIT_SUCCESS;
}