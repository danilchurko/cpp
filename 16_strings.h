#include "myoptions.h"

void strings_task1()
{
    string stroka;
    int* index = new int[100];
    char symbol;
    int j = 0;
    int shet = 0;

    cin >> stroka;

    cout << "Symbol: ";
    cin >> symbol;
    cout << endl;

    for (int i = 0; stroka[i] != '\0'; i++)
    {
        if (stroka[i] == symbol)
        {
            j++;
            index[shet] = i;
            shet++;
        }
    }

    cout << "Symbol \"" << symbol << "\" meets " << j << " times" << endl;

    for (int i = 0; i < shet; i++)
    {
        cout << "#" << i + 1 << " | index: " << index[i] << endl;
    }

    delete[] index;
}

void strings_task2(string str)
{
    int howManyGl = 0;
    int howManySogl = 0;
    int howManyZnakov = 0;
    int howManyCifr = 0;
    for (int a = 0; a < str.size(); a++)
    {
        if (str[a] == 'e' || str[a] == 'y' || str[a] == 'u' || str[a] == 'i' || str[a] == 'o' || str[a] == 'a')
            howManyGl++;
        if (str[a] == 'q' || str[a] == 'w' || str[a] == 'r' || str[a] == 't' || str[a] == 'p' || str[a] == 's' ||
            str[a] == 'd' || str[a] == 'f' || str[a] == 'g' || str[a] == 'h' || str[a] == 'j' || str[a] == 'k' ||
            str[a] == 'l' || str[a] == 'z' || str[a] == 'x' || str[a] == 'c' || str[a] == 'v' || str[a] == 'b' ||
            str[a] == 'n' || str[a] == 'm')
            howManySogl++;
        if (str[a] == ',' || str[a] == '.' || str[a] == '!' || str[a] == '?')
            howManyZnakov++;
        if (str[a] == '1' || str[a] == '2' || str[a] == '3' || str[a] == '4' || str[a] == '5' || str[a] == '6'
            || str[a] == '7' || str[a] == '8' || str[a] == '9' || str[a] == '0')
            howManyCifr++;
    }

    cout << "Glasneah = " << howManyGl << endl;
    cout << "Sogl = " << howManySogl << endl;
    cout << "Znakov = " << howManyZnakov << endl;
    cout << "Cifr = " << howManyCifr << endl;
    cout << "Vsego = " << str.size();
}

void strings_task3(string s)
{
    int howManySpace = 0;
    for (int a = 0; a < s.size(); a++)
        if (s[a] == ' ')
            howManySpace++;

    int numWords = s.size() / (howManySpace - 1);
    int sred = s.size() / numWords;

    cout << "Average length of words in a sentence: " << sred << " leters";
}

void strings_task4()
{
    const int startSize = 256;

    char str[startSize] = "Ќажал кабан на баклажан.";
    // ак передать эт строку как параметр функции в масив чаров?

    char str_1[startSize];
    int j = 0;

    //перевод строки в нижний регист
    for (int i = 0; i < sizeof(str) - 1; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 'z' - 'Z';
        if (str[i] >= 'ј' && str[i] <= 'я') str[i] += '€' - 'я';
    }

    for (int i = 0; i < startSize; i++)
    {
        if (str[i] == ',' || str[i] == '-' || str[i] == '!' || str[i] == '?') str[i] = ' ';
        if (str[i] == ' ') continue;
        if (str[i] == '.')
        {
            str_1[j] = '\0';
            break;
        }
        str_1[j] = str[i];
        j++;
    }
    const int resSize = strlen(str_1);
    char* str_2 = new char[resSize + 1];
    for (int i = 0; i < resSize; i++)
    {
        str_2[i] = str_1[resSize - 1 - i];
    }
    str_2[resSize] = '\0';
    if (!strcmp(str_1, str_2)) cout << "True";
    else cout << "False";

    delete[] str_2;
}

/*int strings_task5(string str, string word)
{
    //перевод строки в нижний регист
    for (int i = 0; i < sizeof(str) - 1; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 'z' - 'Z';
        if (str[i] >= 'ј' && str[i] <= 'я') str[i] += '€' - 'я';
    }

    int n = 0;
    size_t pos = str.find(word);
    while (pos != string::npos) {
        n++;
        pos = str.find(word.c_str(), pos + 1, word.length());
    }
    return n;
}*/

int strings_task5(const string& s, const string& w, bool _word = true) {
    intptr_t n = s.length(), m = w.length();
    if (!n || !m)
        return 0;

    intptr_t* kmp = new (std::nothrow) intptr_t[m + 1];
    if (kmp == NULL)
        return 0;

    intptr_t i = 0;
    intptr_t j = kmp[0] = -1;
    while (i < m) {
        while ((j > -1) && (w[i] != w[j]))
            j = kmp[j];

        ++i;
        ++j;
        if ((i < m) && (j < m) && (w[i] == w[j]))
            kmp[i] = kmp[j];
        else
            kmp[i] = j;
    }

    int k = 0;
    for (i = j = 0; i < n; ++i) {
        while ((j > -1) && (w[j] != s[i]))
            j = kmp[j];

        if (++j >= m) {
            if (_word) {
                if (((i - j) == -1 || isdelim(s[i - j])) && ((i + 1) >= n || isdelim(s[i + 1])))
                    ++k;
            }
            else
                ++k;

            j = kmp[j];
        }
    }
    delete[] kmp;
    return k;
}

void strings_task6(string text, string word)
{
    int pos = 0;
    string temp;

    cout << text << endl;

    int position = 0;
    while (true)
    {
        int result = text.find(word, position);
        if (result == string::npos) break;
        position = text.find(word, position) + 1;

        if (result >= 1) {
            cout << "SPAM" << endl;
        }
        else {
            cout << "no SPAM :)" << endl;
        }
    }
}

void strings_task7(string str)
{
    cmatch result;
    regex regular("[0-9]+");

    if (regex_search(str.c_str(), result, regular)) {
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << endl;
        }
    }
}

string strings_task8(int count)
{
    const int startSize = 256;
    char pass[startSize] = "";

    for (int i = 0; i < count; i++)
    {
        char temp = raaand(32, 255);
        if ((temp >= 48 && temp <= 57) || (temp >= 65 && temp <= 90) || (temp >= 97 && temp <= 122)) {
            pass[i] = temp;
        }
        else {
            i--;
        }
    }

    return pass;
}

void strings_task17(string str)
{
    cmatch result;
    regex regular("[\\w-]+"
        "(@)"
        "([\\w-]+)"
        "(\\.)"
        "([a-z]{2,5})");

    if (regex_match(str.c_str(), result, regular)) {
        cout << "Correct" << endl;
        cout << result[0] << endl;
    }
    else {
        cout << "INCORRECT" << endl;
    }
}

int strings_main()
{
    options("Strings");

    //task1();

    //task2("what th1e lovely gils, and litt4le, shiny!! bo3y with it...");

    //task3("mortal combat is my favorite game for ever");

    //task4();

    //task5
    //cout << "This word meets: " << task5("были ли у вас когда то столь прекрасные были которые были тогда ког были мы", "были") << " times";

    //task6("free xxx", "xxx");

    //task7("$$ $120 grn");

    //task17("asdasd: danilchurko@gmail.com LOLO!!@#112#@");
    //task17("danilchurko@gmail.com");

    //cout << task8(5) << endl;

    Exit();
}