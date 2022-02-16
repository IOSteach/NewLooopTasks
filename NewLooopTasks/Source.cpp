#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, count;

	// Задача 1
	/*cout << "Задача 1.\nВведите число: ";
	cin >> n;
	int newN = n;
	count = 0;
	do {
		newN /= 10;
		count++;
	} while (newN);
	cout << "Длина числа " << n << " = " << count << "\n\n";*/

	// Задача 2
	/*cout << "Задача 2.\nВведите 1 число: ";
	cin >> n;
	int max = n, k = 1, maxK = 1, myN = n;
	count = 0;
	do {
		myN /= 10;
		count++;
	} while (myN);
	while (n) {
		k++;
		cout << "Введите " << k << " число: ";
		cin >> n;
		if (n > max) {
			max = n;
			maxK = k;
			myN = n;
			count = 0;
			do {
				myN /= 10;
				count++;
			} while (myN);
		}
	}
	cout << "Максимум = " << max << endl;
	cout << "Его порядковый номер = " << maxK << endl;
	cout << "Его длина = " << count << "\n\n";*/

	// Задача 3
	/*cout << "Задача 3.\nВведите число: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (i % 3 == 0 && i % 5 == 0)
			cout << "FizzBuzz\n";
		else
			if (i % 3 == 0)
				cout << "Fizz\n";
			else
				if (i % 5 == 0)
					cout << "Buzz\n";
				else
					cout << i << endl;
	cout << endl;*/

	// Задача 4
	/*cout << "Задача 4.\nВведите число: ";
	cin >> n;
	unsigned long long res = 1;
	for (int i = 2; i <= n; i++)
		res *= i;
	cout << n << "! = " << res << "\n\n";*/

	// Задача 5

	return 0;
}