#include <iostream>

int main(int argc, char* argv[])
{
	int h1 = 0;
	int m1 = 0;
	int s1 = 0;
	int h2 = 0;
	int m2 = 0;
	int s2 = 0;

	std::cout << "Enter early time (hh:mm:ss)" << std::endl;
	std::cout << "Hours(<24) - ";
	std::cin >> h1;
	std::cout << "Minutes(<60) - ";
	std::cin >> m1;
	std::cout << "Seconds(<60) - ";
	std::cin >> s1;

	std::cout << "Enter late time (hh:mm:ss) - " << std::endl;
	std::cout << "Hours(<24) - ";
	std::cin >> h2;
	std::cout << "Minutes(<60) - ";
	std::cin >> m2;
	std::cout << "Seconds(<60) - ";
	std::cin >> s2;

	std::cout << "Difference in time in secondsS - " << 3600 * (h2 - h1) + 60 * (m2 - m1) + (s2 - s1) << std::endl;

	return EXIT_SUCCESS;
}