#include <iostream>
#include <cstring>

int C(char n[], int i, int l, std::string s)
{
	if (i < l / 2)
	{
		if (n[i] != n[l - 1 - i])
		{
			std::cout << n[i];
			s = n[l - 1 - i] + s;
		}
		return C(n, ++i, l, s);
	}

	else if (i * 2 == l - 1)
	{
		std::cout << n[i];
	}

	std::cout << s;

	return 0;
}

int main(int argc, char* argv[])
{
	char str[255] = "";
	int len = 0;

	std::cin.getline(str, 255);

	len = strlen(str);

	C(str, 0, len, "");

	return EXIT_SUCCESS;
}