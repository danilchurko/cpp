#include "myoptions.h"

void condit_p2_task1()
{    // #1 Parallel X or Y;
	window();
	int x1;
	int y1;
	int x2;
	int y2;

	cout << "Write 1 point (x,y): " << endl;
	cin >> x1;
	cin >> y1;

	cout << "Write 2 point (x,y): " << endl;
	cin >> x2;
	cin >> y2;

	if (x1 == x2 && y1 == y2) {
		cout << "Points match" << endl;
	}
	else if (x1 == x2) {
		cout << "Parallel in Y" << endl;
	}
	else if (y1 == y2) {
		cout << "Parallel in X" << endl;
	}
	else {
		cout << "Not parallel to any of them" << endl;
	}

	Sleep(3000);
	system("cls");
	condit_p2_task1();
}

void condit_p2_task2() 
{    // #2 Contain .00 or not
	window();
	double a;
	cout << "Write any number: ";
	cin >> a;

	a = a - int(a);

	if (a != 0) {
		cout << "Contain .00" << endl;
	}
	else {
		cout << "Doesn't contain .00" << endl;
	}

	Sleep(3000);
	system("cls");
}

void condit_p2_task3() 
{    // #3 Number in name days in week
	window();
	int a;

	cout << "Write the number of the day: ";
	cin >> a;

	if (a > 0 && a <= 7) {
		switch (a) {
			case 1:
			{
				cout << "Monday" << endl;
				break;
			}
			case 2:
			{
				cout << "Tuesday" << endl;
				break;
			case 3:
			{
				cout << "Wednesday" << endl;
				break;
			}
			case 4:
			{
				cout << "Thursday" << endl;
				break;
			}
			case 5:
			{
				cout << "Friday" << endl;
				break;
			}
			case 6:
			{
				cout << "Saturday" << endl;
				break;
			}
			case 7:
			{
				cout << "Sunday" << endl;
				break;
			}
			}
		}
	}
	else {
		cout << "!!!ERROR!!!" << endl;
	}

	Sleep(3000);
	system("cls");
}

void condit_p2_task4() 
{    // #4 Correct time or not
	window();

	double hh;
	double mm;
	double ss;

	cout << "Write the time (hh.mm.ss): " << endl;
	cin >> hh;
	cin >> mm;
	cin >> ss;

	if (hh >= 0 && hh < 24) {
		if (mm >= 0 && mm < 60) {
			if (ss >= 0 && ss < 60) {
				cout << "Time correct" << endl;
			}
			else {
				cout << "Incorrect time" << endl;
			}
		}
		else {
			cout << "Incorrect time" << endl;
		}
	}
	else {
		cout << "Incorrect time" << endl;
	}

	Sleep(3000);
	system("cls");
}

void condit_p2_task5() 
{    // #5 Lucky ticket
	window();
	int a;
	cout << "Write the ticket number: ";
	cin >> a;

	int n1 = a / 100000;
	int n2 = a / 10000 % 10;
	int n3 = a / 1000 % 10;

	int sum1 = n1 + n2 + n3;

	int n4 = a / 100 % 10;
	int n5 = a / 10 % 10;
	int n6 = a % 10;

	int sum2 = n4 + n5 + n6;

	if (sum1 == sum2) {
		cout << "Lucky ticket!" << endl;
	}
	else {
		cout << "Not lucky!" << endl;
	}

	Sleep(3000);
	system("cls");
}

void condit_p2_task6() 
{    // #6 Good what?
	window();
	int t;
	cout << "Write the time: ";
	cin >> t;

	if (t >= 0 && t <= 4 || t == 24) {
		cout << "Good night!" << endl;
	}
	else if (t > 4 && t <= 11) {
		cout << "Good morning!" << endl;
	}
	else if (t > 11 && t <= 16) {
		cout << "Good day!" << endl;
	}
	else if (t > 16 && t <= 23) {
		cout << "Good evening!" << endl;
	}
	else {
		cout << "!!!ERROR!!!" << endl;
	}
}

