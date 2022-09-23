#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;

		std::cout << "Enter a number, less then 10000 - ";
		std::cin >> n;

		std::cout << "The next number for the number " << n << " is " << n + 1 << "." << std::endl;
		std::cout << "The previous number for the number " << n << " is " << n - 1 << "." << std::endl;

		return EXIT_SUCCESS;
}