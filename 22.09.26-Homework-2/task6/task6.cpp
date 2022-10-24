#include <iostream>

int main(int arg, char* argv[])
{
	int x1 = 0;
	int y1 = 0; //координаты ферзя
	int x2 = 0;
	int y2 = 0; //координаты фигуры

	std::cin >> x1 >> y1 >> x2 >> y2;

	if ((x1 == x2) || (y1 == y2) || (x1 - x2 == y1 - y2) || (x1 - x2 = y2 - y1))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return EXIT_SUCCESS;
}
