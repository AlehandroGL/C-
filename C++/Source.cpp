#include <iostream>
#include <cstdlib> // äëÿ system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	/*ÇÀÄÀÍÈÅ 1*/
	double x, y;
	double e = pow(10, -3);
	double Z;

	cin >> x >> y;


	
	Z = 7 * pow(tan(x), 2) - 0.31 * pow(x, 3) + 3.2 * pow(x, 2) - exp(x);
	
	if (abs(Z-y) <= e)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}




	


	
	_getch();
	
}