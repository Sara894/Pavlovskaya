#include <iostream>
#include <stdio.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 1. Линейные программы.
//Задача 1.2. Временной интервал
//Заданы моменты начала и конца некоторого промежутка времени в часах, минутах 
//и секундах(в пределах одних суток).
//Найти продолжительность этого же промежутка 
//в тех же единицах.

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	short hour1, min1, sec1, hour2, min2, sec2, hour, min, sec;
	cout << endl << " Введите время начала интервала (час мин сек) " << endl;
	cin >> hour1 >> min1 >> sec1;
	cout << endl << " Введите время конца интервала (час мин сек) " << endl;
	cin >> hour2 >> min2 >> sec2;

	long sum_sec = (hour2 - hour1) * 3600 + (min2 - min1) * 60 + sec2 - sec1;
	hour = sum_sec / 3600;
	min = (sum_sec - hour * 3600) / 60;
	sec = sum_sec - hour * 3600 - min * 60;

	cout << "Продолжительность промежутка от " <<
		hour1 << ':' << min1 << ':' << sec1 << " до " <<
		hour2 << ':' << min2 << ':' << sec2 << endl << " равна " <<
		hour << ':' << min << ':' << sec << endl;
	return 0;
}



