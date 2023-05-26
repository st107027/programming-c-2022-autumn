#include <iostream>
using namespace std;

int main()
{
	const int y1 = 1;

	int y2[4]{ 1,-1,-5,5 };
	int y3[6]{ 1,5,25,-1,-5,-25 };
	int y4[4]{ 1,7,-1,-7 };
	
	for (int i = 0; i < 4; ++i)
	{
		int k = 0;
		int j = 0;
		int c = 0;
		for (int a1 = 0; a1 < 6; ++a1)
		{
			for (int a2 = 0; a2 < 4; ++a2) 
			{
				if ((y3[a1] % 3) == (y4[a2] % 3))
				{
					k = y1 * 1 / 2 - y2[i] * 1 / 2 + (y4[a2] - y3[a1]) * 1 / 6;
					j = -y1 + y2[i] * 1 / 2 + y3[a1] * 1 / 2;
					c = -y1 * 1 / 2 + y2[i] - (2 * y3[a1] + y4[a2]) / 6;

					cout << y2[i] << " " << y3[a1] << " " << y4[a2] << " | " << k << "*x^3 + " << j << "*x^2 + " << c << "*x +" << y1 << endl;
				}
			}
		}
	}

	return 0;
}