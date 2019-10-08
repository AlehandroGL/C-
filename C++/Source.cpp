#include <iostream>
#include <cstdlib> // для system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	
	double x, y;
	double eps = -10;
	double Z;

	cin >> x >> y;


	if (abs(x) > 1)
	{
		Z = pow(sin(pow(x, 3)), 2);
	}
	if (abs(Z - y) < eps)
	{
		cout << pow(sin(pow(x, 3)), 2);
	}



	if (abs(x) <= 1)
	{
		Z = sqrt(6 * pow(asin(x), 2)) + 4 * pow(x, 2) + 2;
	}
	if (abs(Z - y) < eps)
	{
		cout << sqrt(6 * pow(asin(x), 2)) + 4 * pow(x, 2) + 2;
	}


	
	_getch();
	
}