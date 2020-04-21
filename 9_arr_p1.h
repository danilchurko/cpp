#include "myoptions.h"

void arr_p1_task21() 
{ // #21
	const int N = 4000;
	string ar[N];

	for (size_t i = 0; i < N - 1; i++)
	{
		unsigned int value = i + 1;

		struct romandata_t { unsigned int value; char const* numeral; };

		const struct romandata_t romandata[] =
		{
		{1000, "M"}, {900, "CM"},
		{500, "D"}, {400, "CD"},
		{100, "C"}, { 90, "XC"},
		{ 50, "L"}, { 40, "XL"},
		{ 10, "X"}, { 9, "IX"},
		{ 5, "V"}, { 4, "IV"},
		{ 1, "I"},
		{ 0, NULL}
		};

		string result;
		for (const romandata_t* current = romandata; current->value > 0; ++current) {
			while (value >= current->value) {
				result += current->numeral;
				value -= current->value;
			}
		}
		ar[i] = result;
	}

	for (auto& var : ar)
		cout << var << " ";
}

void arr_p1_task20() 
{ // #20
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	char answ;
	do
	{
		cout << "r/l: ";
		cin >> answ;
	} while (answ != 'r' && answ != 'l');

	int N = 0;
	cout << "N: ";
	cin >> N;

	int sz_arr = sizeof(arr) / sizeof(arr[0]);
	N %= sz_arr;

	rotate(arr, arr + (answ == 'l' ? N : (sz_arr - N)), arr + sz_arr);

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
}

void arr_p1_task19() 
{ // #19
	srand(time(0));
	rand();

	const int N = 13;
	int arr[N];
	generate(arr, arr + N, [] {return rand() % 101; });
	sort(arr, arr + N);
	for (auto& var : arr)
		cout << var << " ";
	auto sum_elements = 0;
	for (auto& var : arr)
		sum_elements += var;
	auto sred_arifmet = sum_elements / N;
	cout << endl << endl << "sred arifmet: "<< sred_arifmet;

	auto sred_arifmet_mass = 0;
	int L = 0, R = N - 1;
	int M;
	while (true) {
		int M = L + (R - L) / 2;

		if (arr[M] > sred_arifmet)
			R = M;
		else if (arr[M] < sred_arifmet)
			L = M;
		else {
			sred_arifmet_mass = sred_arifmet;
			break;
		}
		if (L + 1 == R) {
			cout << endl << "L: " << arr[L] << "\tR: " << arr[R];
			if (sred_arifmet - arr[L] <= arr[R] - sred_arifmet)
				sred_arifmet_mass = arr[L];
			else
				sred_arifmet_mass = arr[R];
			break;
		}
		if (L > R)
			break;
	}

	cout << endl << "sred arifmet in mass: " << sred_arifmet_mass;
}

void arr_p1_task18() 
{ // #18
	const int N = 10;
	double arr[N] = { 8, 4.1, 2.9, 9, 3, 6, 8.2, 1.1, 6, 9.9 };

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

	sort(arr, arr + N, [](double num1, double num2) {return num1 - (int)num1 > num2 - (int)num2;});
	cout << endl;

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}

void arr_p1_task17() 
{ // #17
	srand(time(0));
	rand();

	const int N = 20;
	int arr[N];
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 31 - 10;
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	auto count_positiv = NULL;
	auto indx_start = NULL;
	auto indx_end = NULL;

	bool flag = false;
	for (int i = 0, indx_start_local = 0, indx_end_local = 0, count_positiv_local = 0; i < N; i++) {
		if (arr[i] > 0 && flag == false) {
			flag = true;
			indx_start_local = i;
		}

		else if (arr[i] <= 0 && flag == true) {
			flag = false;

			count_positiv_local = 0;
			indx_start_local = 0;
			indx_end_local = 0;
		}

		if (flag) {
			count_positiv_local++;
		}

		if (count_positiv_local > count_positiv) {
			count_positiv = count_positiv_local;
			indx_start = indx_start_local;
			indx_end = i;
		}
	}

	cout << "Max count positiv: " << count_positiv << endl;
	cout << "Index start: " << indx_start << endl << "Index end: " << indx_end << endl;
	cout << "Fragment: ";

	for (int i = indx_start; i < indx_end + 1; i++)
		cout << arr[i] << " ";
}

