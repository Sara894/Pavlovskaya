#include <iostream>
#include <float.h>
#include <math.h>
//Т.А. Павловская, Ю.А. Щупак
//С/С++ Структурное программирование. Практикум
//Write the program that, display on the screen all numbers from the array

using namespace std;

int main()
{
	const int n = 1000;
	int a[n];
	cout << "\nPlease, enter the number of elements in the array: " << endl;
	int num_elmnts;
	cin >> num_elmnts;
	if (num_elmnts > n)
		cout << "The number of elements is bigger than default size of array" << endl;
	cout << "Please, enter all the elements of the array:" << endl;
	for (int i = 0; i < num_elmnts; i++) cin >> a[i];
	for (int i = 0; i < num_elmnts; i++) cout << a[i] << " ";
	return 0;
}
