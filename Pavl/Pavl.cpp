#include <iostream>
#include <math.h>
#include <float.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Задача 2.5. Вычисление суммы ряда.
//Написать программу вычисления значения функции Ch x (гиперболический косинус)
//с помощью бесконечного ряда Тейлора с точностью epsilon по формуле
//y = 1 + x^2/2! + ... + x^2n/2n! + ...
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	const int MaxIter = 500;//максимально допустимое количество итераций
	double x, eps;
	cout << "\nEnter a argument and precision: " << endl;
	cin >> x >> eps;
	double ch = 1, y = ch;//first term of series and initial value of sum
	int n = 0;
	for (n; fabs(ch) > eps && n < MaxIter; n++) {
		ch *= x * x / ((2 * n + 1) * (2 * n + 2));//another member of the series
		y += ch;//adding series member to the sum
	}
	if (n < MaxIter) {
		cout << "function value: " << y << " for x = " << x << endl;
		cout << " calculated after " << n << " iterations " << endl;
		cout << " calculated with library math.h function cosh(x) = " << cosh(x) << endl;
	}
	else cout << "\n The series diverges!" << endl;
	return 0;
}



