﻿#include <iostream>
#include <windows.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 1. Линейные программы.
//Задача 1.1. Расчет по формуле
//Написать программу,которая переводит температуру в градусах по Фаренгейту 
//в градусы Цельсия по формуле:
//C = 5/9(F-32)
//где С - температура по Цельсию, а F - по Фаренгейту.
using namespace std;

char* Rus(const char* text);
int main()
{
    float fahr, cels;
    cout << endl << Rus(" Введите температуру по Фаренгейту") << endl;
    cin >> fahr;
    cels = 5 / 9 * (fahr - 32);
    cout << Rus(" По Фаренгейту: ") << fahr << Rus(", в градусах Цельсия: ")
        << cels << endl;
    return 0;
}

char bufRus[256];
char* Rus(const char* text) {
    CharTo0em(text, bufRus);
    return bufRus; 
}

