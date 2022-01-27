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
	switch (key) {
	case 77: printf("стрелка вправо \n"); break;
	case 75: printf("стрелка влево \n"); break;
	case 72: printf("стрелка вверх \n"); break;
	case 80: printf("стрелка вниз \n"); break;
	default: printf("не стрелка \n"); break;
	}
	return 0;
}



