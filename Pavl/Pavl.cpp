#include <iostream>
#include <float.h>
#include <math.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Workshop 3. One-dimensional arrays and pointers.
//Task 3.1. Number of elements between minimum and maximum
//Write a program that, for an integer array of 10 elements, determines 
//how many positive elements are located between its maximum and minimum elements.  ll

using namespace std;

int main()
{
	const int n = 10;
	int a[n];
	int i, imax, imin, kol;
	cout << "Enter " << n << "integer numbers: " << endl;
	for (i = 0; i < n; i++) cin >> a[i];
	for (i = 0; i < n; i++) cout << a[i] << " ";
	for (i = imax = imin; i < n; i++) {
		if (a[i] < a[imin]) imin = i;
		if (a[i] > a[imax]) imax = i;
	}
	int d = 0;
	if (imax < imin) d = 1;
	else if (imax > imin) d = -1;
	for (kol = 0, i = imax + d; i != imin; i += d) if (a[i] > 0) kol++;
	cout << "\n Number of positive numbers: " << kol << endl;
	return 0;
}
 


