#include "myoptions.h"

void condit_p1_task1() 
{    // #1 Parity of number
	window();
	cout << "Write your number: ";
	int a;
	cin >> a;

	if (a % 2 == 0) {
		cout << "Chetnoe" << endl;
	}
	else {
		cout << "Nechetnoe" << endl;
	}
	Sleep(INFINITE);
	system("pause");
}

void condit_p1_task2() 
{    // #2 The smallest
	window();

	cout << "Write your numbers: " << endl;
	int a;
	int b;
	int c;

	cin >> a;
	cin >> b;
	cin >> c;

	if (a < b && a < c) {
		cout << "1 the smallest" << endl;
	}
	else if (b < a && b < c) {
		cout << "2 the smallest" << endl;
	}
	else {
		cout << "3 the smallest" << endl;
	}
	Sleep(INFINITE);
	system("pause");
}

void condit_p1_task3() 
{    // #3 +, - or =0?
	window();
	cout << "Write your number: ";

	int a;
	cin >> a;

	if (a == 0) {
		cout << "=0" << endl;
	}
	else if (a < 0) {
		cout << "-" << endl;
	}
	else {
		cout << "+" << endl;
	}
	Sleep(2000);
	condit_p1_task3();
	system("pause");
}

void condit_p1_task4() 
{    // #4 calc.exe?
	window();

	cout << "1 num - ";
	double num1;
	cin >> num1;

	cout << "2 num - ";
	double num2;
	cin >> num2;
	cout << endl;

	cout << "+ -> 1" << endl;
	cout << "- -> 2" << endl;
	cout << "* -> 3" << endl;
	cout << "/ -> 4" << endl;

	int a;
	cin >> a;
	cout << endl;

	if (a == 1) {
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

		Sleep(3000);
		system("cls");
		condit_p1_task4();
	}
	else if (a == 2) {
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

		Sleep(3000);
		system("cls");
		condit_p1_task4();
	}
	else if (a == 3) {
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

		Sleep(3000);
		system("cls");
		condit_p1_task4();
	}
	else if (a == 4) {
		if(num1 != 0 & num2 != 0){
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		}
		else {
			cout << "You CANT!!! 1 or 2 = 0" << endl;
		}
		Sleep(3000);
		system("cls");
		condit_p1_task4();
	}
	else {
		cout << "ERROR" << endl;
		Sleep(200);
		cout << "ERROR" << endl;
		Sleep(200);
		cout << "ERROR" << endl;
		Sleep(200);
		system("cls");
		condit_p1_task4();
	}
	system("pause");
}

void condit_p1_task5()
{    // #5 symbol or leter or punct
	window();
	cout << "Write 1 sumbol: ";
	char a;
	cin >> a;

	if (isalpha(a)) {
		cout << "Leter";
	}
	else if (isalnum(a)) {
		cout << "Number";
	}
	else if (ispunct(a)) {
		cout << "Symbol";
	}
	else {
		cout << "ERROR";
	}
	Sleep(2000);
	system("cls");
	condit_p1_task5();
}

void condit_p1_task6() 
{    // #6 diaposon
	window();
	cout << "Write start & end of diaposon" << endl;
	double a;
	cin >> a;
	double b;
	cin >> b;

	if (a > b) {
		a += b;
		b = a - b;
		a = a - b;
	}
	else {}

	cout << "Write number: ";
	int n;
	cin >> n;

	if (n > a && n < b) {
		cout << "In it - Yes" << endl;
	}
	else {
		cout << "In it - No" << endl;
	}

	Sleep(2000);
	system("cls");
	condit_p1_task6();
}

void condit_p1_task7() 
{    // #7 kratno a to b
	window();
	cout << "Write number number: ";
	int a;
	cin >> a;
	cout << "Write number kratno to: ";
	int b;
	cin >> b;

	if (a < b) {
		a += b;
		b = a - b;
		a = a - b;
		if (a % b == 0) {
			cout << "Kratno " << b << " to " << a << endl;
		}
		else {
			cout << "Nekratno " << b << " to " << a << endl;
		}
	}
	else {
		if (a % b == 0) {
			cout << "Kratno" << endl;
		}
		else {
			cout << "Nekratno" << endl;
		}
	}

	Sleep(2000);
	system("cls");
	condit_p1_task7();
}

void condit_p1_task8() 
{    // #8 kratno 3, 5 and 7
	window();
	cout << "Write number number: ";
	int a;
	cin >> a;

	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0) {
			cout << "Kratno" << endl;
	}
	else {
			cout << "Nekratno" << endl;
	}

	Sleep(2000);
	system("cls");
	condit_p1_task8();
}

void condit_p1_task9() 
{    // #9 | x | =
	window();
	cout << "Write number number: ";
	int a;
	cin >> a;

	cout << "|" << a << "| = " << a << " and " << a * (-1) << endl;

	Sleep(2000);
	system("cls");
	condit_p1_task9();
}

void condit_p1_task10() 
{     //# 10 Amount of num
	int num;
	int i = 1;

	cout << "Enter number (ex. xxxx): ";
	cin >> num;
	cout << endl;

	while (num /= 10) {
		i++;
	}
	cout << i << endl;

	Sleep(2000);
	system("cls");
	condit_p1_task10();
}


void condit_p1_task11() 
{    // #11 Palindrop
	window();
	cout << "Write number number: ";
	double a;
	cin >> a;

	if (a < 99999 && a > 0) {

		int a1 = int(a) / 10000 % 10; //1
		int a2 = int(a) / 1000 % 10; //2
		int a3 = int(a) / 100 % 10; //3
		int a4 = int(a) / 10 % 10; //4
		int a5 = int(a) % 10; //5

		if (a1 == a5 && a2 == a4) {

			cout << "Palindrop" << endl;
		}
		else {
			cout << "Ne palindrop" << endl;
		}
	}
	else {
		cout << "ERROR" << endl;
	}

	Sleep(2000);
	system("cls");
	condit_p1_task11();
}

void condit_p1_task12() 
{    // #12 Pdots in rectangle
	window();
	int x1;
	int y1;
	int x2;
	int y2;
	int px;
	int py;

	cout << "Write the first dot (x,y): " << endl;
	cin >> x1;
	cin >> y1;

	cout << "Write the second dot (x,y): " << endl;
	cin >> x2;
	cin >> y2;

	cout << "Write your dot (x,y): " << endl;
	cin >> px;
	cin >> py;

	cout << endl;

	if (px >= x1 && px <= x2 && py >= y1 && py <= y2) {
		cout << "Your dot in this rectangle" << endl;
	}
	else {
		cout << "Your point isn't in this rectangle" << endl;
	}

	Sleep(4000);
	system("cls");
	condit_p1_task12();
}

void condit_p1_task13() 
{     //# 13 ternarniy operator
	int a;
	int b;
	int c;
	int d;

	int max;

	cout << "Enter a = ";
	cin >> a;
	cout << endl;

	cout << "Enter b = ";
	cin >> b;
	cout << endl;

	cout << "Enter c = ";
	cin >> c;
	cout << endl;

	cout << "Enter d = ";
	cin >> d;
	cout << endl;

	max = a > b ? (a > c ? a : c) : (a > d ? a : d);
	cout << "max = " << max << endl;
}
