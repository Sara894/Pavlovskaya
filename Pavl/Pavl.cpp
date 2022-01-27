#include <iostream>
#include <stdio.h>
#include <conio.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Задача 2.3. Клавиши курсора.
//Написать программу, определяющую какая из курсорных клавиш была нажата

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");
	int key;
	printf("\n Нажмите одну из курсорных клавиш: \n");
	key = getch(); key = getch();
	cout << "key: " << key << endl;
	switch (key) {
	case 77: case 75: case 72: case 80: printf("стрелки \n"); break;
	default: printf("не стрелка \n"); break;
	}
	return 0;
}



