#include <iostream>

int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;

	std::cout << "Enter the number - ";
	std::cin >> x1;

	std::cout << "Enter the number - ";
	std::cin >> x2;

	std::cout << "Largest number - " << ((x1 + x2) + ((x1 - x2) * (x1 - x2)) / (x1 - x2)) / 2 << std::endl;

	return EXIT_SUCCESS;
}