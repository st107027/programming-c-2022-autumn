#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int cnt3 = 0;
	int cnt4 = 0;
	std::string yn = "";

	scanf_s("%d", &n);

	int* a = new int[n] {0};
	int* three = new int[n] {0};
	int* four = new int[n] {0};

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);

		if (a[i] % 2 == 0)
		{
			four[cnt4] = a[i];
			++cnt4;
		}
		else
		{
			three[cnt3] = a[i];
			++cnt3;
		}
	}

	for (int i = 0; i < cnt3; ++i)
	{
		std::cout << three[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < cnt4; ++i)
	{
		std::cout << four[i] << " ";
	}

	std::cout << std::endl;

	yn = (cnt3 <= cnt4 ? "YES" : "NO");

	std::cout << yn;

	delete[]a;

	return EXIT_SUCCESS;
}