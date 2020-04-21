#include "myoptions.h"

int start()
{
	HWND hwnd = GetConsoleWindow();
	HDC title = GetDC(hwnd);
	HDC txt = GetDC(hwnd);
	HDC tmmark = GetDC(hwnd);

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	// ������� ������������ ��������� �������
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100;
	SetConsoleCursorInfo(h, &cursor);

	LOGFONT title_txt; // ��������� ����������� ������
	title_txt.lfHeight = 200;// ������ ��������
	title_txt.lfEscapement = 0;// ���� ����� �������� ������� � ���� X ����������
	title_txt.lfWeight = 0;// ������� ������ � ��������� �� 0 �� 1000
	title_txt.lfItalic = false;// ��������� �����
	title_txt.lfUnderline = false;// ������������ �����
	title_txt.lfStrikeOut = false;// ����������� �����
	lstrcpy(title_txt.lfFaceName, "IMPACT");// �������� ������

	SetTextColor(title, RGB(30, 135, 120)); // ���� ������
	SetBkColor(title, RGB(0, 0, 0)); // ���� ����

	SelectObject(title, CreateFontIndirect(&title_txt)); // ����� ������� � ����������� �����������
	TextOutA(title, 175, 150, "CIRCLE BOB", 10); // ����� ������ �� ����� � ����� 50, 50
	ReleaseDC(hwnd, title);

	LOGFONT menu_txt; // ��������� ����������� ������
	menu_txt.lfHeight = 20; // ������ ��������
	menu_txt.lfEscapement = 0; // ���� ����� �������� ������� � ���� X ����������
	menu_txt.lfWeight = 0; // ������� ������ � ��������� �� 0 �� 1000
	menu_txt.lfItalic = false; // ��������� �����
	menu_txt.lfUnderline = false; // ������������ �����
	menu_txt.lfStrikeOut = false;
	lstrcpy(menu_txt.lfFaceName, "Helvetica");

	SetTextColor(txt, RGB(255, 255, 255)); // ���� ������
	SetBkColor(txt, RGB(0, 0, 0)); // ���� ����

	SelectObject(txt, CreateFontIndirect(&menu_txt)); // ����� ������� � ����������� �����������
	TextOutA(txt, 450, 335, "Press any key to continue...", 28); // ����� ������ �� ����� � ����� 50, 50
	ReleaseDC(hwnd, txt);

	LOGFONT version_txt; // ��������� ����������� ������
	version_txt.lfHeight = 17; // ������ ��������
	version_txt.lfEscapement = 0; // ���� ����� �������� ������� � ���� X ����������
	version_txt.lfWeight = 0;// ������� ������ � ��������� �� 0 �� 1000
	version_txt.lfItalic = false;// ��������� �����
	version_txt.lfUnderline = false;// ������������ �����
	version_txt.lfStrikeOut = false;
	lstrcpy(version_txt.lfFaceName, "Arial");

	SetTextColor(tmmark, RGB(255, 255, 255)); // ���� ������
	SetBkColor(tmmark, RGB(0, 0, 0)); // ���� ����

	SelectObject(tmmark, CreateFontIndirect(&version_txt)); // ����� ������� � ����������� �����������
	TextOutA(tmmark, 25, 520, "V 1.0", 5); // ����� ������ �� ����� � ����� 50, 50
	ReleaseDC(hwnd, tmmark);

	_getch();

	return 0;
}

