#include <iostream>
#include <cstdlib> // для system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	
	setlocale(LC_ALL, "RUS");

		double x=2,y;// system32
		int n=5;
		float s = 0;

		for (int i = 0; i < n; i++)
		{
			y = pow(x, 2 * (n - 1));
			s = s + y;
			cout << s << endl;
		}
	
		
	
	/*ЗАДАНИЕ_3 (нема в гитхабе)*/
	
	/*for (float i = 0; i <= 1; i = i + 0.1)
	{
		cout << sin(i) << endl;
	}*/


	_getch();
	
}