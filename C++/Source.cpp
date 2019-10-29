#include <iostream>
#include <cstdlib> // для system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	/*1 задание*/
	double x, f, u, S = 0;
	int i, k = 0;

	cin >> x;

	do
	{
		k++;
		for (int i = 0; i <= (2 * k); i++)
		{
			f *= i;
			u = (pow(-1, k - 1) * pow(x, 3 * k - 1)) / ((2 * k) * f);
			S += u;
		}
	} while (fabs(u) > 1e-4);
	
		cout << S <<endl;
		cout << k << endl;
	



	/* zadanie 2*/
	double result;
	double x, k,F;
	int n;

	cin >> x;
	cin >> k;
	cin >> n;
	do {
		for (int i = 0; i < n; i++)
		{
			F = (5 * log(2 * k * x)) / atan(2 * x) + pow(k, 2);
			result += F;
		}



	} while (i <= n);
	cout << F << endl;
	
	
	
	/*3 задание*/
	double value;
	double value_result;
	cin >> value;

	do
	{
		value_result=
	} while (true);
	cout << value_result;
	_getch();
	
}