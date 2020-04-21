#include "myoptions.h"

void reminder_task1()
{     //#1 Поменять серединные цифры местами
		int num1;
		int num2;

		cout << "Write 1st number (exmpl 444): ";
		cin >> num1;
		cout << "Write 2nd number (exmpl 123): ";
		cin >> num2;

		if (num1 < 0 || num1 > 999 || num2 < 0 || num2 > 999)
		{
			system("color C0");
			cout << "EROR!" << endl;
		}
		else
		{
			int a1 = num1 / 100; // 1
			int b1 = num1 / 10 % 10; // 2
			int c1 = num1 % 10; // 3

			int a2 = num2 / 100; // 4
			int b2 = num2 / 10 % 10; // 5
			int c2 = num2 % 10; // 6

			cout << "New 1st number is: " << a1 << b2 << c1 << endl;
			cout << "New 2nd number is: " << a2 << b1 << c2 << endl;
		}
}

void reminder_task2() 
{      //#2 Сумма 1 и 2 цифры, разница 2 и 4
	int num;

	cout << "Enter number: ";
	cin >> num;

	int a = num / 1000 % 10;
	int b = num / 100 % 10;
	int c = num / 10 % 10;
	int d = num % 10;

	int am = a + c;
	int dif= b - d;

	cout << "1 + 3 = " << am << endl;
	cout << "2 - 4 = " << dif << endl;
}

void reminder_task3() 
{     //#3 Убрать серединную цифру
	int num;

	cout << "Write number (exmpl 444): ";
	cin >> num;

	if (num < 0 || num > 999)
	{
		system("color C0");
		cout << "EROR!" << endl;
	}
	else
	{
		int a1 = num / 100; // 1
		int b1 = num / 10 % 10; // 2
		int c1 = num % 10; // 3

		cout << "New number is: " << a1 << c1 << endl;
	}
}

void reminder_task4() 
{      //#4 Сума выплачиваемая банком в месяц
	double grn;
	double perc;
	double mth_pay;

	cout << "Enter the amount of money you want to invest in the bank (grn): ";
	cin >> grn;
	cout << endl;

	cout << "Enter deposit percentage (%): ";
	cin >> perc;
	cout << endl;

	mth_pay = (perc * grn / 100) / 12;

	cout << "Money receieved in first month = " << round(mth_pay) << endl;
}

void reminder_task5() 
{     //#5 Убрать серединную цифру
	int grn;
	int cost;

	cout << "Write how much money you have: ";
	cin >> grn;

	cout << "Write cost of goods: ";
	cin >> cost;

	int amount = grn / cost;
	int сhange = grn % cost;

	cout << "Amount of goods: " << amount << " pc." << endl;
	cout << "Your change: " << сhange << " grn." << endl;
}

void reminder_task6() 
{      //#6 Фунты в кг
	double const pound = 405.9; // g
	double p;
	double p_kg;
	double kg_p;

	cout << "Enter amount of pounds: ";
	cin >> p;

	p_kg = p / 2.2046;

	cout << "From POUNDS to KG = " << p_kg << endl;

	kg_p = p_kg * 2.2046;

	cout << "From KG to POUNDS = " << kg_p << endl;
}

void reminder_task7() 
{     //#7 Расчет краски и ее стоимости на комнату
	const int paint_m2 = 0.15;
	int lr;
	int wr;
	int hr;
	double winds_dors;
	double amount_paint;
	int cost_paint;
	double s;

	cout << "Write length of the room (m): ";
	cin >> lr;
	cout << "Write width of the room (m): ";
	cin >> wr;
	cout << "Write height of the room (m): ";
	cin >> hr;

	cout << "Write % of windows & doors in room (%): ";
	cin >> winds_dors;

	cout << "Write cost of paint (grn): ";
	cin >> cost_paint;

	s = (((lr * hr) * 2) + ((wr * hr) * 2));
	s = s - (s * (winds_dors / 100));

	amount_paint = s * 0.15;
	if(amount_paint - int(amount_paint) < 1)
	{
		amount_paint++;
	}
	else
	{
		amount_paint += 0;
	}
	cost_paint = amount_paint * cost_paint;

	cout << endl;
	cout << "You nead " << round(amount_paint) << " litres paint for walls" << endl;
	cout << "Cost of paint: " << cost_paint << " grn." << endl;
}

