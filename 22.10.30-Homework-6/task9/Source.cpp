#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int ma = 0;
	int in = 0;
	int im = 0;
	int mas = 0;
	int su = 0;

	scanf_s("%d", &n);

	int* a = new int[n] {0};

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	while (in < n)
	{
		for (int i = 0; i < n - in; ++i)
		{
			su += a[i + in];

			if (ma < a[i + in] * (i + 1) && a[i + in] * (i + 1) > su)
			{
				ma = a[i + in] * (i + 1);
				im = i + in;
			}
			else if (ma < su)
			{
				ma = su;
				im = i + in;
			}
		}
		in = im + 1;
		mas += ma;
		ma = 0;
		su = 0;
	}

	std::cout << mas;

	delete[]a;

	return EXIT_SUCCESS;
}