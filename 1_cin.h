#include "myoptions.h"

void cin_task1()
{		// #1
	setlocale(LC_ALL, "Rus");

	double a;
	double b;
	double c;

	double m;

	cout << "������� ������ �����: ";
	cin >> a;

	cout << "������� ������ �����: ";
	cin >> b;

	cout << "������� ������ �����: ";
	cin >> c;

	m = (a + b + c) / 3;

	cout << endl;

	cout << "������� �������������� ���� ����� = " << m << endl;
}

void cin_task2()
{		// #2
	setlocale(LC_ALL, "Rus");

	int a;
	int b;
	double b1;
	double x;

	cout << "������� ���������� ��������� ��������� ���� ax + b = 0" << endl;

	cout << endl;

	cout << "������� a: ";
	cin >> a;

	cout << "������� b: ";
	cin >> b;

	b1 = b * (-1);

	x = b1 / a;

	cout << endl;

	cout << "x = " << x << endl;
}

void cin_task3() 
{		// #3
	setlocale(LC_ALL, "Rus");

	int x;
	int n;
	int p;

	cout << "������� ����� x: ";
	cin >> x;

	cout << "������� ����� x: ";
	cin >> n;

	cout << endl;

	p = pow(x, n);
	cout << "x = " << p << endl;
}

void cin_task4() 
{		// #4
	setlocale(LC_ALL, "Rus");

	const double p = 3.14;

	double r;
	double d;
	double c;
	double s;

	cout << "������� R ����������: ";
	cin >> r;

	d = r * 2;
	c = p * d;
	s = p * pow(r, 2);

	cout << endl;

	cout << "����� ���������� � = " << c << endl;
	cout << "������� ���������� S = " << s << endl;
}

void cin_task5() 
{		// #5
	setlocale(LC_ALL, "Rus");

	double grn;
	double usd = 25;
	double eur = 30;
	double bit = 255000;

	cout << "������� ���-�� ��� ��� �����������: ";
	cin >> grn;

	usd = grn / usd;
	eur = grn/ eur;
	bit = grn / bit;

	cout << endl;

	cout << "USD = " << usd << endl;
	cout << "EUR = " << eur << endl;
	cout << "BitCoin = " << bit << endl;
}

void cin_task6() 
{		// #6
	setlocale(LC_ALL, "Rus");

	double kilo;
	double mili = 1.609;
	double seaMili = 1.852;

	cout << "������� ���-�� �� ��� �����������: ";
	cin >> kilo;

	mili = kilo / mili;
	seaMili = kilo / seaMili;

	cout << endl;

	cout << "Miles = " << mili << endl;
	cout << "Nautical miles = " << seaMili << endl;
}

void cin_task7() 
{		// #7
	setlocale(LC_ALL, "Rus");

	double n;
	double p;

	cout << "������� ����� N: ";
	cin >> n;

	cout << "������� ����� % �� N �� ������ ������: ";
	cin >> p;

	n = p * (n / 100);

	cout << endl;

	cout << "������� �� N = " << n << endl;
}

void cin_task8() 
{		// #8
	setlocale(LC_ALL, "Rus");

	double cel;
	double fare;
	double kelv = 273.15;
	double reom = 0.8;
	double deli;

	cout << "������� �C ��� �����������: ";
	cin >> cel;

	fare = (cel * 1.8) + 32;
	kelv = cel + kelv;
	reom = cel * reom;
	deli = (100 - cel) * (3 / 2);

	cout << endl;

	cout << "�C ---> �F = " << fare << endl;
	cout << "�C ---> �K = " << kelv << endl;
	cout << "�C ---> �Re = " << reom << endl;
	cout << "�C ---> �D = " << deli << endl;

	cout << endl;

	cout << "������� �F ��� ����������� � �C: ";
	cin >> fare;

	cel = 0.5555555 * (fare - 32);

	cout << endl;

	cout << "�F ---> �C = " << cel << endl;
}

void cin_task9() 
{		// #9
	setlocale(LC_ALL, "Rus");

	int a = 7;
	int b = 13;
	int c;

	cout << "#1" << endl;

	cout << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << endl;

	cout << "c = a + b" << endl;
	cout << "b = c - b" << endl;
	cout << "a = c - a" << endl;

	cout << endl;

	c = a + b;
	b = c - b;
	a = c - b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << endl;

	cout << "#2" << endl;

	cout << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << endl;

	cout << "a = a + b" << endl;
	cout << "b = a - b" << endl;
	cout << "a = a - b" << endl;

	cout << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}