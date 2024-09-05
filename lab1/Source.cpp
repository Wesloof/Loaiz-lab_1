#include <iostream>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Russian");
	int a[5][5];
	int sum = 0;

	for (int i = 0; i < 5; i++) { 
		for (int j = 0; j < 5; j++){
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 5; i++) { // 2 sum strok
		for (int j = 0; j < 5; j++) {
			sum = sum + a[i][j];
		}
		cout << "Сумма строки " << i + 1 << " " << sum << endl;
		sum = 0;
	}
	for (int i = 0; i < 5; i++) { // 2 sum strok
		for (int j = 0; j < 5; j++) {
			sum = sum + a[j][i];
		}
		cout << "Сумма столбца " << i + 1 << " " << sum << endl;
		sum = 0;
	}
}