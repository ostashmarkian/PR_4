// Lab_4_6.cpp
// Осташ Маркіян
// Лабораторна робота № 4.6
// Вкладені цикли
// Варіант 22

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P;    // добуток
    int k, n;    // параметри зовнішнього (k) та внутрішнього (n) циклів

    // спосіб 1: while
    P = 1;
    k = 1;
    while (k <= 20)
    {
        n = 1;
        while (n <= 25 - k)
        {
            P *= (1. * k - n) / (k + n) + 1;
            n++;
        }
        k++;
    }
    cout << P << endl;

    // спосіб 2: do ... while
    P = 1;
    k = 1;
    do {
        n = 1;
        do {
            P *= (1. * k - n) / (k + n) + 1;
            n++;
        } while (n <= 25 - k);
        k++;
    } while (k <= 20);
    cout << P << endl;

    // спосіб 3: for з наростанням параметрів
    P = 1;
    for (k = 1; k <= 20; k++)
    {
        for (n = 1; n <= 25 - k; n++)
        {
            P *= (1. * k - n) / (k + n) + 1;
        }
    }
    cout << P << endl;

    // спосіб 4: for зі спаданням параметрів
    P = 1;
    for (k = 20; k >= 1; k--)
    {
        for (n = 25 - k; n >= 1; n--)
        {
            P *= (1. * k - n) / (k + n) + 1;
        }
    }
    cout << P << endl;

    return 0;
}
