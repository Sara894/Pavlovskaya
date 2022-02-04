#include <iostream>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Семинар 2. Разветвляющиеся программы. Циклы.
//Task 1. Variant 11. 
//Calculate and display on the screen in the form of a table the values 
//of the function in the interval  from Xbegin to Xend in increments of 1 
using namespace std;

int main()
{
	double x,a, b, c;
	cout << "Enter x,a,b,c : ";
	cin >> x >> b >> c;
	if (x < 1 && c != 0) cout << (a * x * x) + (b / c) << endl;
	else if (x > 15 && c == 0) cout << (x - a) / (x - c) * (x - c) << endl;
	else cout << (x * x) / (c * c) << endl;
	return 0;
}



