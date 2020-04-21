#include "myoptions.h"

void casting_task1() 
{   // #1 Сколько времени пробежал человек
	double s;
	double v;
	double time;

	double sec;
	double m;
	double h;

	cout << "Write S (km): ";
	cin >> s;

	cout << "Write V (m/sec): ";
	cin >> v;

	time = (s * 1000) / v;

	h = time / 3600;

	m = (h - (int)h) * 60;

	sec = (m - (int)m) * 60;

	cout << "Time spend on run: " << (int)h << " h.  " << (int)m << " min.  " << (int)sec << " sec." << endl;
}

void casting_task2() 
{   // #2 Сумма целой и дробной части
	double a;
	double b;

	int sum1;
	double sum2;

	cout << "Write 2 fractional number" << endl;

	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;

	sum2 = (a - (int)a) + (b - (int)b);
	sum1 = (a + b) - sum2;

	cout << "Sum int: " << sum1 << endl;
	cout << "Sum fract: " << sum2 << endl;
}

void casting_task3() 
{   // #3 Сколько грн. и сколько коп.
	double a;

	cout << "How much money? - ";
	cin >> a;

	cout << (int)a << " grn.  " << (a - (int)a) * 100 << " kop." << endl;
}

void casting_task4() 
{   // #4 Разложить тонны в тонны, кг и г.
	double t;
	double kg;
	double g;

	cout << "Write mass in tonn: ";
	cin >> t;

	kg = t * 1000;
	kg = (t - (int)t) * 1000;
	g = (kg - (int)kg) * 1000;

	cout << (int)t << " tons  " << (int)kg << " kg  " << g << " g" <<endl;
}

void casting_task5() 
{     // #5 Сек в ч., мин. и сек.
	double time;
	double min;
	double h;
	double sec;

	cout << "Please, enter time in second (exmpl 43512): " << endl;
	cin >> time;

	h = int(time / 3600); // 13 ч (13,8)
	min = int(time - (int(h) * 3600)) / 60; // 53 м
	sec = time - ((h * 3600) + (min * 60)); // 20 сек

	cout << "Your time is " << h << " h. " << min << " min. " << sec << " sec." << endl;
}

void casting_task6() 
{     // #6 Вводят км и мин, найти км/час
	double km;
	double min;
	double speed;

	cout << "Write distance in km: ";
	cin >> km;

	cout << "Write time in min: ";
	cin >> min;

	speed = km / (min / 60);

	cout << "It's " << speed << " km/h" << endl;
}

void casting_task7() 
{     // #7 Счет за телефоный разговор
	const double cost_min = 0.15;

	double h1;
	double min1;
	double sec1;
	double h2;
	double min2;
	double sec2;

	double call;

	cout << "Write the START of the phone call (exrmple: 2 h   15 min   45 sec): " << endl;

	cout << "h. ";
	cin >> h1;
	cout << "min. ";
	cin >> min1;
	cout << "sec. ";
	cin >> sec1;

	cout << "Write the END of the phone call (exrmple: 2 h   15 min   45 sec): " << endl;

	cout << "h. ";
	cin >> h2;
	cout << "min. ";
	cin >> min2;
	cout << "sec. ";
	cin >> sec2;

	call = ((h2 - h1) * 9) + ((min2 - min1)* 0.15) + ((sec2 - sec1) * 0.0025);
	call = round(call * 100) / 100;

	cout << "Cost of the phone call " << call << " grn." << endl;
}

void casting_task8() 
{     // #8 Сколько часов осталось работать
	int a;
	int b;
	int c;

	cout << "How many second you have worked today: ";
	cin >> a;

	b = a / 3600;
	c = 8 - b;

	if (c > 0)
	{
		cout << "Left to worked " << c << " hours" << endl;
	}
	else
	{
		cout << "Your work day was end & you can go home :)" << endl;
	}
}

void casting_task9() 
{     // #9 Стоимость ноутбуков со скидкой
	double p;
	double pc;
	double d;

	double t;

	cout << "Enter price of laptop: ";
	cin >> p;

	cout << "Enter amount of laptops: ";
	cin >> pc;

	cout << "Enter % of discout: ";
	cin >> d;

	t = (p * pc) - (d / 100 * (p * pc));

	cout << "Total price with discout = " << t << endl;
}

