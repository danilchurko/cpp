#include "myoptions.h"

void arr_p2_task18() 
{ // #18
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100;
	SetConsoleCursorInfo(h, &cursor);

	system("color 1F");
	COORD snow;
	snow.Y = 0;
	snow.X = 10;

	while (true) {
			SetConsoleCursorPosition(h, snow);
			cout << (char)15;

			SetConsoleCursorPosition(h, snow);
			cout << " "; // clear snow

			int direction = rand() % 3;

			if (direction == 0) {
				snow.X--; // left
			}
			else if (direction == 1) {
				snow.X++; // right
			}

			snow.Y++;

			SetConsoleCursorPosition(h, snow);
			cout << (char)15;
			Sleep(150);

			if (snow.Y > 20) {
				break;
			}
	}

	Sleep(INFINITE);
}

void arr_p2_task12() 
{ // #12
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	int i = 1;

	COORD position;
	position.X = 23;
	position.Y = 9;
	SetConsoleCursorPosition(h, position);

	int direction = 3;

	while (true)
	{
		if (direction == 1) // DOWN-RIGHT
		{
			position.X++;
			position.Y++;
		}
		else if (direction == 2) // UP-RIGHT
		{
			position.X++;
			position.Y--;
		}
		else if (direction == 3) // UP-LEFT
		{
			position.X--;
			position.Y--;
		}
		else if (direction == 4) // DOWN-LEFT
		{
			position.X--;
			position.Y++;
		}

		SetConsoleCursorPosition(h, position);
		SetConsoleTextAttribute(h, 15);
		cout << i;
		i++;
		if (i == 10) {
			i = 1;
		}
		Sleep(50);

		CONSOLE_CURSOR_INFO cursor;
		cursor.bVisible = false;
		cursor.dwSize = 100;
		SetConsoleCursorInfo(h, &cursor);

		if (direction == 1 && position.Y > 28)
		{
			direction = 2;
		}
		else if (direction == 1 && position.X > 117)
		{
			direction = 4;
		}

		else if (direction == 2 && position.Y < 1)
		{
			direction = 1;
		}
		else if (direction == 2 && position.X > 117)
		{
			direction = 3;
		}

		else if (direction == 3 && position.Y < 1)
		{
			direction = 4;
		}
		else if (direction == 3 && position.X < 1)
		{
			direction = 2;
		}

		else if (direction == 4 && position.Y > 28)
		{
			direction = 3;
		}
		else if (direction == 4 && position.X < 1)
		{
			direction = 1;
		}
	}

	Sleep(INFINITE);
}

void arr_p2_task11() 
{ // #11
	srand(time(0));
	rand();

	const int width = 5;
	const int height = 5;
	int ar[height][width];

	int current = 1;

	for (int y = 0; y < height; y++) {
		if (y % 2 == 0) {
			for (int x = 0; x < width; x++) {
				ar[y][x] = current;
				current++;
			}
		}
		else {
			for (int x = width - 1; x >= 0; x--) {
				ar[y][x] = current;
				current++;
			}
		}

	}

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			cout << ar[y][x] << "\t";
		}
		cout << endl;
	}

	Sleep(INFINITE);
}

void arr_p2_task10() 
{ // #10

	const int line = 5;
	const int colm = 6;

	int arr[line][colm] = {};

	int koef = 1;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = koef;
			cout << setw(4) << arr[i][j];
			koef++;
		}
		cout << endl;
	}
}

void arr_p2_task6() 
{ // #6
	srand(time(0));
	rand();

	const int height = 4;
	const int width = 4;

	int ar[height][width];

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			ar[y][x] = rand() % 100;
			cout << ar[y][x] << "\t";
		}
		cout << endl;
	}

	for (int y = 0; y < height; y += 2) {
		for (int x = 0; x < width; x++) {
			int temp = ar[y][x];
			ar[y][x] = ar[y + 1][x];
			ar[y + 1][x] = temp;
		}
	}

	cout << "-------------------------------" << endl;

	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			cout << ar[y][x] << "\t";
		}
		cout << endl;
	}

	Sleep(INFINITE);
}

void arr_p2_task5() 
{ // #5

	const int line = 5;
	const int colm = 5;

	int arr[line][colm];

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = i * 10 + j;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
}

void arr_p2_task4() 
{ // #4
	// Сделать сумму по колонкам
	srand(time(0));
	rand();

	const int line = 15;
	const int colm = 5;

	int arr[line][colm];

	int sum_line = 0;
	int sum_colm = 0;

	int num_line = 0;
	int num_colm = 0;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = rand() % 20 + 1;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			sum_line += arr[i][j];
			num_line++;
		}

		num_line = i + 1;
		cout << "Line #" << num_line << " - " << sum_line << endl;
		sum_line = 0;
	}
}

void arr_p2_task3() 
{ // #3
	srand(time(0));
	rand();

	const int line = 4;
	const int colm = 5;

	int arr[line][colm];

	int pol = 0;
	int otr = 0;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = rand() % 20 - 10;
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			if (arr[i][j] > 0)
			{
				pol++;
			}
			if (arr[i][j] < 0)
			{
				otr++;
			}
		}
	}

	cout << endl;
	cout << "Pol: " << pol << endl;
	cout << "Otr: " << otr << endl;
}

void arr_p2_task2() 
{ // #2
	srand(time(0));
	rand();

	const int line = 5;
	const int colm = 5;

	int arr[line][colm];

	int sum_d1 = 0;
	int sum_d2 = 0;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = rand() % 20 + 1;
			cout << setw(4) << arr[i][j];
			if (arr[i] == arr[j]) {
				sum_d1 += arr[i][j];
			}
			if (i == colm - j - 1) {
				sum_d2 += arr[i][j];
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << " Sum D1: " << sum_d1 << endl;
	cout << " Sum D2: " << sum_d2 << endl;
}

void arr_p2_task1() 
{ // #1
	srand(time(0));
	rand();

	const int line = 4;
	const int colm = 5;

	int arr[line][colm];

	int sum = 0;
	int sred = 0;
	int min = 0;
	int max = 0;

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < colm; j++) {

			arr[i][j] = rand() % 20 + 1;
			cout << setw(4) << arr[i][j];
			sum += arr[i][j];
			sred = sum / (line * colm);
		}
		cout << endl;
	}

	max = arr[0][0];
	min = arr[0][0];

	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < colm; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}

	cout << endl;
	cout << " Sum: " << sum << endl;
	cout << "Sred: " << sred << endl;

	cout << endl;
	cout << " MAX: " << max << endl;
	cout << " MIN: " << min << endl;
}