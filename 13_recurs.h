#include "myoptions.h"

void recurs_task1(int n) {
	if (n > 1) {
		recurs_task1(n - 1);
	}

	cout << n << " ";
}

void recurs_task2(int a, int b) {
	if (a < b) {
		recurs_task2(a, b - 1);
	}
	else if (a > b) {
		recurs_task2(a, b + 1);
	}

	cout << b << " ";
}

bool recurs_task3(int x)
{
	return (x != 0) && !(x & (x - 1));
}

int recurs_task4(int num)
{
	if (num < 10) {
		return num;
	}
	else {
		return (num % 10) + recurs_task4(num / 10);
	}
}

void recurs_task5(int num) {
	if (num == 0) return;
	cout << num % 10 << " ";
	recurs_task5(num / 10);
}

void recurs_task6(int num) {
	if (num == 0) return;
	recurs_task6(num / 10);
	cout << num % 10 << " ";
}

int recurs_task7(int number, int step = 0)
{
	if (number <= 10) return step * 10 + number;
	return recurs_task7(number / 10, step * 10 + number % 10);
}

long long recurs_task9(int x) {
	if (x == 0 || x == 1 || x == 2) return 1;
	return recurs_task9(x - 1) + recurs_task9(x - 2);
}

int recurs_task10(int x, int s) {
	return x * recurs_task10(x, s);
}


int main() {
	recurs_task1(15);
	cout << endl;

	recurs_task2(22, 11);
	cout << endl;

	cout << (recurs_task3(9) ? "YES" : "NO") << endl;

	cout << recurs_task4(179) << endl;

	recurs_task5(173);
	cout << endl;

	recurs_task6(467);
	cout << endl;

	cout << recurs_task7(145) << endl;

	cout << recurs_task9(27) << endl;

	cout << recurs_task10(3, 5);

	Sleep(INFINITE);
}