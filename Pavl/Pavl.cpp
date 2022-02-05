#include <iostream>
#include <float.h>
#include <math.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Task 2. Variant 2. 
//Calculate and display on the screen in the form of the table the values
//of the function specified using the Taylor series, in the interval from beginning
//to end in increments of dX with an accuracy of E.
//Provide the table with a header.
//Each row of the table must contain the value of the argument, value of the function 
//and the number of summed members of the series.
//e^(-x) = sum((-1)^n*x^n/n!)
using namespace std;

int main()
{
	double Xbegin, Xend, dX;
	cout << "Enter the values of the following variables separated by a space: Xbegin,Xend,dX\n";
	cin >> Xbegin >> Xend >> dX;
	double E = DBL_EPSILON;
	
	
	cout << "|      X       |        F       |      with exp()    |  n  |\n";
	for (Xbegin; Xbegin <= Xend; Xbegin += dX)
	{
		double sum = 0;//1 is first summand of the sum of the series
		double term = 1;
		int n = 0;
		while (fabs(term) > E) {
			sum += term;
			term *= (-1) * Xbegin / (n + 1);
			n++;
		}
		cout << "|    " << Xbegin << "   |     " << sum << "  |      "<<exp(-Xbegin)<<"    |  " << n << "  |" << endl;
	}
	return 0;
}



