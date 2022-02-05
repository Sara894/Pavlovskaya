#include <iostream>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Task 1. Variant 11. 
//Calculate and display on the screen in the form of a table the values 
//of the function in the interval  from Xbegin to Xend in increments of 1 
//The function F must take a real value if the expression (Ac and Bc) MOD2 Sc is not zero,
//and an integer value otherwise.
//The integer parts of the values a,b,c are denoted by Ac, Vc, Sc.
//The operations And and MOD2 (addition modulo 2) are bitwise.
//Enter the values a,b,c, Xbegin,Xend, dX from the keyboard.
using namespace std;

int main()
{
	double x,a, b, c;
	cout << "Enter a,b,c : ";
	cin >> a >> b >> c;
	double Xbegin, Xend, dX;
	cout << "Enter Xbegin, Xend, dX : ";
	cin >> Xbegin >> Xend >> dX;
	x = Xbegin;
	        printf("--------------------------------------\n");
	        printf("|        X        |         F        |\n");
	        printf("--------------------------------------\n");
	while (x <= Xend){
		int t = ((int)a & (int)b) ^ (int)c;
		double F;
		if (x < 1 && c != 0) { F = (a * x * x) + (b / c); }
		else if (x > 1.5 && c == 0) { F = (x - a) / (x - c) * (x - c); }
		else { F = (x * x) / (c * c); }
		if (t == 0)
			printf("|%9.21f    |%9d         |\n", x, static_cast<int>(F));
		else
			printf("|%9.21f    |%9.21f      |\n", x, F);
		x += dX;
	}
	return 0;
}



