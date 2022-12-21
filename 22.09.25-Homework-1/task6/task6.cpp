#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cout << "Enter number - ";
	std::cin >> n;

	std::cout << "Nearest even number - " << (n / 2) * 2 + 2 << std::endl;

	return EXIT_SUCCESS;
}