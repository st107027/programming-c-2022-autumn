#include<iostream>

int mi(int i, int* arr)
{
	if (i == 3)
	{
		return arr[3];
	}

	if (arr[i] < arr[i + 1])
	{
		arr[i + 1] = arr[i];
	}

	return mi(i + 1, arr);
}

int main(int argc, char* argv[])
{
	int* a = new int[4] {0};

	for (int i = 0; i < 4; ++i)
	{
		std::cin >> a[i];
	}

	std::cout << mi(0, a);

	delete[] a;

	return EXIT_SUCCESS;
}