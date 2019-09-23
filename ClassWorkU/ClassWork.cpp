#include "ClassWork.h"

void FunctionForZ(double xBegin, double xEnd, double xH, double a, double b, double c)
{
	double temp = 0;
	while (xEnd >= xBegin)
	{
		temp = xBegin;
		xBegin += xH;
		if (a != 0 && c < 0)
		{
			double x = (-1) * a * temp * temp;
			Show_F(x, temp, a, b, c);
		}
		else if (a == 0 && c > 0)
		{
			double x = (a - temp) / (c * temp);
			Show_F(x, temp, a, b, c);
		}
		else 
		{
			double x = temp / c;
			Show_F(x, temp, a, b, c);
		}
		
	}	
}

void Show_F(double res, double x, double a, double b, double c)
{
	if (((int)a % (int)b & ~((int)a | (int)c)) != 0)
		cout << "x = " << setw(5) << left << x << " | " << setw(5) << left << " F = " << res << endl;
	else 
		cout  << "x = " << setw(5) << left << x << " | " << setw(5) << left << " F = " << (int)res << endl;
}
