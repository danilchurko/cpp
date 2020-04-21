#include "myoptions.h"

void say_hello() {
	cout << "Hi" << endl;
	cout << "C++ COOL" << endl;
}

void say(string name) {
	cout << "Hello, " << name << endl;
}

void sum(int a, int b) {
	int res = a + b;
	cout << "Your sum = ";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(2000);
	system("cls");
	cout << "Your sum = " << res << endl;
}

void text(int color, int x, int y, string s) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y };
	SetConsoleCursorPosition(h, position);
	SetConsoleTextAttribute(h, color);
	cout << s << endl;
}

void task1(int x, int y, int color) {
	COORD c = { x, y };
	SetConsoleCursorPosition(h, c);
	SetConsoleTextAttribute(h, color);
}

void task2(int am, string simv, int color, bool position) {
	SetConsoleTextAttribute(h, color);
	for (int i = 0; i <= am; i++)
	{
		cout << simv;
		if (position != true) {
			cout << endl;
		}
	}
}

void task3(int width = 10, int height = 5, int color = 1, int color_in = 2, string ramka = "0", string zaliv = "1", int coord_x = 0, int coord_y = 0) {
	for (int x = 0; x < height; x++) {
		COORD c = { coord_x, coord_y };
		SetConsoleCursorPosition(h, c);
		for (int y = 0; y < width; y++) {
			if (x == 0 || y == 0 || x == height - 1 || y == width - 1) {
				SetConsoleTextAttribute(h, color);
				cout << ramka;
			}
			else {
				SetConsoleTextAttribute(h, color_in);
				cout << zaliv;
			}
		}
		cout << endl;
		coord_y++;
	}
}

void task4(int a) {
	a = a * a * a;
	cout << a;
}

void task5(int a) {
	bool var = true;
	// ввести n c клавиатуры

	for (int i = 2; i < sqrt(a); i++) {
		if (a % i == 0) {
			var = false;
		}
	}

	if (var != true) {
		cout << "Ne prostoe" << endl;
	}
	else {
		cout << "Prostoe";
	}
}

void task6(int a, int b) {

	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}

	int sum = 0;
	int iter = b - a;

	for (int i = 0; i < iter - 1; i++) // почему не работатет такое условие? (int i = 0; i < (b - a) - 1; i++)
	{
		a++;
		sum += a;
	}

	cout << sum;
}

void task7(int day1, int month1, int year1, int day2, int month2, int year2) {
	if (day1 > day2) {
		day1 = day1 + day2;
		day2 = day1 - day2;
		day1 = day1 - day2;
	}
	if (month1 > month2) {
		month1 = month1 + month2;
		month2 = month1 - month2;
		month1 = month1 - month2;
	}
	if (year1 > year2) {
		year1 = year1 + year2;
		year2 = year1 - year2;
		year1 = year1 - year2;
	}

	// Считает сколько времени всего прошло
	int am_day, am_month, am_year = 0;

	am_day = day2 - day1;
	am_month = month2 - month1;
	if (month2 > month1) {
		am_year = (year2 - year1) - 1;
	}
	else {
		am_year = year2 - year1;
	}

	// Считает дни прошедших высокосных годов
	int am_yearTemp = am_year;
	for (int i = am_yearTemp; i > 0; i--)
	{
		if (am_yearTemp % 4 == 0) {
			am_day++;
		}
		am_yearTemp--;
	}

	cout << am_day << " days | " << am_month << " months | " << am_year << " years left...";
}

void task8(int ar[], int sz) {
	double sum = 0;

	for (int i = 0; i < sz; i++)
	{
		sum += ar[i];
	}

	cout << "Average: " << sum / sz << endl;
}

void task9(int ar[], int sz) {
	int max = ar[0];
	for (int i = 0; i < 5; ++i)
	{
		if (ar[i] > max)
		{
			max = ar[i];
		}
	}

	int min = ar[0];
	for (int i = 0; i < 5; ++i)
	{
		if (ar[i] < min)
		{
			min = ar[i];
		}
	}

	cout << "Max - " << max << endl;
	cout << "Min - " << min << endl;
}

