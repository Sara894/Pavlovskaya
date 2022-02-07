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
	const int n = 5;
	int a[n] = { -1,-1,-1,-1,-1};
	int i, imax, imin, count;
	for (i = imax = imin = 0; i < n; i++) {
		if (a[i] > a[imax]) imax = i;
		if (a[i] < a[imin]) imin = i;
	}
	cout << "\n\t max = " << a[imax] << " min = " << a[imin];//debugging
	int ibeg = imax < imin ? imax : imin;
	int iend = imax < imin ? imin : imax;
	cout << "\n\t ibeg= " << ibeg << " iend= " << iend;
	for (count = 0, i = ibeg + 1; i < iend; i++) {
		if (a[i] > 0) count++;
	}
	cout << "Number of positive: " << count << endl;
	return 0;
}
