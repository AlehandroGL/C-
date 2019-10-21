#include <iostream>
#include <cstdlib> // для system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	/*задание 1*/
/*	double  m,u;
	double s = 0;
	int n;
	cin >> n, m;

	for (int i = 0; i <= n; i++)
	{
		u = m+i;
		cout << "Доданок i= " << i << "= " << u << endl;
		s += m;
	}
	cout << "Сумма:" << s << endl;
	
	/*Задание 2*/

	
	float i = 0;
	double x, g, f;

	
	 
	for (i=0.5; i <= 4; i+=0.1)
		
	{
		cout << "i=" << i;
		f=1 / i;
		g = pow((i / 3), 2 );
		cout << "g=" << g << endl;
		cout << "f=" << f << endl;

	}


	_getch();
	
}