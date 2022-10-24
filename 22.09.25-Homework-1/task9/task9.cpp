#include <iostream>
int main(int argc, char* argv[])
{
	int x = 0;
	int p2 = 0;
	int p4 = 0;

	std::cout << "Enter the number - ";
	std::cin >> x;

	p2 = x * x;
	p4 = p2 * p2;

	std::cout << "Formula value - " << p4 + p4 / x + p2 + x + 1 << std::endl;

	return EXIT_SUCCESS;
}