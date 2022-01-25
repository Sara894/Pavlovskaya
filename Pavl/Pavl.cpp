﻿#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 1. Линейные программы.
//Задания. Напишите программу для расчета по двум формулам
//значения должны совпадать
//z1 = sin2a + sin5a - sin3a / cosa - cos3a + cos5a
//z2 = tg 3a
//тут ужно заметить что тригонометрические функции math.h работают с радианами,а не с градусами
//юзеру будет удобнее вводить градусы, поэтому принимаем данные в градусах
//а потом,для удобной работы переводим их в радианы

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	float x, y;
	cout << " Введите углы x y a в градусах через пробел: " << endl;
	cin >> x >> y;
	//переводим размерность величины а из градусов в радианы
	x *= M_PI / 180;
	y *= M_PI / 180;
	float z1 = pow(cos(x),4) + pow(sin(y),2) + 0.25*pow(sin(2 * x),2) - 1;
	float z2 = sin(y+x)*sin(y-x);
	cout << " Выражение z1 равно " << z1 << ";" << endl;
	cout << " выражение z2 равно " << z2 << endl;
	cout << " при x, равном " << (x / M_PI) * 180 << " градусам" << endl;
	cout << " при y, равном " << (y / M_PI) * 180 << " градусам" << endl;
	return 0;
}