void condit_p2_task7() 
{    // #7 Ideal weight
	window();
	double w;
	double h;
	double i;
	int var;

	cout << "Write your weight: ";
	cin >> w;
	cout << "Write your height: ";
	cin >> h;
	cout << "Mele (1) / Female (2): ";
	cin >> var;
	cout << endl;

	if (var == 1) {
		i = h - 100;
		cout << "Your ideal weight - " << i << " kg" << endl;
		if (i > w) {
			cout << "You must rich - " << i - w << " kg" << endl;
		}
		else if (i < w) {
			cout << "You must lose - " << w - i << " kg" << endl;
		}
		else if (i == w) {
			cout << "You have ideal weight!!!" << endl;
		}
	}
	else if (var == 2) {
		i = h - 110;
		cout << "Your ideal weight - " << i << " kg" << endl;
		if (i > w) {
			cout << "You must rich - " << i - w << " kg" << endl;
		}
		else if (i < w) {
			cout << "You must lose - " << w - i << " kg" << endl;
		}
		else if (i == w) {
			cout << "You have ideal weight!!!" << endl;
		}
	}
	else {
		cout << "!!!ERROR!!!" << endl;
	}
}

void condit_p2_task8() 
{    // #8 Next day & correct date
	int d, m, y;
	cout << "Enter date:" << endl;
	cout << endl;
	cout << "Day: ";
	cin >> d;
	cout << "Month: ";
	cin >> m;
	cout << "Year: ";
	cin >> y;

	bool correct = false;

	if (d > 0 && d <= 31 && m > 0 && m <= 12)
	{
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d <= 31 && d > 0)
				correct = true;
			break;
		case 2:
			if ((d > 0 && d <= 29 && y % 4 == 0) || (d > 0 && d <= 28 && y % 4 != 0))
				correct = true;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (d > 0 && d <= 30)
				correct = true;
			break;

		default:
			break;
		}
	}
	if (correct = false) {
			cout << "Incorrect date!" << endl;
		}
	else {
		if (d == 31 && m == 12)
		{
			d = 1;
			m = 1;
			y++;
		}
		else if (
			(d == 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10))
			|| (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11))
			|| (m == 2 && (d == 28 || d == 29))
			)
		{
			m++;
			d = 1;
		}
		else {
			d++;
		}
		cout << "Date correct" << endl;
		cout << endl;
		cout << "Next - " << d << " day " << m << " month " << y << " year" << endl;
	}
}

void condit_p2_task9() 
{    // #9 Sounds of animal
	window();
	int a;

	cout << "   Pilikan (1)" << endl;
	cout << "    Yaguar (2)" << endl;
	cout << "  Edinorog (3)" << endl;
	cout << "    Dragon (4)" << endl;
	cout << "   Pikachu (5)" << endl;
	cout << "     Fenix (6)" << endl;
	cout << "       Kid (7)" << endl;
	cout << "Your maind (8)" << endl;
	cout << "  Dinozavr (9)" << endl;
	cout << " Sisadmin (10)" << endl;
	cout << endl;

	cout << "Which animal you whant to hear?: ";
	cin >> a;

	if (a > 0 && a <= 10) {
		switch (a) {
		case 1:
		{
			cout << "Pipipipipii" << endl;
			break;
		}
		case 2:
		{
			cout << "Gde eta antilopa!!!" << endl;
			break;
		}
		case 3:
		{
			cout << "Love radugu :)" << endl;
			break;
		}
		case 4:
		{
			cout << "Oh god it's fire in my mouth!!!" << endl;
			break;
		}
		case 5:
		{
			cout << "PIKACHHHHUUUUUUUUUUUUUUUU" << endl;
			break;
		}
		case 6:
		{
			cout << "Oh my, again..." << endl;
			break;
		}
		case 7:
		{
			cout << "Asda,0hjj834e(=i#&sf@#$$^sdfg--fv9!!!a@#=-+$dfg!@#a$^1" << endl;
			break;
		}
		case 8:
		{
			cout << "I want ..." << endl;
			break;
		}
		case 9:
		{
			cout << "Oh f**k, eto METIORIT..." << endl;
			break;
		}
		case 10:
		{
			cout << "I have T-34 and other, what about you???" << endl;
			break;
		}
		}
	}
	else {
		cout << "!!!ERROR!!!" << endl;
	}
}

