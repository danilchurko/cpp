#include "myoptions.h"

void loops_p1_task1()
{ // #1
	int start = 1;
	int end = 100;
	int i = start;
	while (i <= end) {
		if (i % 2 == 0) {
				cout << i << ", ";
		}
		i++;
	}
}

void loops_p1_task2() 
{ // #2
	int start;
	cin >> start;
	int end;
	cin >> end;

	int i = 0;
	if (start < end) {
		while (start <= end) {
			i = i + start;
			start++;
		}
		cout << i;
	}
	else {
		cout << "ERROR";
	}
}

void loops_p1_task3() 
{ // #3
	int start = 1;
	int finish = 30;

	int c = start;

	while (c <= finish)
	{
		double f = c * 1.8 + 32;
		cout << c << "C - " << double(f) << "F\n";
		c++;
	}
}

void loops_p1_task4() 
{ // #4
	int number = 8;

	int start = 1;
	int finish = number;
	int current = start;

	int result = 1;

	while (current <= finish)
	{
		cout << current;
		if (current < finish) {
			cout << " * ";
		}
		else {
			cout << " = ";
		}
		result *= current;
		current++;
	}
	cout << result << endl;
}

void loops_p1_task5() 
{ // #5
	int a, b = 1;
	cin >> a; // 12345

	int sum = a % 10; // 5
	while ((a /= 10) > 0) // a = a / 10; a = 1234.5
	{
		b++; // b = 2
		sum += a % 10; // sum = sum + a % 10 (4)
	}
	cout << b << " " << sum;
}

void loops_p1_task6() 
{ // #6
	int a, sum;
	cout << "Vvedite chislo: ";
	cin >> a;
	cout << "Vashe chislo naoborot = ";
	while (a > 0) {
		sum = a % 10;
		a /= 10;
		cout << sum;
	}
}

void loops_p1_task7() 
{ // #7
	int a;
	cin >> a;
	int del = 1;

	while (del <= a) {
		if (a % del == 0) {
			cout << del << "/";
			del++;
		}
		else {
			del++;
		}
	}
}

void loops_p1_task8() 
{ // #8
	int a;
	cin >> a;
	int i = 1;
	int pos = 0;
	while (i <= a) {
		if (a % i == 0) {
			i++;
			pos++;
		}
		else {
			i++;
		}
	}
	if (pos == 2) {
		cout << "Prostoe";
	}
	else {
		cout << "Ne prostoe";
	}
}

void loops_p1_task9() 
{ // #9
	int num;
	cin >> num; //851223548
	while (num >= 10)
	{
		if ((num % 100) % 11 == 0)
		{
			cout << "Yes";
			break;
		}
		else {
			num /= 10;
		}
	}
	if (num < 10) {
		cout << "No";
	}
}

void loops_p1_task10() 
{ // #10
	int n, m;
	cin >> n; // 225599
	m = n % 10;
	while (n /= 10)
	{
		if (m < n % 10)
		{
			cout << "No" << endl;
		}
		m = n % 10;
	}
	cout << "Yes" << endl;
}

void loops_p1_task11() 
{ // #11
	int questions = 8;
	int answ;
	int value = 500;
	int bottom = 0;
	int top = 1000;
	while (questions--)
	{
		cout << "more than " << value << "? 1 - yes 0 - no" << endl;
		cin >> answ;
		if (answ == 1)
		{
			bottom = value;
			value = bottom + (top - bottom) / 2;
		}
		else
		{
			top = value;
			value = bottom + (top - bottom) / 2;
		}

		if (top - bottom == 1)
		{
			value = bottom + 1;
			break;
		}
	}
	cout << "your number is: " << value << endl;
}

int loops_p1_task12()
{ // #12 Реально очиньсложна

	int n;
	int lucky(int n);

	long int a = 010010;
	long int b = 999999;
	int sum = 0;
	cout << "lucky tickets:" << endl;
	for (int i = a; i < b; i++) {
		if (lucky(i)) {
			cout << "ticket: " << i << endl;
			sum++;
		}
	}
	cout << "sum of lucky tickets: " << sum;

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += n % 10;
		n /= 10;
	}
	while (n) {
		sum2 += n % 10;
		n /= 10;
	}
	if (sum1 == sum2) return 1;
	else return 0;
}