void task10(int ar[], int sz) {
	for (int i = 0; i < sz / 2; i++)
	{
		ar[i] += ar[sz - i - 1];
		ar[sz - i - 1] = ar[i] - ar[sz - i - 1];
		ar[i] = ar[i] - ar[sz - i - 1];
	}
	for (int i = 0; i < sz; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

void task11(int a, int b, int c_x = 2, int c_y = 2, int width = 18, int height = 15) {

	for (int x = 0; x < height; x++) {
		COORD c = { c_x, c_y };
		SetConsoleCursorPosition(h, c);
		for (int y = 0; y < width; y++) {
			if (x == 0 || y == 0 || y == 1 || x == height - 1 || y == width - 1 || y == width - 2) {
				SetConsoleTextAttribute(h, White);
				cout << char(133);
			}
			else {
				SetConsoleTextAttribute(h, DarkGray);
				cout << char(133);
			}
		}
		cout << endl;
		c_y++;
	}

	COORD simbl = { 6, 5 };
	SetConsoleCursorPosition(h, simbl);
	SetConsoleTextAttribute(h, LightGreen);
	cout << char(a);

	COORD num = { 6, 4 };
	SetConsoleCursorPosition(h, num);
	SetConsoleTextAttribute(h, LightGreen);
	cout << b;

	COORD simbll = { 15, 13 };
	SetConsoleCursorPosition(h, simbll);
	SetConsoleTextAttribute(h, LightGreen);
	cout << char(a);

	COORD numm = { 15, 14 };
	SetConsoleCursorPosition(h, numm);
	SetConsoleTextAttribute(h, LightGreen);
	cout << b;
}

void task12(int a, int c_x = 6, int c_y = 2, int width = 17, int height = 9) {
	int rnd1 = raand(1, 15);
	int rnd2 = raand(1, 15);

	int coord_frx = raand(0, 10);
	int coord_fry = raand(0, 10);

	for (int x = 0; x < height; x++) {
		COORD c = { coord_frx, coord_fry };
		SetConsoleCursorPosition(h, c);
		for (int y = 0; y < width; y++) {
			if (x == 0 || y == 0 || y == 1 || x == height - 1 || y == width - 1 || y == width - 2) {
				SetConsoleTextAttribute(h, rnd1);
				cout << char(133);
			}
			else {
				SetConsoleTextAttribute(h, rnd2);
				cout << char(133);
			}
		}
		cout << endl;
		coord_fry++;
	}

	COORD znach = { coord_frx + 8, coord_fry - 5 };
	SetConsoleCursorPosition(h, znach);
	SetConsoleTextAttribute(h, raand(1, 15));
	cout << a;
}

void task13(double a, int znak) {

	double iter = 1;

	for (int i = 0; i < znak; i++)
	{
		iter *= 10;
	}
	if (a < 0) { a *= -1; }

	cout << round(a * iter) / iter;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	start();

	//task1(3, 5, 5); cout << "Hello" << endl;
	//task2(20, "@", 12, true);

	//task3(); //task3(10, 5, 6, 10, "t", ":", 3, 8);

	//task4(5);
	//task5(13 //145);
	//task6(6, -3);
	//task7(2, 12, 2000, 7, 2, 2020);

	//проблемма в передаче масива в функцию
	/*int ar[5] = { 5, 14, 8, 16, 5 };
	task8(ar, 5);*/

	//int ar[5] = { 9, 14, 8, 16, 5 };
	//task9(ar, 5);

	//int ar[5] = { 9, 14, 8, 16, 5 };
	//task10(ar, 5);

	/*  3 - ♥
		4 - ♦
		5 - ♣
		6 - ♠	*/
		//task11(3, 6);
		//task12(3);
		//task13(-4.6445975, 3);

	Sleep(INFINITE);
}