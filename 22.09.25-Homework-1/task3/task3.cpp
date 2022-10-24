#include <iostream>
int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cout << "Enter the number of students - ";
	std::cin >> n;

	std::cout << "Enter the number of apples - ";
	std::cin >> k;

	std::cout << "Number of aplles in the basket - " << k % n << std::endl;

	return EXIT_SUCCESS;
}