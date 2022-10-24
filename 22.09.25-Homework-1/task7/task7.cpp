#include <iostream>
int main(int argc, char* argv[])
{
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;

	std::cout << "Enter the number 'a' - ";
	std::cin >> x1;

	std::cout << "Enter the number 'b' - ";
	std::cin >> x2;

	x3 = x1;
	x1 = x2;
	x2 = x3;

	std::cout << "Number 'a' - " << x1 << " Number 'b' - " << x2 << std::endl;

	return EXIT_SUCCESS;
}