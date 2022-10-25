#include <iostream>
int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;

    std::cin >> a;
    while (a != 0)
    {
        if ((a < 0) && (a % 2 != 0))
        {
            b = b + 1;
        }
        std::cin >> a;
    }

    std::cout << b;

    return EXIT_SUCCESS;
}