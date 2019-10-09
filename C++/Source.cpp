#include <iostream>
#include <cstdlib> // для system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	

	
	for (int i = 1; i <=10; i++)
	{
		for (int g = 1; g < 10; g++)
		{
			cout << g << "*" << i << "=" << g * i << endl;
		}
	}


	
	_getch();
	
}