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

	//cout << "minimum = " << min;
	//cout << "\nmaximum = " << max;
}