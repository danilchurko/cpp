#include "myoptions.h"

int start()
{
	HWND hwnd = GetConsoleWindow();
	HDC title = GetDC(hwnd);
	HDC txt = GetDC(hwnd);
	HDC tmmark = GetDC(hwnd);

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	// скрытие стандартного мигающего курсора
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100;
	SetConsoleCursorInfo(h, &cursor);

	LOGFONT title_txt; // настройки логического шрифта
	title_txt.lfHeight = 200;// высота символов
	title_txt.lfEscapement = 0;// угол между вектором наклона и осью X устройства
	title_txt.lfWeight = 0;// толщина шрифта в диапазоне от 0 до 1000
	title_txt.lfItalic = false;// курсивный шрифт
	title_txt.lfUnderline = false;// подчеркнутый шрифт
	title_txt.lfStrikeOut = false;// зачеркнутый шрифт
	lstrcpy(title_txt.lfFaceName, "IMPACT");// название шрифта

	SetTextColor(title, RGB(30, 135, 120)); // цвет текста
	SetBkColor(title, RGB(0, 0, 0)); // цвет фона

	SelectObject(title, CreateFontIndirect(&title_txt)); // выбор объекта с настройками отображения
	TextOutA(title, 175, 150, "CIRCLE BOB", 10); // вывод текста на экран в точке 50, 50
	ReleaseDC(hwnd, title);

	LOGFONT menu_txt; // настройки логического шрифта
	menu_txt.lfHeight = 20; // высота символов
	menu_txt.lfEscapement = 0; // угол между вектором наклона и осью X устройства
	menu_txt.lfWeight = 0; // толщина шрифта в диапазоне от 0 до 1000
	menu_txt.lfItalic = false; // курсивный шрифт
	menu_txt.lfUnderline = false; // подчеркнутый шрифт
	menu_txt.lfStrikeOut = false;
	lstrcpy(menu_txt.lfFaceName, "Helvetica");

	SetTextColor(txt, RGB(255, 255, 255)); // цвет текста
	SetBkColor(txt, RGB(0, 0, 0)); // цвет фона

	SelectObject(txt, CreateFontIndirect(&menu_txt)); // выбор объекта с настройками отображения
	TextOutA(txt, 450, 335, "Press any key to continue...", 28); // вывод текста на экран в точке 50, 50
	ReleaseDC(hwnd, txt);

	LOGFONT version_txt; // настройки логического шрифта
	version_txt.lfHeight = 17; // высота символов
	version_txt.lfEscapement = 0; // угол между вектором наклона и осью X устройства
	version_txt.lfWeight = 0;// толщина шрифта в диапазоне от 0 до 1000
	version_txt.lfItalic = false;// курсивный шрифт
	version_txt.lfUnderline = false;// подчеркнутый шрифт
	version_txt.lfStrikeOut = false;
	lstrcpy(version_txt.lfFaceName, "Arial");

	SetTextColor(tmmark, RGB(255, 255, 255)); // цвет текста
	SetBkColor(tmmark, RGB(0, 0, 0)); // цвет фона

	SelectObject(tmmark, CreateFontIndirect(&version_txt)); // выбор объекта с настройками отображения
	TextOutA(tmmark, 25, 520, "V 1.0", 5); // вывод текста на экран в точке 50, 50
	ReleaseDC(hwnd, tmmark);

	_getch();

	return 0;
}