void condit_p2_task10() 
{    // #10 Who want to be a milioner!
	window();
	int var;

	cout << "Hi! It's game \"Who want to be a milioner!\"" << endl;
	Sleep(1000);
	cout << "You whant to play? (Yes - 1 / No - 2)" << endl;
	cin >> var;

	if (var == 1) {
		cout << "Okey! Let's start!" << endl;
		Sleep(1000);
		system("cls");
		cout << "Your first question..." << endl;
		Sleep(2000);
		cout << endl;
		cout << "In what year city Odessa was founded?" << endl;
		cout << endl;
		cout << "     (1) 1794" << endl;
		cout << "     (2) 1872" << endl;
		cout << "     (3) 1915" << endl;
		cout << "     (4) 1704" << endl;
		cout << endl;
		cout << "Your answer - ";
		cin >> var;
		system("cls");

		cout << "This is..." << endl;
		Sleep(3000);
		system("cls");

		if (var == 1) {
			cout << "This is the correct answer! You win 10,000$" << endl;
			cout << "Go ahead or will you take the money? (Next - 1 / Take money - 2)" << endl;
			cin >> var;

			if (var == 1) {
				cout << "Okey! Let's continue!" << endl;
				Sleep(1000);
				system("cls");
				cout << "Your second question..." << endl;
				Sleep(2000);
				cout << endl;
				cout << "Who was the first president of Ukraine?" << endl;
				cout << endl;
				cout << "     (1) Yanukovych" << endl;
				cout << "     (2) Kuchma" << endl;
				cout << "     (3) Kravchuk" << endl;
				cout << "     (4) Zelensky" << endl;
				cout << endl;
				cout << "Your answer - ";
				cin >> var;
				system("cls");

				cout << "This is..." << endl;
				Sleep(3000);
				system("cls");

				if (var == 3) {
					cout << "This is the correct answer! You win 50,000$" << endl;
					cout << "Go ahead or will you take the money? (Next - 1 / Take money - 2)" << endl;
					cin >> var;

					if (var == 1) {
						cout << "Okey! Let's continue!" << endl;
						Sleep(1000);
						system("cls");
						cout << "Your third question..." << endl;
						Sleep(2000);
						cout << endl;
						cout << "In what year was the first Z1 computer built?" << endl;
						cout << endl;
						cout << "     (1) 1895" << endl;
						cout << "     (2) 1935" << endl;
						cout << "     (3) 1985" << endl;
						cout << "     (4) 1965" << endl;
						cout << endl;
						cout << "Your answer - ";
						cin >> var;
						system("cls");

						cout << "This is..." << endl;
						Sleep(3000);
						system("cls");

						if (var == 2) {
							cout << "This is the correct answer! You win 1,000,000$!!!!" << endl;
							cout << "And now you are a millioner!" << endl;
						}
						else {
							cout << "Sorry, but this isn't correct answer. You lose :(" << endl;
						}
					}
					else if (var == 2) {
						cout << "Ok! We will send your money. Goodbye!" << endl;
					}
				}
				else {
					cout << "Sorry, but this isn't correct answer. You lose :(" << endl;
				}
			}
			else if (var == 2) {
				cout << "Ok! We will send your money. Goodbye!" << endl;
			}
			else {
				cout << "ERROR" << endl;
			}
		}
		else {
			cout << "Sorry, but this isn't correct answer. You lose :(" << endl;
		}
	}
	else if (var == 2) {
		cout << "Ok... Bye..." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}
}

