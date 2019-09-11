#include <iostream>
#include <windows.h>

using namespace std;

//namespace Danil {
//	int a = 5;
//}
//using namespace Danil;

int main() //(int args, char* argv[])
{
	int cats;
	cout << "Enter amount of cats:";
	cin >> cats;

	double price; // 15 знаков после точки. 8 Байт памяти.
																	// float price_elit = 19.15
																	// 7 знаков после точки. 4 Байт памяти.
	cout << "Enter price 1pc korma:";
	cin >> price;

	int pack;
	cout << "Enter amount of packs per day at cat:";
	cin >> pack;

	int total_pack = cats * pack;
	int total_price = total_pack * price;

	cout << "\n";

	int total_price_month = total_price * 30;
	cout << "Price per month: " << total_price_month << " grn\n";
	int total_price_year = total_price * 365;
	cout << "Price per year: " << total_price_year << " grn\n";

	cout << "\n";

	int dollar;
	cout << "Write curs dollara:";
	cin >> dollar;

	double total_price_$ = total_price_year / dollar;
	cout << "In dollaras per year: " << total_price_$ << " $";

	Sleep(INFINITE);
}
