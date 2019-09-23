// ClassWorkU.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ClassWork.h"

using namespace std;

int main()
{
	double a = 0, b = 0, c = 0, xBegin = 0, xEnd = 0, xWork = 0;

	cout << "Input A: " << endl;
	cin >> a;
	cout << "Input B: " << endl;
	cin >> b;
	cout << "Input C: " << endl;
	cin >> c;
	cout << "Input X_Begin: " << endl;
	cin >> xBegin;
	cout << "Input X_Work: " << endl;
	cin >> xWork;
	cout << "Input X_End: " << endl;
	cin >> xEnd;

	if (xWork == 0) return -1;

	FunctionForZ(xBegin, xEnd, xWork, a, b, c);
	return 0;
}