void arr_p1_task16() 
{ // #16
	srand(time(0));
	rand();

	const int N = 5;
	int arr[N];

	for (auto& var : arr)
	{
		int i;
		do {
			i = rand() % 42 + 1;
		}
		while (count(arr, arr + N, i) > 0);
		var = i;
	}

	int br[N];
	cout << "Write 5 num from 1 to 42: " << endl;
	for (int i = 0; i < N; i++)
	{
		do
		{
			cout << i + 1 << ": ";
			cin >> br[i];
		} while (br[i] < 1 || br[i] > 42);
	}
	int cnt_same = 0;
	for (int i = 0; i < N; i++)
	{
		int a = br[i];
		if (count(arr, arr + N, a) > 0) {
			cnt_same++;
		}
	}
	cout << endl << "Same: " << cnt_same;
	cout << endl << "Real chanse = " << pow(42, 5) << " to one!";
}

void arr_p1_task15() 
{ //#15
	srand(time(0));
	rand();

	const int N = 20;
	int A[N];
	int B[N];
	int C[N] = { 0 };

	cout << "1st mas: ";
	for (int i = 0; i < N; ++i) {
		A[i] = rand() % 50 + 1;
		B[i] = rand() % 50 + 1;
		cout << A[i] << ' ';
	}

	cout << endl;

	cout << "2nd mas: ";
	for (int i = 0; i < N; ++i) {
		cout << B[i] << ' ';
	}

	cout << endl;

	int k = 0;

	for (int i = 0; i < N; ++i) {
		int j;
		for (j = 0; j < N; ++j) {
			if (A[i] == B[j]) {
				break;
			}
		}
		if (j == N) {
			C[k++] = A[i];
		}
	}

	cout << "New mas: ";
	for (int i = 0; i < k; ++i) {
		cout << C[i] << ' ';
	}
}

void arr_p1_task14() 
{ // #14
	srand(time(0));
	rand();

	const int N = 8;
	const int M = 10;
	const int range = 50;
	int ar[N];
	int br[M];

	int j = 0;

	generate(ar, ar + N, [range] {return rand() % range; });
	generate(br, br + M, [range] {return rand() % range; });

	int cr[5] = {};
	for (int i = 0; i < N; i++) {
		cout << ar[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < N; i++) {
		cout << br[i] << " ";
	}
	cout << endl << endl;

	sort(ar, ar + N);
	sort(br, br + M);

	for (int i = 0; i < M; i++) {
		int value_to_find = br[i];

		int L = 0, R = N - 1;
		int M;
		while (true) {
			M = L + (R - L) / 2;
			if (ar[M] > value_to_find)
				R = M - 1;
			else if (ar[M] < value_to_find)
				L = M + 1;
			else if (j == 0 || value_to_find != cr[j - 1]) {
				cr[j] = value_to_find;
				j++;
				break;
			}
			else
				break;
			if (L > R)
				break;
		}
	}

	cout << "Same: ";
	for (int i = 0; i < j; i++) {
		cout << cr[i] << " ";
	}
}

void arr_p1_task13() 
{ //#13
	srand(time(0));
	rand();

	const int Na = 20;
	const int Nb = Na;
	int A[Na] = {};
	int B[Nb] = {};

	for (int i = 0; i < Na; i++) {
		A[i] = rand() % 1000 - 500;
		cout << A[i] << " ";
	}

	cout << endl << endl;

	int q = 0;

	for (int i = 0; i < Na; i++) {
		if (A[i] < 0) {
			B[q] = A[i];
			q++;
		}
	}

	for (int i = 0; i < Na; i++) {
		if (A[i] == 0) {
			B[q] = A[i];
			q++;
		}
	}

	for (int i = 0; i < Nb; i++) {
		if (A[i] > 0) {
			B[q] = A[i];
			q++;
		}
	}

	for (int i = 0; i < Nb; i++) {
		sort(begin(B), end(B));
		cout << B[i] << " ";
	}
}

void arr_p1_task12() 
{ // #12
	const int N = 10;

	int A[] = {1, 2, 3, 4, 5};
	int B[] = {6, 7, 8, 9, 10};
	int C[N];
	int a = 0;
	int b = 0;

	for (int i = 0; i < N; i++)
	{
		if (!(i % 2)) {
			C[i] = A[a];
			a++;
		}
		else {
			C[i] = B[b];
			b++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << C[i] << " ";
	}

	cout << endl << endl;
}

void arr_p1_task11() 
{ //#11
	srand(time(0));
	rand();

	const int N = 10;
	int mass[N] = {};

	for (int i = 0; i < N; i++) {
		mass[i] = rand() % 123;
		cout << mass[i] << " ";
	}

	for (int i = 0; i < N / 2; i++) {
		mass[i] += mass[N - i - 1];
		mass[N - i - 1] = mass[i] - mass[N - i - 1];
		mass[i] = mass[i] - mass[N - i - 1];
	}

	cout << endl;

	for (int i = 0; i < N; i++) {
		cout << mass[i] << " ";
	}
}

void arr_p1_task10() 
{ // #10
	const int N = 200;

	srand(time(0));
	rand();

	int arr[N];

	int one = 0;
	int two = 0;
	int three = 0;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 200;
		cout << arr[i] << " ";
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i] >= 0 && arr[i] < 10) {
			one++;
		}
		else if (arr[i] > 9 && arr[i] < 100) {
			two++;
		}
		else if (arr[i] > 99 && arr[i] < 201) {
			three++;
		}
	}
	cout << endl << endl;

	cout << "  One num: " << one / (N / 100) << "%" << endl;
	cout << "  Two num: " << two / (N / 100) << "%" << endl;
	cout << "Three num: " << three / (N / 100) << "%" << endl;
}