void loops_p1_task13() 
{ // #13
	long int start = 10000000;
	long int end = 99999999;
	long int i = start;
	int sum = 0;
	while (i <= end) {
		if (i % 12345 == 0) {
			if (i >= 10000000 && i <= 99999999) {
						cout << i << ", ";
						sum++;
			}
		}
	i++;
	}
	cout << "sum: " << sum;
}

/*{ // # 14 На этом моменте я понял что ничего не понял

}*/

void loops_p1_task15() 
{ // #15

	int n;
	int cr = 5000;
	int bet = 100;

	while (cr > 0) {
		cout << "    Bet: " << bet << "$" << endl;
		cout << "Credits: " << cr << "$";

		cr -= bet;
		Sleep(1000);
		system("cls");

		srand(time(0));
		rand();

		int x = 7; //rand() % 7;
		int y = 7; //rand() % 7;
		int z = 7; //rand() % 7;

		cout << " ----------- " << endl;
		cout << "| " << x << " | " << y << " | " << z << " |" << endl;
		cout << " ----------- " << endl;
		if (x == 7 && y == x && z == x) {
			cout << "777 JACKPOT 777" << endl;
			cout << "You win this GAME" << endl;
			Sleep(5000);
			break;
		}
		else if ((x == 0 && y == x && z == x)||
				(x == 1 && y == x && z == x) ||
				(x == 2 && y == x && z == x) ||
				(x == 3 && y == x && z == x) ||
				(x == 4 && y == x && z == x) ||
				(x == 5 && y == x && z == x) ||
				(x == 5 && y == x) ||
				(x == 5 && z == x) ||
				(x == 5) ||
				(x == 7 && y == x) ||
				(x == 7 && z == x)) {

			int halfjack = 10 * bet;

			cout << "HALF-JACKPOT" << endl;
			cr += halfjack;
			Sleep(5000);
			system("cls");
		}
		else if (x == 6 && y == x && z == x) {

			int satanjack = (cr / 100) * 50;

			cout << "666 SATANA 666" << endl;
			cr -= satanjack;
			Sleep(5000);
			system("cls");
		}
	}
	if (cr < 0) {
		cout << "You lose all your money" << endl;
	}

	system("pause");
}

void loops_p1_task16() 
{ // #16
	srand(time(0));
	rand();

	int pm_cnt = 40; // 20 копейщиков
	int pm_hp = 10; // здоровье одного копейщика
	int all_pm_hp = pm_cnt * pm_hp;
	int all_pm_alv = all_pm_hp / pm_hp;
	int pm_ad = 4; // сила атаки одного копейщика

	int drgn_hp = 1500; // здоровье одного дракона
	int drgn_ad = 27; // сила атаки дракона

	int round = 1;
	while (drgn_hp > 0 && all_pm_alv > 0) // до тех пор, пока дракон жив А ТАКЖЕ до тех пор, пока количество копейщиков больше 0
	{
		cout << "ROUND #" << round << endl;
		int max_pm_ad = pm_cnt * pm_ad; // 80
		int real_pm_ad = rand() % (max_pm_ad + 1); // 0...80
		cout << "Attack PIKEMAN: -" << real_pm_ad << " hp" << endl;
		cout << "All PIKEMAN HP: " << all_pm_hp << endl;
		cout << "PIKEMAN alive: " << all_pm_alv << " pc." << endl;

		drgn_hp -= real_pm_ad;
		if (drgn_hp > 0) // дракон готовит ответочку!
		{
			cout << "Dargon HP: " << drgn_hp << endl;
			all_pm_hp -= drgn_ad;
			all_pm_alv = all_pm_hp / pm_hp;

			// 1. посчитать общее здоровье копейщиков
			// 2. из общего здоровья вычесть урон дракона
			// 3. посчитать, сколько осталось копейщиков
			cout << "---------------------" << endl;
			if (all_pm_alv <= 0) {
				cout << "...Dragon WIN..." << endl;
			}
		}
		else // дракона запинали
		{
			cout << endl;
			cout << "...Dragon DIE..." << endl;
			cout << endl;
		}
		Sleep(1000); // пауза на 1 с
		round++;
	}
	system("pause");
}