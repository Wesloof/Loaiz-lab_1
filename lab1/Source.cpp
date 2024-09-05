#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	size_t n;
	cin >> n;
	int* a = new int[n];
	
	for (int i = 0; i < n; i++) { // 2 zadanie
		a[i] = rand();
		cout << "Элемент №" << i + 1 << " " << a[i] << "\n";
	}

	//cout << "minimum = " << min;
	//cout << "\nmaximum = " << max;
}