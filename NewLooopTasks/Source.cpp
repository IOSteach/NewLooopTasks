#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, count;

	// ������ 1
	/*cout << "������ 1.\n������� �����: ";
	cin >> n;
	int newN = n;
	count = 0;
	do {
		newN /= 10;
		count++;
	} while (newN);
	cout << "����� ����� " << n << " = " << count << "\n\n";*/

	// ������ 2
	/*cout << "������ 2.\n������� 1 �����: ";
	cin >> n;
	int max = n, k = 1, maxK = 1, myN = n;
	count = 0;
	do {
		myN /= 10;
		count++;
	} while (myN);
	while (n) {
		k++;
		cout << "������� " << k << " �����: ";
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
	cout << "�������� = " << max << endl;
	cout << "��� ���������� ����� = " << maxK << endl;
	cout << "��� ����� = " << count << "\n\n";*/

	// ������ 3
	/*cout << "������ 3.\n������� �����: ";
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

	// ������ 4
	/*cout << "������ 4.\n������� �����: ";
	cin >> n;
	unsigned long long res = 1;
	for (int i = 2; i <= n; i++)
		res *= i;
	cout << n << "! = " << res << "\n\n";*/

	// ������ 5

	return 0;
}