#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cout << "Enter a three-digit number - ";
	std::cin >> n;

	std::cout << "Sum of digits - " << n / 100 + n % 100 / 10 + n % 100 % 10 << std::endl;

	return EXIT_SUCCESS;
}