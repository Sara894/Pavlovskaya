#include <iostream>
#include <math.h>
#define PI 3.14159265
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 1. Линейные программы.
//Задания. Напишите программу для расчета по двум формулам
//значения должны совпадать
//z1 = 2 sin^2(3p - 2a)cos^2(5p + 2a)
//z2 = 1/4 - 1/4sin(5/2p - 8a)

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	float a;
	cout << " Введите угол a: " << endl;
	cin >> a;
	float z1 = 2 * sin(a);
	return 0;
}



