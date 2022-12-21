#include <iostream>

int** buf(int n)
{
	int** res = new int* [n];

	for (int i = 0; i < n; ++i)
	{
		res[i] = new int[2] {0};

		std::cin >> res[i][0] >> res[i][1];
	}

	return res;
}

void del(int** arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int chat(int** arr, int n, int cnt, int num)
{
	if (num == -1)
	{
		return cnt;
	}

	for (int i = 0; i <= n; ++i)
	{
		if (i == n)
		{
			num = -1;
			break;
		}

		if (arr[i][1] == num)
		{
			num = arr[i][0];
			break;
		}
	}

	return chat(arr, n, ++cnt, num);
}

int main(int argc, char* argv[])
{
	int n = 0;
	int num = 0;

	std::cin >> n;

	int** a = buf(n);

	std::cin >> num;

	std::cout << chat(a, n, 0, num);

	del(a, n);

	return EXIT_SUCCESS;
}