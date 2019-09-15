#include <iostream>
#include <cmath>

using namespace std;

int main()

/*{
	setlocale(LC_ALL, "Rus");

	double a;
	double b;
	double c;

	double m;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	cout << "Введите третье число: ";
	cin >> c;

	m = (a + b + c) / 3;

	cout << endl;

	cout << "Среднее арифметическое этих чисел = " << m << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	int a;
	int b;
	double b1;
	double x;

	cout << "Введите переменные линейного уравнения типа ax + b = 0" << endl;
	
	cout << endl;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	b1 = b * (-1);

	x = b1 / a;

	cout << endl;

	cout << "x = " << x << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	int x;
	int n;
	int p;
	
	cout << "Введите число x: ";
	cin >> x;

	cout << "Степень числа x: ";
	cin >> n;

	cout << endl;

	p = pow(x, n);
	cout << "x = " << p << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	const double p = 3.14;

	double r;
	double d;
	double c;
	double s;

	cout << "Введите R окружности: ";
	cin >> r;

	d = r * 2;
	c = p * d;
	s = p * pow(r, 2);

	cout << endl;

	cout << "Длина окружности С = " << c << endl;
	cout << "Плрщадь окружности S = " << s << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	double grn;
	double usd = 25;
	double eur = 30;
	double bit = 255000;

	cout << "Введите кол-во ГРН для конвертации: ";
	cin >> grn;

	usd = grn / usd;
	eur = grn/ eur;
	bit = grn / bit;

	cout << endl;

	cout << "USD = " << usd << endl;
	cout << "EUR = " << eur << endl;
	cout << "BitCoin = " << bit << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	double kilo;
	double mili = 1.609;
	double seaMili = 1.852;

	cout << "Введите кол-во КМ для конвертации: ";
	cin >> kilo;

	mili = kilo / mili;
	seaMili = kilo / seaMili;

	cout << endl;

	cout << "Miles = " << mili << endl;
	cout << "Nautical miles = " << seaMili << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	double n;
	double p;

	cout << "Введите число N: ";
	cin >> n;

	cout << "Введите какой % от N вы хотите узнать: ";
	cin >> p;

	n = p * (n / 100);

	cout << endl;

	cout << "Процент от N = " << n << endl;
}*/

/*{
	setlocale(LC_ALL, "Rus");

	double cel;
	double fare;
	double kelv = 273.15;
	double reom = 0.8;
	double deli;

	cout << "Введите °C для конвертации: ";
	cin >> cel;

	fare = (cel * 1.8) + 32;
	kelv = cel + kelv;
	reom = cel * reom;
	deli = (100 - cel) * (3 / 2);

	cout << endl;

	cout << "°C ---> °F = " << fare << endl;
	cout << "°C ---> °K = " << kelv << endl;
	cout << "°C ---> °Re = " << reom << endl;
	cout << "°C ---> °D = " << deli << endl;

	cout << endl;

	cout << "Введите °F для конвертации в °C: ";
	cin >> fare;
	
	cel = 0.5555555 * (fare - 32);

	cout << endl;

	cout << "°F ---> °C = " << cel << endl;
}*/

{
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