#include <iostream>
#include <cstdlib> // ��� system
#include <conio.h>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	
	/*�������_1*/
	double x;
	int n,s=0;
	double y;
	
	cout << " x: ";
	cin >> x;

	cout << " n: ";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		y = pow(x, 3 * i);
		s = s + y;
		
	}
	cout << s << endl;
	
	/*�������_2*/
	double P, M, N;
	cin >> M >> N;
	for (int i = 0; i < M; i++)
	{
		P= N * M;
	}
	cout << "P=: " << P << endl;
	
	
	/*�������_3*/
	
	for (int i = 0; i < 1; i+=0.1)
	{
		cout<< tan(i) << endl;
	}


	
	_getch();
	
}