void condit_p2_task11() 
{    // #11 The weather forecast for tomorrow
	window();
	double c;

	cout << "Write what temperature is now: ";
	cin >> c;

	if (c < -40 && c >= -60) {
		cout << "It's OCHEN' moroz now" << endl;
	}
	else if (c < -20 && c >= -40) {
		cout << "It's moroz now" << endl;
	}
	else if (c <= 0 && c >= -20) {
		cout << "It's holodno now" << endl;
	}
	else if (c > 0 && c <= 20) {
		cout << "It's teplo now" << endl;
	}
	else if (c > 20 && c <= 40) {
		cout << "It's jarko now" << endl;
	}
	else if (c > 40 && c <= 60) {
		cout << "It's OCHEN' jarko now" << endl;
	}
	else {
		cout << "Write temperature diaposon from -60 to +60" << endl;
	}

	cout << endl;
	cout << "The weather forecast for tomorrow:" << endl;
	cout << endl;
	cout << "   Temperature" << endl;
	cout << "      - 20 C" << endl;
	cout << "   Chance of precipitation" << endl;
	cout << "      - 10%" << endl;
	cout << "   Wind speed" << endl;
	cout << "      - 11 km/h" << endl;
	cout << "   Water temperature in the Black Sea" << endl;
	cout << "      - 16.3 C" << endl;
}

void condit_p2_task12() 
{    // #12 Divination
	int rd;
	string a;

	cout << "Write your question:" << endl;
	cin >> a;

	rd = 1 + rand() % 20;

	switch (rd) {
		case 1: {
			cout << "It is certain" << endl;
			break;
		}
		case 2: {
			cout << "It is decidedly so" << endl;
			break;
		}
		case 3: {
			cout << "Without a doubt" << endl;
			break;
		}
		case 4: {
			cout << "Yes — definitely" << endl;
			break;
		}
		case 5: {
			cout << "You may rely on it" << endl;
			break;
		}
		case 6: {
			cout << "Reply hazy, try again" << endl;
			break;
		}
		case 7: {
			cout << "Ask again later" << endl;
			break;
		}
		case 8: {
			cout << "Better not tell you now" << endl;
			break;
		}
		case 9: {
			cout << "Cannot predict now " << endl;
			break;
		}
		case 10: {
			cout << "Concentrate and ask again" << endl;
			break;
		}
		case 11: {
			cout << "As I see it, yes" << endl;
			break;
		}
		case 12: {
			cout << "Most likely" << endl;
			break;
		}
		case 13: {
			cout << "Outlook good" << endl;
			break;
		}
		case 14: {
			cout << "Signs point to yes" << endl;
			break;
		}
		case 15: {
			cout << "Yes" << endl;
			break;
		}
		case 16: {
			cout << "Don’t count on it" << endl;
			break;
		}
		case 17: {
			cout << "My reply is no" << endl;
			break;
		}
		case 18: {
			cout << "My sources say no" << endl;
			break;
		}
		case 19: {
			cout << "Outlook not so good" << endl;
			break;
		}
		case 20: {
			cout << "Very doubtful" << endl;
			break;
		}
	}
}

