#include "myoptions.h"

void pointers_task1()
{
    int x, y, res, resBt, temp = 0;

    cout << "Enter num1: ";
    cin >> x;
    cout << "Enter num2: ";
    cin >> y;

    if (y > x) {
        temp = y;
        y = x;
        x = temp;
    }

    int* px = &x;
    int* py = &y;

    res = (int)px - (int)py;
    resBt = res / 8;

    cout << "Int: " << res << endl;
    cout << "Byte: " << resBt << endl;
}

void pointers_task2()
{
    int* numb = new int(1);
    int* degree = new int(1);
    int* c = new int(1);

    cout << "input numb: "; cin >> *numb;
    cout << "input degree: "; cin >> *degree;

    for (int i = 0; i < *degree; i++) {
        (*c) *= (*numb);
    }

    cout << "Degree: " << *c << endl;

    delete numb;
    delete degree;
    delete c;
}

void pointers_task3(int x, int y)
{
    int sum;
    int* px, * py, ** prx, ** pry;

    px = &x;
    py = &y;

    prx = &px;
    pry = &py;

    sum = **prx + **pry;

    cout << "Sum: " << sum << endl;
}

void pointers_task4(int weight, int height)
{
    int ideal, lost;
    int* pw, * ph, ** prw, ** prh, *** prqw, *** prqh;

    pw = &weight;
    ph = &height;

    prw = &pw;
    prh = &ph;

    prqw = &prw;
    prqh = &prh;

    ideal = ***prqh - 110;

    cout << "Your ideal weight: " << ideal << " kg." << endl;

    if (ideal > weight)
    {
        lost = ideal - weight;
    }
    else
    {
        lost = weight - ideal;
    }

    if (ideal < weight)
    {
        cout << "And y need to lost: " << lost << " kg." << endl;
    }
    else
    {
        cout << "And y need to gain: " << lost << " kg." << endl;
    }
}

void pointers_task5() // Нипонял
{
    int* x1, ** x2, *** x3, **** x4, ***** x5;

    x5 = &x4;
    x4 = &x3;
    x3 = &x2;
    x2 = &x1;
    x1 = new int(1);

    cout << (int)x5 << endl;

    cout << (int)x1 << endl;
    cout << (int)x2 << endl;
    cout << (int)x3 << endl;
    cout << (int)x4 << endl;
}

int main()
{
    options("Pointers");

    pointers_task1();

    //task2();

    //task3(22, 45);

    //task4(65, 185);

    //task5();

    Exit();
}