int cercle_bob()
{
	window();

	// установить залоговок в шапке окна консоли
	system("title Cercle Bob");

	//OutputStreamPtr bg = OpenSound(device, "backg.mp3", true);
	//bg->setVolume(0.1f);
	//bg->setRepeat(true);
	//bg->play();

	start();

	// установить стандартный серый цвет для текста и чёрный для фона
	system("color 07");

	// номер окна в системе, нужно для окрашивания и тд
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	// скрытие стандартного мигающего курсора
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100;
	SetConsoleCursorInfo(h, &cursor);

	// запуск алгоритма генерации случайных чисел
	srand((unsigned)time(0));
	rand();

	//////////////////////////////////////////////////// Генирация карты

	// настройка размеров и внешнего вида локации
	const int height = 20; // высота локации
	const int width = 50; // ширина локации
	int ar[height][width] = {}; // сама локация

	int amnt_money = 0;
	int amnt_enemy = 0;

	int hp = 100;
	int energy = 500;

	int count_cf = 0; // Счетчик для лекарства и кофе
	int count_enmy = 0; // счетчик респавна врагов

	// заполнение локации (рандомно) и отображение
	for (int y = 0; y < height; y++) // перебор строк
	{
		for (int x = 0; x < width; x++) // перебор столбцов
		{
			// 0 - empty
			// 1 - wall
			// 2 - money
			// 3 - enemy
			// 4 - drug
			// 5 - coffee

			ar[y][x] = rand(0, 5);

			// Проверка на стены!!!
			if (x == 0 || y == 0 || x == width - 1 || y == height - 1) ar[y][x] = 1;
			if (x == 1 && y == 1) ar[y][x] = 0;

			// Если загенерился враг
			if (ar[y][x] == 3)
			{
				// сократить кол-во в x10 раз
				int prob = rand() % 10;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}
			else if (ar[y][x] == 4)
			{
				// сократить кол-во в x25 раз
				int prob = rand() % 25;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}
			else if (ar[y][x] == 5)
			{
				// сократить кол-во в x40 раз
				int prob = rand() % 40;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}

			// Убрать стенки для выхода
			ar[height - 5][width - 1] = 9; // клетка выхода
			ar[height - 5][width - 2] = 0;
			ar[height - 5][width - 3] = 0;

			// Убрать стенки от персонажа
			ar[1][2] = 0;
			ar[2][2] = 0;
			ar[2][1] = 0;
			ar[1][3] = 0;
			ar[3][3] = 0;
			ar[3][1] = 0;

			// Отображение элементов
			if (ar[y][x] == 0) // empty
			{
				cout << " ";
			}
			else if (ar[y][x] == 1) // wall
			{
				SetConsoleTextAttribute(h, 11);
				cout << (char)178;
			}
			else if (ar[y][x] == 2) // money
			{
				SetConsoleTextAttribute(h, 14);
				cout << (char)249;
			}
			else if (ar[y][x] == 3) // enemy
			{
				SetConsoleTextAttribute(h, 12);
				cout << (char)253;
			}
			else if (ar[y][x] == 4) // drug
			{
				SetConsoleTextAttribute(h, 13);
				cout << (char)3;
			}
			else if (ar[y][x] == 5) // coffee
			{
				SetConsoleTextAttribute(h, 6);
				cout << (char)18;
			}

			if (ar[y][x] == 2) { // Считаем деньги
				amnt_money++;
			}
			else if (ar[y][x] == 3) { // Считаем врагов
				amnt_enemy++;
			}

			// Клетка выхода
			else if (ar[y][x] == 9) {
				SetConsoleTextAttribute(h, 10);
				cout << (char)176;
			}
		}
		cout << "\n";
	}

	////////////////////////////////////////////// Движение персонажа

	int money = amnt_money; // Сколько нужно денег что бы выйграть

	//Координаты персонажа
	COORD pers;
	pers.X = 1;
	pers.Y = 1;
	SetConsoleCursorPosition(h, pers);
	SetConsoleTextAttribute(h, 15);
	cout << (char)2;

	while (true)
	{
		int code = _getch();
		if (code == 224) code = _getch();

		SetConsoleCursorPosition(h, pers);
		cout << " ";

		// Сделать спавн врагов
		if (count_enmy > 10) {
			count_enmy = 0;
		}

		//OutputStreamPtr step_swnd = OpenSound(device, "step.mp3", false);
		//step_swnd->setVolume(1.0f);

		//Условия движения персонажа
		if (code == 77 && ar[pers.Y][pers.X + 1] != 1) // right
		{
			//step_swnd->play();

			pers.X++;
			energy--;
			count_enmy++;
			if (count_cf > 0) {
				count_cf--;
			}
		}
		else if (code == 75 && ar[pers.Y][pers.X - 1] != 1) // left
		{
			//step_swnd->play();

			pers.X--;
			energy--;
			count_enmy++;
			if (count_cf > 0) {
				count_cf--;
			}
		}
		else if (code == 72 && ar[pers.Y - 1][pers.X] != 1) // up
		{
			//step_swnd->play();

			pers.Y--;
			energy--;
			count_enmy++;
			if (count_cf > 0) {
				count_cf--;
			}
		}
		else if (code == 80 && ar[pers.Y + 1][pers.X] != 1) // down
		{
			//step_swnd->play();

			pers.Y++;
			energy--;
			count_enmy++;
			if (count_cf > 0) {
				count_cf--;
			}
		}
		else if (code == 113 && energy > 10) // attack
		{
			// Сделать АТАКУ
			energy -= 10;
		}

		//Подсчет монет
		if (ar[pers.Y][pers.X] == 2) {
			//OutputStreamPtr money_swnd = OpenSound(device, "money.mp3", false);
			//money_swnd->setVolume(0.5f);
			//money_swnd->play();

			money--;
			ar[pers.Y][pers.X] = 0;
		}
		// Враг
		else if (ar[pers.Y][pers.X] == 3) {
			//OutputStreamPtr enemy_swnd = OpenSound(device, "kick.mp3", false);
			//enemy_swnd->setVolume(0.4f);
			//enemy_swnd->play();

			amnt_enemy--;
			hp -= rand(20, 25);
			ar[pers.Y][pers.X] = 0;
		}
		// Лекарство
		else if (ar[pers.Y][pers.X] == 4) {
			//OutputStreamPtr life_swnd = OpenSound(device, "life.mp3", false);
			//life_swnd->setVolume(0.75f);
			//life_swnd->play();

			count_cf = 10;
			if (hp < 100 && hp > 0) {
				hp += 5;
				ar[pers.Y][pers.X] = 0;
			}
			else {
				hp = 100;
				ar[pers.Y][pers.X] = 0; // КАК СДЕЛАТЬ ТАК ЧТО БЫ ОСТАВАЛСЯ ЭЛЕМЕНТ?????
			}
		}
		// Кофе
		else if (ar[pers.Y][pers.X] == 5) {
			//OutputStreamPtr coffee_swnd = OpenSound(device, "coffee.mp3", false);
			//coffee_swnd->setPitchShift(1.25);
			//coffee_swnd->setVolume(0.5f);
			//coffee_swnd->play();

			if (count_cf <= 0 && energy > 0) {
				energy += 25;
				ar[pers.Y][pers.X] = 0; // КАК СДЕЛАТЬ ТАК ЧТО БЫ ОСТАВАЛСЯ ЭЛЕМЕНТ?????
			}
			else if (count_cf > 0) {
				ar[pers.Y][pers.X] = 0;
			}
		}

		SetConsoleCursorPosition(h, pers);
		SetConsoleTextAttribute(h, 15);
		cout << (char)2;

		////////////////////////////// Лог информации

		COORD log;
		log.X = 0;
		log.Y = height + 1;
		SetConsoleCursorPosition(h, log);
		SetConsoleTextAttribute(h, 15);

		cout << "NEED BTC: " << money << endl;
		cout << "      HP: " << hp << "%" << endl;
		cout << "  ENERGY: " << energy << endl;
		cout << "  COFFEE: " << count_cf << endl;
		cout << "   ENEMY: " << count_enmy << endl;

		//////////////////////////// УСЛОВИЯ

		// WIN
		if (pers.X == width - 1 && pers.Y == height - 5) { // Выход
			system("cls");
			MessageBox(0, "You get exit and y WIN!!!", "", MB_OK);
			break;
		}
		else if (money == 0) { // Деньги
			system("cls");
			MessageBox(0, "You collect all coins and y WIN!!!", "", MB_OK);
			break;
		}
		else if (amnt_enemy == 0) { // Все враги убиты
			system("cls");
			MessageBox(0, "You kill them all and y WIN!!!", "", MB_OK);
			break;
		}

		// LOSE
		if (hp <= 0) { // Потерял ХП
			system("cls");
			MessageBox(0, "You DIE!!!", "", MB_OK);
			break;
		}
		else if (energy <= 0) { // Потерял энергию
			system("cls");
			MessageBox(0, "You get lost y ENERGY and DIE!!!", "", MB_OK);
			break;
		}
	}
	Sleep(INFINITE);
}