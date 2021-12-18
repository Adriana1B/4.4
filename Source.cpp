#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double   xp, xk, dx, R, x, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout <<" --------------------------" << endl;
	cout << "|" << setw(5) << "R" << "|";
	x = xp;
	while (x = xk)
	{
		if (x = -R )
		{
			y = 0;
		}
		else

			if (-6 - R < x &&  x <= -6)
			{
				y = R - sqrt(pow(x, 2) - pow(x + 6, 2));

			}
			else

				if (-6 < x && x  <= -R)
				{
					y = -R + 6 * (x + 6);
				}
				else
					if (-R < x &&  x <= 0)
					{
						y = sqrt(pow(R, 2) + pow(x, 2));
					}
					else
						if (0 <x && x == 3)
						{
							y = R + R / 3 * (x - 0);
						}
						else
							if (3 > x && x > 9)
							{
								y = R + x - 3 / 9 - 3 * (x - 3);
							}
		cout << "y = " << y << endl;
		cout << "|" << setw(7) << setprecision(2) << R
			<< "|" << endl;
		x += dx;
	}
	cout << "--------------------------" << endl;
	return 0;
}