void arr_p1_task9() 
{ // #9
	srand(time(0));
	rand();

	const int N = 100;
	double* mas = 0;
	int index = 0;
	int tmp;

	mas = new double[N];
	for (int i = 0; i < N; ++i) {

		mas[i] = (double)(rand() % 101) / 10;
		cout << mas[i] << " " << endl;
		tmp = mas[i];

		if (mas[i] == tmp) {
			index++;
		}
	}

	cout << endl << endl;
	cout << "Int - " << index  << "pc." << endl;
}

void arr_p1_task8() 
{ // #8
	const int N = 20;
	int arr[N];

	srand(time(0));
	rand();

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
	}

	cout << endl << endl;

	cout << "min: " << min_element(arr, arr + N) - begin(arr) + 1 << "st = " << *min_element(arr, arr + N) << endl;
	cout << "max: " << max_element(arr, arr + N) - begin(arr) + 1 << "st = " << *max_element(arr, arr + N) << endl;
}

void arr_p1_task7() 
{ // #7
	const int N = 20;

	srand(time(0));
	rand();

	int arr[N];
	int sum = 0;
	bool flag = false;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 40 - 30; //% 41 - 30;

		if (arr[i] > 0) {
			break;
		}
		cout << arr[i] << " ";
		sum += arr[i];
	}
	cout << endl << endl;
	cout << "Sum: " << sum;
}

void arr_p1_task6() 
{ // #6
	const int N = 20;

	srand(time(0));
	rand();

	int arr[N];
	int sum = 0;
	bool flag = false;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 41 - 10;
		cout << arr[i] << " ";

		if (flag == true) {
			sum += arr[i];
		}

		if (arr[i] < 0) {
			flag = true;
		}
	}
	cout << endl << endl;
	cout << "Sum: " << sum;
}

void arr_p1_task5() 
{ // #5
	const int N = 100;

	srand(time(0));
	rand();

	int arr[N] = { 0 };

	int num = 0;
	int ch = 0;
	int povt = 0;

	cout << "Write your num (From 0 to 50): ";
	cin >> num;
	cout << endl;

	if (num > 0 && num < 51) {
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 50;
			cout << "-" << arr[i];
		}

		for (int i = 0; i < N; i++)
		{
			if (arr[i] == num) {
				povt++;
			}
		}

		cout << "You num repeat = " << povt;
	}
	else {
		cout << "Try again";
	}
}

void arr_p1_task4() 
{ // #4
	const int N = 100;

	srand(time(0));

	unsigned char arr[N] = {0};

	int cnt_num = 0;
	int cnt_l = 0;
	int cnt_zn = 0;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 256;
		cout << arr[i] << " ";
	}

	for (int i = 0; i < N; i++)
	{
		if (isalpha(arr[i])) {
			cnt_l++;
		}
		else if (isdigit(arr[i])) {
			cnt_num++;
		}
		else if (ispunct(arr[i])) {
			cnt_zn++;
		}
	}
	cout << endl;

	cout << "\n" << "Letters = " << cnt_l;
	cout << "\n" << "Numbers = " << cnt_num;
	cout << "\n" << "Znakov = " << cnt_zn;
}

void arr_p1_task3() 
{ //#3
	const int N = 10;

	srand(time(0));

	int arr[10] = { 0 };
	int n = 0, sum = 0, sra = 0;

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 40 - 20;

		if (arr[i] > 0) {
			cout << "|" << arr[i] << "|";
			n++;
			sum += arr[i];
		}
	}
	cout << endl;

	sra = sum / n;

	cout << "Num: " << n << endl;
	cout << "Sum: " << sum << endl;
	cout << "Sra: " << sra << endl;
}

void arr_p1_task2() 
{ //#2
	const int N = 20;

	srand(time(0));

	int arr[N] = {0};

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 10;

		if (i % 2 == 0) {
			cout << "|" << arr[i] << "|";
		}
	}
}

void arr_p1_task1() 
{ //#1
	const int N = 5;

	int arr[N];

	cout << "Masiv: " << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << "New massiv:";
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << "|";
	}
}