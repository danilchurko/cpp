#include "myoptions.h"

int loops_p1_task1(int n, int x) // #22
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X = x;
	c.Y = 3;
	SetConsoleCursorPosition(h, c);

	if (n == 0)
	{
		cout << "  000  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 0   0 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "0     0"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "0     0"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "0     0"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 0   0 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  000  ";
	}
	else if (n == 1)
	{
		cout << "   11  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  1 1  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 1  1  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    1  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    1  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    1  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  11111";
	}
	else if (n == 2)
	{
		cout << "   222 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  2   2"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 2   2 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    2  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   2   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  2    "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 222222";
	}
	else if (n == 3)
	{
		cout << "   333 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  3   3"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "      3"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    333"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "      3"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  3   3"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   333 ";
	}
	else if (n == 4)
	{
		cout << "   4   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  44   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 4 4   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "4  4   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "4444444"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   4   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   4   ";
	}
	else if (n == 5)
	{
		cout << "  5555 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  5    "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   5   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    5  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "     5 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 5   5 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  555  ";
	}
	else if (n == 6)
	{
		cout << "  666  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 6     "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "6      "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "6 6 6  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "6     6"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 6   6 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  666  ";
	}
	else if (n == 7)
	{
		cout << "777777"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "     7"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    7 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   7  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  7   "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 7    "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "7     ";
	}
	else if (n == 8)
	{
		cout << "  888  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 8   8 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 8   8 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  888  "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 8   8 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << " 8   8 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  888  ";
	}
	else if (n == 9)
	{
		cout << "   9999"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  9   9"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "  9   9"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "   9999"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "      9"; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "     9 "; c.X = x; c.Y++; SetConsoleCursorPosition(h, c);
		cout << "    9  ";
	}

	return 0;
}

void loops_p2_task21()
{ // #21
	int except_count = 0;
	for (int i = 1, len = 99999; i < len; i++)
	{
		int temp = i;
		int last = 0;
		while (temp >= 1)
		{
			int a = temp % 10;
			if (a == 4 || (a == 1 && last == 3))
			{
				except_count++;
			}
			last = a;
			temp /= 10;
		}
	}
	cout << "Except count : " << except_count;
}

void loops_p2_task20() 
{ // #20
	int day = 13;
	int month = 11;
	int year = 2019;

	int a, y, m, R;
	a = (14 - month) / 12;
	y = year - a;
	m = month + 12 * a - 2;
	R = 7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);

	short date = R % 7;
	if (date == 0)
		cout << "Sun";
	else if (date == 1)
		cout << "Mon";
	else if (date == 2)
		cout << "Tue";
	else if (date == 3)
		cout << "Wed";
	else if (date == 4)
		cout << "Thu";
	else if (date == 5)
		cout << "Fri";
	else if (date == 6)
		cout << "Sat";
}

void loops_p2_task16() 
{ // #16
	int steps = 10;
	int shift = 0;

	for (int i = 0; i < steps; i++) {
		for (int i = 0; i < shift; i++) {
			cout << " ";
		}

		for (int a = 0; a < 3; a++) {
			cout << "*";
		}
		cout << endl;

		shift += 2;
		for (int i = 0; i < shift; i++) {
			cout << " ";
		}
		cout << "*";
		cout << endl;
	}

	for (int i = 0; i < shift; i++) {
		cout << " ";
	}

	for (int a = 0; a < 3; a++) {
		cout << "*";
	}
}

void loops_p2_task15() 
{ // #15
	int len = 15;
	int am = 8;

	int am_back = 0;
	for (int i = 0; i < am; i++) {
		for (int i = 0; i < am_back; i++) {
			cout << " ";
		}
		for (int i = 0; i < len; i++) {
			cout << "*";
		}
		cout << endl;
		am_back += 2;
	}
}

int loops_p2_task2(int startDay, int daysNumber, const char* name) // #14
{
	cout << "                     " << name << endl << "__________________________________________________" << endl;
	cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;
	for (int i = 1; i < startDay; i++)
		cout << "\t";
	for (int i = 1; i <= daysNumber; i++)
	{
		cout << i << "\t";
		if ((startDay + i) % 7 == 1)
			cout << endl;
	}
	cout << endl;
	cout << endl;
	startDay = (startDay + daysNumber) % 7;
	if (startDay == 0)
		startDay = 7;
	return startDay;
}

void loops_p2_task13() 
{ // #13
	int len = 10000000;

	cout << "0";
	for (int i = 0, first = 0, last = 1; i < len; i++)
	{
		if (first + last == i)
		{
			if (i != 0)
				cout << ", ";
			cout << i;

			int temp = last;
			last = first + last;
			first = temp;
		}
	}
	cout << "." << endl;
}

void loops_p2_task12() 
{ // #12
	int len = 10000000;
	for (int i = 1; i < len; i++) {
		int temp = i - 1;
		int sum = 0;
		while (temp >= 1) {
			if (!(i % temp)) {
				sum += temp;
			}
			temp--;
		}

		if (sum == i) {
			cout << i << "\n";
		}
	}
}

