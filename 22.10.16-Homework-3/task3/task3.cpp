#include <iostream>
int main(int argc, char* argv[])
{
    int n = 0;
    int a = 1;
    int b = 1;
    std::cin >> n;

    do
    {
        do
        {
            std::cout << b << " ";
            b = b + 1;
        } while (b != n + a);

        std::cout << std::endl;

        a = a + 1;
        b = a;
    } while (b != n + 1);

    return EXIT_SUCCESS;
}