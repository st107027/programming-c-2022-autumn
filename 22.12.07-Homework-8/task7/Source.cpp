#include <iostream>

int C(char n[], int i)
{
	if (n[i + 1])
	{
		std::cout << n[i] << "*";
		return C(n, ++i);
	}

	else
	{
		std::cout << n[i];
		return 0;
	}
}

int main(int argc, char* argv[])
{
	char t[255] = "";

	std::cin.getline(t, 255);

	C(t, 0);

	return EXIT_SUCCESS;
}