void reminder_task8() 
{      //#8 Перевернуть 3-х значное число
	int num;

	cout << "Enter number (exmpl 123): ";
	cin >> num;

	if (num < 0 || num > 999)
	{
		system("color C0");
		cout << "EROR!" << endl;
	}
	else
	{
		int a = num % 10;
		int b = num / 10 % 10;
		int c = num / 100 % 10;

		cout << "Your mix number: " << a << b << c << endl;
	}
}

void reminder_task9() 
{     //#9 Сдвинуть число на 2 разряда
	int num;

	cout << "Write number (example 12345): ";
	cin >> num;

	if (num < 0 || num > 99999)
	{
		system("color C0");
		cout << "EROR!" << endl;
	}
	else
	{
		int a1 = num / 10000;
		int b1 = num / 1000 % 10;
		int c1 = num / 100 % 10;
		int d1 = num / 10 % 10;
		int e1 = num % 10;

		cout << "New number is: " << d1 << e1 << a1 << b1 << c1 << endl;
	}
}

void reminder_task10() 
{     //#10 Расчет планет солнечной системы
	const double f = 6.67 * pow(10, -11);
	const double pi = 3.1415926;
	double m_all;
	double aver_all;
	double pers;
	double all_no_upit;
	double big_upit;

	double g_earth = 9.81; //  m/sec^2
	double r_earth = 6378; //  km
	double m_earth = ((g_earth * (r_earth * r_earth)) / f) / pow(10, 18); // kg
	double per_earth;

	double m_merk = m_earth * 0.055;
	double per_merk;

	double m_vene = m_earth * 0.815;
	double per_vene;

	double m_mars = m_earth * 0.107;
	double per_mars;

	double m_jupi = m_earth * 318;
	double per_jupi;

	double m_satu = m_earth * 95;
	double per_satu;

	double m_uran = m_earth * 14;
	double per_uran;

	double m_nept = m_earth * 17;
	double per_nept;

	m_all = m_earth + m_merk + m_vene + m_mars + m_mars + m_jupi + m_satu + m_uran + m_nept;

	aver_all = m_all / 8; // Averal of all

	pers = (m_all / 100); // 1% от всех планет (26.6888)

	per_earth = m_earth / pers;
	per_merk = m_merk / pers;
	per_vene = m_vene / pers;
	per_mars = m_mars / pers;
	per_jupi = m_jupi / pers;
	per_satu = m_satu / pers;
	per_uran = m_uran / pers;
	per_nept = m_nept / pers;

	cout << "Mass of Earth	 - " << round(m_earth * 10000) / 10000 << "  (kg*10^24)" << endl;
	cout << "Mass of Merkyry  - " << round(m_merk * 10000) / 10000 << "  (kg*10^24)" << endl;
	cout << "Mass of Venera	 - " << round(m_vene * 10000) / 10000 << "  (kg*10^24)" << endl;
	cout << "Mass of Mars	 - " << round(m_mars * 10000) / 10000 << "  (kg*10^24)" << endl;
	cout << "Mass of Jupiter  - " << round(m_jupi * 10000) / 10000 << " (kg*10^24)" << endl;
	cout << "Mass of Saturn	 - " << round(m_satu * 10000) / 10000 << " (kg*10^24)" << endl;
	cout << "Mass of Uran	 - " << round(m_uran * 10000) / 10000 << " (kg*10^24)" << endl;
	cout << "Mass of Neptun	 - " << round(m_nept * 10000) / 10000 << " (kg*10^24)" << endl;

	cout << endl;
	cout << "Mass of all planets: " << m_all << " (kg*10^24)" << endl; // massa

	cout << endl;
	cout << "Averal mass of all planets: " << aver_all << " (kg*10^24)" << endl; // averal all

	cout << endl;
	cout << round(per_merk * 100) / 100 << " % Merkury" << endl;
	cout << round(per_mars * 100) / 100 << " % Mars" << endl;
	cout << round(per_vene * 100) / 100 << " % Venera" << endl;
	cout << round(per_earth * 100) / 100 << " % Earth" << endl;
	cout << round(per_uran * 100) / 100 << " % Uran" << endl;
	cout << round(per_nept * 100) / 100 << " % Neptun" << endl;
	cout << round(per_satu * 100) / 100 << " % Satyrn" << endl;
	cout << round(per_jupi * 100) / 100 << " % Jupiter" << endl;

	cout << endl;
	all_no_upit = m_all - m_jupi;
	cout << "It's mass all planets withot Upiter - " << all_no_upit << endl;

	cout << endl;
	big_upit = m_jupi / all_no_upit;
	cout << "In " << round(big_upit * 100) / 100 << " times Upiter larger than all other planets" << endl;
}