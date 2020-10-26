#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((-x - 2 * R <= y && y <= 0 && x <= 0 ||
			(R * R <= x * x + y * y && y <= 2 * R && x <= 2 * R && 0<=y && 0<=x)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6. * rand() / RAND_MAX - 3;
		y = 6. * rand() / RAND_MAX - 3;
		if ((-x - 2 * R <= y && y <= 0 && x <= 0 ||
			(R * R <= x * x + y * y && y <= 2 * R && x <= 2 * R && 0 <= y && 0 <= x)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}