#include "myoptions.h"

void dynamic_arr_task1(int* ar, int size)
{
    int max, min, sum, prod;

    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % 100 + 1;
        cout << ar[i] << "\t";
    }
    cout << "\n";

    delete[] ar;
}

// Task 1
int main()
{
    options("Dynamic Arrays");

    int size = 10; // количество элементов в массиве
    int* ar = new int[size]; // выделение пам€ти динамически на 10 элементов

    dynamic_arr_task1(ar, size);
}

// Task 2
int mainOther()
{
    options("Dynamic Arrays");

    int** ar = nullptr;
    int height = 10;
    int width = 4;

    //AddRow2D(ar, width, height);

    AllocateMemory2D(ar, width, height);

    RandomFillArray2D(ar, width, height, 1, 10);

    PastElement2D(ar, width, height, 3, 2, 666);

    DeleteElement2D(ar, width, height, 8, 2);

    PrintArray2D(ar, width, height);

    //UserFillArray2D(ar, width, height);

    FreeMemory2D(ar, height);

    Exit();
}


///////////////////////////////////////////////////////////////
//myarray.h
///////////////////////////////////////////////////////////////

void AddRow2D(int**& ar, int width, int height)
{
    ar = new int* [height + 1];
    for (int y = 0; y < height; y++)
    {
        ar[y] = new int[width];
        for (int x = 0; x < width; x++)
        {
            ar[y][x] = 0;
        }
    }
}

void AllocateMemory2D(int**& ar, int width, int height)
{
    ar = new int* [height];
    for (int y = 0; y < height; y++)
    {
        ar[y] = new int[width];
        for (int x = 0; x < width; x++)
        {
            ar[y][x] = 0;
        }
    }
}

void UserFillArray2D(int** ar, int width, int height)
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            int num;
            cout << "¬ведите элемент [" << y << "] [" << x << "] - ";
            cin >> num;
            ar[y][x] = num;
        }
    }
}

void RandomFillArray2D(int** ar, int width, int height, int min, int max)
{
    for (int y = 0; y < height - 1; y++)
    {
        for (int x = 0; x < width; x++)
        {
            ar[y][x] = raaand(min, max);
        }
    }
}

void PrintArray2D(int** ar, int width, int height)
{
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            cout << ar[y][x] << "\t";
        }
        cout << "\n\n";
    }
}

void FreeMemory2D(int**& ar, int rows)
{
    for (int y = 0; y < rows; y++)
    {
        delete[] ar[y];
    }
    delete[] ar;
    ar = nullptr;
}

void PastElement2D(int** ar, int width, int height, int oX, int oY, int symbol)
{
    for (int y = 0; y < height - 1; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (oX == x && oY == y) {
                ar[y][x] = symbol;
            }
        }
    }
}

void DeleteElement2D(int** ar, int width, int height, int oX, int oY)
{
    for (int y = 0; y < height - 1; y++)
    {
        for (int x = 0; x < width; x++)
        {
            if (oX == x && oY == y) {
                ar[y][x] = 69;
            }
        }
    }
}

/*void add_element(int*& ar, int& size, int new_value)
{
    int* temp = new int[size + 1];

    // забираю элементы из "старого" массива в новый
    for (int i = 0; i < size; i++)
    {
        temp[i] = ar[i];
    }

    delete[] ar;

    ar = temp;

    ar[size] = new_value;

    size++;
}*/
