#include <iostream>

using namespace std;

int main(void)
{

	int a[10] = {};
	int min = 33000;
	int max = 0;
	
	for (int i = 0; i < 10; i++) { // 2 zadanie
		a[i] = rand();
		cout << a[i] << "\n";
	}

	for (int i = 0; i < 10; i++) { // 1 zadanie
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "minimum = " << min;
	cout << "\nmaximum = " << max;
}