int cercle_bob()
{
	window();

	// ���������� ��������� � ����� ���� �������
	system("title Cercle Bob");

	//OutputStreamPtr bg = OpenSound(device, "backg.mp3", true);
	//bg->setVolume(0.1f);
	//bg->setRepeat(true);
	//bg->play();

	start();

	// ���������� ����������� ����� ���� ��� ������ � ������ ��� ����
	system("color 07");

	// ����� ���� � �������, ����� ��� ����������� � ��
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	// ������� ������������ ��������� �������
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = false;
	cursor.dwSize = 100;
	SetConsoleCursorInfo(h, &cursor);

	// ������ ��������� ��������� ��������� �����
	srand((unsigned)time(0));
	rand();

	//////////////////////////////////////////////////// ��������� �����

	// ��������� �������� � �������� ���� �������
	const int height = 20; // ������ �������
	const int width = 50; // ������ �������
	int ar[height][width] = {}; // ���� �������

	int amnt_money = 0;
	int amnt_enemy = 0;

	int hp = 100;
	int energy = 500;

	int count_cf = 0; // ������� ��� ��������� � ����
	int count_enmy = 0; // ������� �������� ������

	// ���������� ������� (��������) � �����������
	for (int y = 0; y < height; y++) // ������� �����
	{
		for (int x = 0; x < width; x++) // ������� ��������
		{
			// 0 - empty
			// 1 - wall
			// 2 - money
			// 3 - enemy
			// 4 - drug
			// 5 - coffee

			ar[y][x] = rand(0, 5);

			// �������� �� �����!!!
			if (x == 0 || y == 0 || x == width - 1 || y == height - 1) ar[y][x] = 1;
			if (x == 1 && y == 1) ar[y][x] = 0;

			// ���� ����������� ����
			if (ar[y][x] == 3)
			{
				// ��������� ���-�� � x10 ���
				int prob = rand() % 10;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}
			else if (ar[y][x] == 4)
			{
				// ��������� ���-�� � x25 ���
				int prob = rand() % 25;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}
			else if (ar[y][x] == 5)
			{
				// ��������� ���-�� � x40 ���
				int prob = rand() % 40;
				if (prob != 0)
				{
					ar[y][x] = 0; // hall
				}
			}

			// ������ ������ ��� ������
			ar[height - 5][width - 1] = 9; // ������ ������
			ar[height - 5][width - 2] = 0;
			ar[height - 5][width - 3] = 0;

			// ������ ������ �� ���������
			ar[1][2] = 0;
			ar[2][2] = 0;
			ar[2][1] = 0;
			ar[1][3] = 0;
			ar[3][3] = 0;
			ar[3][1] = 0;

			// ����������� ���������
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

			if (ar[y][x] == 2) { // ������� ������
				amnt_money++;
			}
			else if (ar[y][x] == 3) { // ������� ������
				amnt_enemy++;
			}

			// ������ ������
			else if (ar[y][x] == 9) {
				SetConsoleTextAttribute(h, 10);
				cout << (char)176;
			}
		}
		cout << "\n";
	}

	////////////////////////////////////////////// �������� ���������

	int money = amnt_money; // ������� ����� ����� ��� �� ��������

	//���������� ���������
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

		// ������� ����� ������
		if (count_enmy > 10) {
			count_enmy = 0;
		}

		//OutputStreamPtr step_swnd = OpenSound(device, "step.mp3", false);
		//step_swnd->setVolume(1.0f);

		//������� �������� ���������
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
			// ������� �����
			energy -= 10;
		}

		//������� �����
		if (ar[pers.Y][pers.X] == 2) {
			//OutputStreamPtr money_swnd = OpenSound(device, "money.mp3", false);
			//money_swnd->setVolume(0.5f);
			//money_swnd->play();

			money--;
			ar[pers.Y][pers.X] = 0;
		}
		// ����
		else if (ar[pers.Y][pers.X] == 3) {
			//OutputStreamPtr enemy_swnd = OpenSound(device, "kick.mp3", false);
			//enemy_swnd->setVolume(0.4f);
			//enemy_swnd->play();

			amnt_enemy--;
			hp -= rand(20, 25);
			ar[pers.Y][pers.X] = 0;
		}
		// ���������
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
				ar[pers.Y][pers.X] = 0; // ��� ������� ��� ��� �� ��������� �������?????
			}
		}
		// ����
		else if (ar[pers.Y][pers.X] == 5) {
			//OutputStreamPtr coffee_swnd = OpenSound(device, "coffee.mp3", false);
			//coffee_swnd->setPitchShift(1.25);
			//coffee_swnd->setVolume(0.5f);
			//coffee_swnd->play();

			if (count_cf <= 0 && energy > 0) {
				energy += 25;
				ar[pers.Y][pers.X] = 0; // ��� ������� ��� ��� �� ��������� �������?????
			}
			else if (count_cf > 0) {
				ar[pers.Y][pers.X] = 0;
			}
		}

		SetConsoleCursorPosition(h, pers);
		SetConsoleTextAttribute(h, 15);
		cout << (char)2;

		////////////////////////////// ��� ����������

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

		//////////////////////////// �������

		// WIN
		if (pers.X == width - 1 && pers.Y == height - 5) { // �����
			system("cls");
			MessageBox(0, "You get exit and y WIN!!!", "", MB_OK);
			break;
		}
		else if (money == 0) { // ������
			system("cls");
			MessageBox(0, "You collect all coins and y WIN!!!", "", MB_OK);
			break;
		}
		else if (amnt_enemy == 0) { // ��� ����� �����
			system("cls");
			MessageBox(0, "You kill them all and y WIN!!!", "", MB_OK);
			break;
		}

		// LOSE
		if (hp <= 0) { // ������� ��
			system("cls");
			MessageBox(0, "You DIE!!!", "", MB_OK);
			break;
		}
		else if (energy <= 0) { // ������� �������
			system("cls");
			MessageBox(0, "You get lost y ENERGY and DIE!!!", "", MB_OK);
			break;
		}
	}
	Sleep(INFINITE);
}