void casting_task10() 
{     // #10 Сколько будет скачиваться фильм
	double a;
	double b;

	cout << "Size of film in Gb: ";
	cin >> a;
	cout << "Speed of enternet in b/sec: ";
	cin >> b;

	double inMb = a * 1000; // 25.5 Gb = 25500 (in Mb)
	cout << inMb << endl;

	double speed = b / 8; // 20 b/sec / 8 = 2.5 (Mb/sec)
	cout << speed << endl;

	double sec = inMb / speed; // 25500 / 2.5 = 10200 (sec)
	cout << sec << endl;

	int min = sec / 60; // 10200 / 60 = 170 (min)
	cout << min << endl;

	int hours = min / 60; // 1700 / 60 = 28.33 (hour)
	cout << hours << endl;

	cout << hours << " h. " << min - (hours * 60) << " m. " << sec - (((min * 60) - sec) - ((hours * 3600) - sec)) << " s.\n";
}

void casting_task11() 
{     // #11 Сколкьо фильмо поместиться на флешке
	const int film = 760;

	double flash;
	double mb;
	double a;

	cout << "Enter size of the flash drive in Gb: ";
	cin >> flash;

	mb = flash * 1000;
	a = mb / film;

	cout << "Maximum " << int(a) << " films (with size 760 Mb) can be on a flash drive"  << endl;
}

void casting_task12() 
{     // #12 Округление дробного числа до 2 знака
	double a;

	cout << "Write fractional number (expl. 12.3456789): ";
	cin >> a;

	cout << "Your short number: " << round(a * 100) / 100 << endl;
}

void casting_task13() 
{     // #13 Процент должников в классе
	double done;
	double ndone;
	double all;
	double p;

	cout << "Studunts, who have done their tasks: ";
	cin >> done;

	cout << "Studens, who haven`t done their tasks: ";
	cin >> ndone;

	all = done + ndone;
	p = ndone /
	all * 100;

	cout << "Haven`t done their tasks " << int(p) << " % of students"<< endl;
}

void casting_task14() 
{     // #14 Сколько часов осталось до полуночи
	const int secinday = 86400;
	double sec;
	double secto12;
	double h;
	double min;

	cout << "Write the number of seconds since the beginning of the day (less than 86400): ";
	cin >> sec;

	if (sec < 86400)
	{
		secto12 = secinday - sec;
		h = secto12 / 3600;
		min = ((h - int(h)) * 3600) / 60;
		sec = (min - int(min)) * 60;
		cout << int(h) << " h. " << int(min) << " min. " << sec << " sec. left until midnight" <<	endl;
	}
	else
	{
		cout << "It's already midnight" << endl;
	}
}

void casting_task15() 
{     // #15 Нужно флопи для коппирования
	const double flop = 1.44;
	double gb;
	double mb;
	double a;

	cout << "Enter size of film in Gb: ";
	cin >> gb;

	mb = gb * 1000;
	a = mb / flop;

		if (a - int(a) == 0) {
		  a = a + 0;
		}
		else if (a - int(a) < 1) {
		  a++;
		}
		else
		{
		  a++;
		}

	cout << "Amount of floppy you needed for film this size = " << round(a) << " pc." << endl;
}

void casting_task16() 
{		// #16 Вклад денег под процент
	double grn;
	double time;
	double per;
	double total;

	cout << "Enter amount of money: ";
	cin >> grn;
	cout << endl;

	cout << "Enter amount of deposit time (in month): ";
	cin >> time;
	cout << endl;

	cout << "Enter % per year: ";
	cin >> per;
	cout << endl;

	time = time / 12;
	total = (((time * per) / 100) * grn) + grn;

	cout << "You will have money at the end of the term: " << total << endl;
}

void casting_task17() 
{		// #17 S поверхности земли
	const double p = 3.14;
	const double rad = 6371;

	long long r;
	long long s;

	r = rad * rad;
	s = 4 * p * r;

	cout << "Size of Earth = " << s << " km^2" << endl;
}