void loops_p2_task11() 
{ //#11
	int len = 10000000;
	for (int i = 1; i <= len; i++) {

		auto temp = i;
		auto sum = 0;
		auto rank = 1;

		int x = i;
		while ((x /= 10) > 0) {
			rank++;
		}

		while (temp >= 1) {
			int a = temp % 10;
			sum += pow(a, rank);
			temp /= 10;
		}

		if (sum == i) {
			if (i != 1)
				cout << ", ";
			cout << i;
		}
	}
	cout << ".";
}

void loops_p2_task10() 
{ // #10
	auto len = 10000000;
	for (int i = 2; i <= len; i++) {
		bool bl = true;
		for (int a = 2; a < i; a++) {
			if (!(i % a)) {
				bl = false;
			}
		}
		if (bl)
		{
			if (i != 2) {
				cout << ", ";
			}
			cout << i;
		}
	}
	cout << ".";
}

void loops_p2_task8() 
{ // #8
	int N;
	int num;
	cout << "Enter number: ";
	cin >> num;
	cout << "Enter count left shift: ";
	cin >> N;
	cout << endl;

	int rank = 0;
	int temp = num;
	while (temp >= 1) {
		temp /= 10;
		rank++;
	}

	cout << num << endl;
	for (int i = 0; i < N; i++) {

		//get first num
		int first = num;
		for (int i = 0; i < rank - 1; i++) {
			first /= 10;
		}

		// delete first rank
		auto first_full = first;
		for (int i = 0; i < rank - 1; i++) {
			first_full *= 10;
		}
		num -= first_full;

		// left shift by one
		num = num * 10 + first;
		cout << num << endl;
	}
}

void loops_p2_task7() 
{ // #7
	int num; // 1234321
	cin >> num;

	int a = num;
	int b = 0;

	while (a >= 1) {
		b = b * 10 + a % 10;
		a /= 10;
	}
	if (num == b) {
		cout << "Palendr" << endl;
	}
	else {
		cout << "Ne palendr" << endl;
	}
}

void loops_p2_task6() 
{ // #6
	int width = 17;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {

			if (i < width / 2) {
				if (j < width / 2 - i || j > width / 2 + i) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
				continue;
			}

			if (i > width / 2) {
				if (j < i - width / 2 || j > width - (i - width / 2) - 1) {
					cout << ' ';
				}
				else {
					cout << '*';
				}
				continue;
			}
			cout << '*';
		}
		cout << endl;
	}
}

void loops_p2_task5() 
{ // #5
	int H = 13;
	for (int i = 0, z = -1; i < H; i++) {
		int a = 0;
		while (H - i > a) {
			cout << " ";
			a++;
		}
		cout << "*";
		int x = 0;
		while (i != 0 && x < z) {
			if (i == H - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			x++;
		}
		z += 2;
		if (i != 0) cout << "*";
		cout << endl;
	}
}

void loops_p2_task4() 
{ // #4
	int width;
	int height;
	cout << "Write width: ";
	cin >> width;
	cout << "Write height: ";
	cin >> height;

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x == 0 || y == 0 || x == width - 1 || y == height - 1) {
				cout << char(176) << char(176);
			}
			else {
				cout << "..";
			}
		}
		cout << "\n";
	}
	system("pause");
}

void loops_p2_task3() 
{ // #3
	int step = 4000;
	int cost = 8500;
	double pers = 1.03;
	int money_need = 0;
	int money = 0;
	int len = 10;

	for (int i = 0; i < len; i++)
	{
		money_need = (cost * pers) - step;
		money += money_need;
	}
	cout << "Need money for 10 mth: " << money << endl;
}

void loops_p2_task2() 
{ // #2
	int len = 10;

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD c;
	c.X = 3;
	c.Y = 1;

	SetConsoleCursorPosition(h, c);

	for (int i = 1; i < len; i++)
	{
		for (int a = 1; a < len; a++)
		{
			cout << i * a;
			c.X += 5;
			SetConsoleCursorPosition(h, c);
		}
		c.Y++;
		c.X = 3;
		SetConsoleCursorPosition(h, c);
	}
}

void loops_p2_task1() 
{ // #1
	srand(time(0));
	rand();

	int pos = 0;
	int neg = 0;
	int zero = 0;
	int ch = 0;
	int nech = 0;

	for (int i = 0; i < 100; i++)
	{
		rand();
		int a = rand() % 201 - 100; // from -100 to +100
		//int a = rand() % 401 - 100; // from -100 to 300
		//int a = rand() % 10 + 1; // from 1 to 10
		//int a = rand() % 11; // from 0 to 10
		if (a > 0 && a <= 100) {
			pos++;
		}
		else if (a < 0 && a >= -100) {
			neg++;
		}
		else if (a == 0) {
			zero++;
		}
		if (a % 2) {
			ch++;
		}
		else {
			nech++;
		}
	}
	cout << "+ | " << pos << "%" << endl;
	cout << "- | " << neg << "%" << endl;
	cout << "0 | " << zero << "%" << endl << endl;

	cout << "  Chet " << ch << "%" << endl;
	cout << "Nechet " << nech << "%" << endl;
}