#include <iostream>
#include <cstring>

int C(char n[], int i, int l)
{
	if (i < l / 2 && i * 2 != l - 2)
	{
		std::cout << n[i] << '(';
		return C(n, ++i, l);
	}

	else if (i * 2 == l - 2)
	{
		std::cout << n[i] << n[i + 1];
		return C(n, i + 2, l);

	}

	else if (i * 2 == l - 1)
	{
		std::cout << n[i];
		return C(n, ++i, l);

	}

	else if (i < l)
	{
		std::cout << ')' << n[i];
		return C(n, ++i, l);
	}

	return 0;
}

int main(int argc, char* argv[])
{
	char str[255] = "";
	int len = 0;

	std::cin.getline(str, 255);

	len = strlen(str);

	C(str, 0, len);

	return EXIT_SUCCESS;
}