void condit_p2_task13() 
{    // #13 Goroskop
	int dd;
	int mm;

	cout << "Write day & month of your birth" << endl;
	cout << endl;
	cout << "Day: ";
	cin >> dd;
	cout << "Month: ";
	cin >> mm;

	if (dd > 0 && dd > 20 && dd <= 31 && mm > 0 && mm == 3 || dd > 0 && dd < 21 && mm > 0 && mm == 4) {
		cout << endl;
		cout << "OVEN" << endl;
		cout << endl;
		cout << "For you, the month will be generally favorable. However, if you want to be careful, teaspoons may very well ruin this copper book. The stars will take care of you. In the middle of the month caries is possible. Enuresis is unlikely. A timely visit to a doctor or astrologer will save you from many problems. Jupiter enters the Sagittarius house, so keep your feet warm and clean. At the end of the month financial difficulties are possible in the form of salary delays. However, if you have a boss, you will be given a salary. Fear nothing, fear one. You know what. The famous priest Bender Bey, the son of Krepysh, predicted 70 years ago that the West would help you. Today this prediction may come true." << endl;
	}
	else if (dd > 0 && dd > 20 && dd <= 30 && mm > 0 && mm == 4 || dd > 0 && dd < 21 && mm > 0 && mm == 5) {
		cout << endl;
		cout << "TELEC" << endl;
		cout << endl;
		cout << "Next month, especially sugar. Be prepared to push your horns and moo. Stars say helps. The beginning of the month is difficult, the middle is lousy, the end is just a crown to everything. Small handouts of fate in the form of a salary will cause only a sad grunt. Make supplies for rainy day and white night. Dry the crackers. Soak them in wine. Dry again. Then throw it away. This has a beneficial effect on the liver. This month your headache is your sore spot. Do not forget to wash and scratch it. The sun enters the sign of Taurus. At the end of the month you were offered to go on unpaid leave. Feel free to demand payment. The stars are on your side. On the personal front, no change, protracted positional battles. Change location, settle in the garage. Science knows of cases where this helped." << endl;
	}
	else if (dd > 0 && dd > 20 && dd <= 31 && mm > 0 && mm == 5 || dd > 0 && dd < 22 && mm > 0 && mm == 6) {
		cout << endl;
		cout << "BLIZNEC" << endl;
		cout << endl;
		cout << "Gemini will have a very good month. Only the Twins will not understand and appreciate this. This month will seem dull and hateful to them. Our advice to Gemini is to fight. With myself and with each other. One of you will certainly win. In transport - neither one nor the other. Walk more, strengthen the ankle. It is very useful to delve into the garden. No garden - delve into yourself. Will definitely be with the harvest. Financial affairs are on top. Height is quite unattainable. In general, everything is so good that at least drown. Do not rush to drown, wait for freezing, then the stars will be on your side. Beware of piercing and cutting objects such as knives, nail files, circular saws and mother tongue. Time at the end of the month is good for self-deepening. Do not go deep - you get dirty. On the 30th, your millionaire aunt will die in America. She will not remember about you." << endl;
	}
	else if (dd > 0 && dd > 21 && dd <= 30 && mm > 0 && mm == 6 || dd > 0 && dd < 23 && mm > 0 && mm == 7) {
		cout << endl;
		cout << "RAK" << endl;
		cout << endl;
		cout << "For Cancer, the next month is the month of discovery. Very favorable for finding friends. This is a new friend, but worse than the new three. Crayfish when crossing the street. Cancer runs the risk of being crushed by an asphalt roller. It is also recommended to avoid beer bars and wineglasses - eaten alive. In the second decade, interest in sex wakes up, but quickly falls asleep again. Craving for knowledge will be weak, craving for alcohol - strong. Do a spring cleaning in the apartment, throw out the trash, scout, paint the walls, change the floor and start life anew. Maybe you will succeed. At the end of the month, mild problems with allergic reactions are possible. You will not surprise anyone." << endl;
	}
	else if (dd > 0 && dd > 22 && dd <= 31 && mm > 0 && mm == 7 || dd > 0 && dd < 24 && mm > 0 && mm == 8) {
		cout << endl;
		cout << "LEV" << endl;
		cout << endl;
		cout << "Hope it will be something red and walk the streets. You will learn a lot about yourself. Then go to the rally. You won’t recognize yourself. You will be rich. At work, you will find an increase in voice from the boss. Bark back - the stars say helps. Ask for a salary increase right away. They will not give, of course, but you will receive great moral satisfaction. Sports achievements in running for 15 km. Take risks with your health, you may win. If you find a racetrack in the city, play horse racing, but don't lose much. At the end of the month, you suddenly let go of feelings. It is possible to tone up in the morning or after heavy libations. Seize the moment, the stars are on your side." << endl;
	}
	else if (dd > 0 && dd > 23 && dd <= 31 && mm > 0 && mm == 8 || dd > 0 && dd < 24 && mm > 0 && mm == 9) {
		cout << endl;
		cout << "DEVA" << endl;
		cout << endl;
		cout << "On the 5th, 12th and 17th of Virgo will fall into the financial hole. Moreover, in the same. In order not to beat your feet in vain. Relatives will give Virgo a helping hand, but by no means disinterestedly. Do not give them hands, fasten. Those who have not yet lost their innocence, lost it on the 27th at 19.30, sitting in front of the TV alone and invisibly. The rest is not threatened. Saturn is almost invisible, so read the ads on the pillars - you will find the narrowed-mummers. Lose it on the 28th imperceptibly. Very successful negotiations and the conclusion of long-term contracts. Mars. Listen to classical music more and eat chocolate. Very useful at any time of the year." << endl;
	}
	else if (dd > 0 && dd > 23 && dd <= 30 && mm > 0 && mm == 9 || dd > 0 && dd < 24 && mm > 0 && mm == 10) {
		cout << endl;
		cout << "VESY" << endl;
		cout << endl;
		cout << "Weights favors the stars. True, a little sense in this. For the apartment and the phone you still have to pay. In the first decade of the month, a salary will be unexpectedly distributed. Put her on charitable goals. For example, give it to your wife. Stars recommend being closer to nature. Walk naked through the woods, pick up leaves, go to the pub, drink beer. In the second decade of the month you will be overcome by boredom. Fight. Collect a couple of bags of empty bottles and try to hand them over to buy non-ferrous metals. Learn a lot about yourself. It will entertain you a little. This month is a month of intense brain activity for Libra. In order for this activity not to go unnoticed by others, invent something, for example, a five-wheeled bicycle. Or wheelless. Then burn the drawings. There will be something to tell grandchildren in old age." << endl;
	}
	else if (dd > 0 && dd > 23 && dd <= 31 && mm > 0 && mm == 10 || dd > 0 && dd < 23 && mm > 0 && mm == 11) {
		cout << endl;
		cout << "SKORPION" << endl;
		cout << endl;
		cout << "The month for Scorpions starts well, and ends a little better. This is a month of unrealizable fantasies and misplaced deeds. Just live this month. Lived - good. Not lived - even better. Do not die next month. The first decade of the month is the time of accomplishment. Buy seven tons of manure for the garden and drag it with buckets for 200-300 meters. It will entertain you a bit. Finally, clean the fan pipes in the toilet. You will be better off. The second decade is a time of reflection. Think about the future of your children and how to avoid it. Take validol and valerian. Don’t think about it anymore. Think about health. The final decade of November is a time of contemplation. Watch TV more. Do not forget to turn it on. Gullibility will increase, so do not buy advertising. See Aunt Asya - show her the cookie. Stars say helps." << endl;
	}
	else if (dd > 0 && dd > 22 && dd <= 30 && mm > 0 && mm == 11 || dd > 0 && dd < 22 && mm > 0 && mm == 12) {
		cout << endl;
		cout << "STRELEC" << endl;
		cout << endl;
		cout << "Sagittarius should not be afraid of this month, it will go unnoticed. Wake up in the morning, and the next month. In the first decade, appetite and radiculitis will play out. Do not fight. Stars are not on your side. Eat tightly and wrap yourself tightly. Astrology and medicine are powerless here. This all will not pass until death. Numbers 10-12th awaits you unheard of luck, an empty wallet will be stolen from you at work. Celebrate this event with colleagues. Who will not have fun is that thief. But at the end of the second decade of the month, trouble awaits you. For example, you will find the stash of three years ago. Fifty thousand old that will not be accepted anywhere. Read more at the end of the month, you will fall asleep faster, and this is useful for the body as a whole. Write letters to relatives. Then burn. It will entertain you a bit. Call your parents." << endl;
	}
	else if (dd > 0 && dd > 21 && dd <= 31 && mm > 0 && mm == 12 || dd > 0 && dd < 21 && mm > 0 && mm == 1) {
		cout << endl;
		cout << "KOZEROG" << endl;
		cout << endl;
		cout << "For Capricorn, this month is a time of gain and loss. Stars do not specify whether the old horns will be broken off, or new ones will be instructed. Be prepared for both options at the same time. In the first ten days of the month, make supplies, pickle cucumbers, and pickle mushrooms. They will be stored for a long time, since you do not have to eat them. Your appetite will be completely lost. Listen to your inner voice more often - you will learn a lot about yourself. It will entertain you a bit. Do something. Cook up a ratsuha, look at porn, compose chernukha. But do not get carried away very much. In the second decade of the month they will try to cut you. Fight. Do not be a Taurus, seek help from a union. He will help you, and in the third decade, attempts to reduce will gradually cease. Celebrate this with relatives and sympathizers." << endl;
	}
	else if (dd > 0 && dd > 20 && dd <= 30 && mm > 0 && mm == 1 || dd > 0 && dd < 21 && mm > 0 && mm == 2) {
		cout << endl;
		cout << "VODOLEY" << endl;
		cout << endl;
		cout << "The next month for Aquarius is the time of libations. They expect Aquarius in the first decade and will hardly end in the third. Fight. There will be something to tell grandchildren in old age. Conflicts with the police over trifles are possible. Do not pay attention, the stars are on your side, although the law is on the side of the police. In the sky, the confrontation between Mars and Venus, victory, as always, friendship. There is an increased likelihood of being deceived by someone with a red or dyed brunette. Go to church, light a candle. The likelihood of experiencing withdrawal problems also increases. Go to the proctologist, put a candle. It will entertain you a little. In the last decade you will be drawn to shamelessness and perverted perversions. Fight. You will be defeated - endure. Remember the donkey: he endured and ordered us." << endl;
	}
	else if (dd > 0 && dd > 20 && dd <= 31 && mm > 0 && mm == 2 || dd > 0 && dd < 21 && mm > 0 && mm == 3) {
		cout << endl;
		cout << "RYBA" << endl;
		cout << endl;
		cout << "Pisces has a thin financial trickle in the first decade of the month will turn into a stormy stream. Be careful, otherwise this stream can take away all the money and valuables from the house. Do not play on the stock exchange, this is vanity. Do not play with matches either - you will play too much. Do not listen to politicians - listen. Do not dream of glory - dreaming. Generally, be moderate. The second decade of the month is decisive. Take everything that has been put off for a rainy day, he came. Spend it all slowly and with pleasure. Think about whether it’s time to change your place of work, and then throw these thoughts out of your head. Repeat this exercise 5-6 times a day. The end of the month is the time for exaltation. Look in the dictionary what it is and indulge in it with all the passion. Then cry a little. Having wiped away the tears, go to the Adelaide website, where such wonderful horoscopes are published. The stars are on your side of the street." << endl;
	}
	else {
		cout << "ERROR" << endl;
	}
}

void condit_p2_task14() 
{    // #14 Han invest
	const double nds = 0.8;

	double hen;
	double cost;
	double pc_week;
	double ten;

	cout << "Amount of hens: ";
	cin >> hen;
	cout << "Cost of 1 hen: ";
	cin >> cost;
	cout << "How many eggs per week per 1 chicken: ";
	cin >> pc_week;
	cout << "Cost of ten eggs: ";
	cin >> ten;

	double invest = hen * cost;
	pc_week = pc_week * hen;
	double income_month = (((pc_week / 10) * ten) * nds) * 4;
	double payback_month = invest / income_month;
	payback_month = round(payback_month * 10) / 10;

	cout << endl;
	cout << "                   Invest - " << invest << endl;
	cout << "            Eggs per week - " << pc_week << endl;
	cout << "Income + 20 % NDS (month) - " << income_month << endl;
	cout << "                  Payback - " << payback_month << " month" << endl;
}