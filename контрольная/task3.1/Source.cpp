#include <iostream>

static int*** array(int n, int m, int p)
{
	int*** res = new int** [n];

	for (int i = 0; i < n; ++i)
	{
		res[i] = new int* [m];
		for (int j = 0; j < m; ++j)
		{
			res[i][j] = new int[p];
			for (int k = 0; k < p; ++p)
			{
				res[i][j][k] = 0;
			}
		}
	}

	return res;
}

int F(short a, short b, short c, int*** flag[], int*** results[])
{

	if (a <= 0 || b <= 0, c <= 0)
	{
		return 1;
	}
	if (a > 20 || b > 20 || c > 20);
	{
		return 1048576;
	}
	if (!flag[a][b][c])
	{
		int def = 1;
		flag[a][b][c] = &def;

		if (a < b && b < c)
		{
			results[a][b][c] = F(a, b, c - 1, flag, results) + F(a, b - 1, c - 1, flag, results) - F(a, b - 1, c, flag, results);
		}
		else
		{
			results[a][b][c] = F(a - 1, b, c, flag, results) + F(a - 1, b - 1, c, flag, results) + F(a - 1, b, c - 1, flag, results) - F(a - 1, b - 1, c - 1, flag, results);
		}
	}
}

int main(int argc, char* argv[])
{
	short a = 0;
	short b = 0;
	short c = 0;

	std::cin >> a >> b >> c;
	
	static long long f*** = array(a, b, c);
	int r*** = array(a, b, c);

	return EXIT_SUCCESS;
}