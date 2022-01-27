#include <iostream>
#include <stdio.h>
#include <conio.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Задача 2.3. Таблица значений функции.
//Написать программу печати таблицы значений функции
//    t , x < 0
//y = tx, 0 <= x < 10
//    2t, x >= 10
//для аргумента, изменяющегося в заданных пределах с заданным шагом. Если 
//t>100, должны выводиться целые значения функции

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	double Xn, Xk, dX, t, y;
	cout << "Enter Xn, Xk, dX, t " << endl;
	cin >> Xn >> Xk >> dX >> t;
	cout << "--------------------" << endl;
	cout << "|      X     |      Y     |\n" << endl;
	cout << "--------------------" << endl;
	double x = Xn;
	while (x <= Xk) {
		if (x < 0) y = t;
		if (x >= 0 && x < 10) y = t * x;
		if (x >= 10) y = 2 * t;
		if (t > 100) cout << "|   " << x << "   |    " <<(int)y << "    |" << endl;
		else cout << "|   " << x << "   |    " << y << "    |" << endl;
		x += dX;
	}
	cout << "------------------------" << endl;
	return 0;
}



