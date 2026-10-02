// Lab_4_1.cpp
// Осташ Маркіян
// Лабораторна робота № 4.1
// Цикли
// Варіант 22

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;      // N – нижня межа суми, i – параметр циклу
    double S;      // S – сума

    cout << "N = "; cin >> N;

    // спосіб 1: while
    S = 0;
    i = N;
    while (i <= 20)
    {
        S += (cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i));
        i++;
    }
    cout << S << endl;

    // спосіб 2: do ... while
    S = 0;
    i = N;
    do {
        S += (cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i));
        i++;
    } while (i <= 20);
    cout << S << endl;

    // спосіб 3: for з наростанням параметра
    S = 0;
    for (i = N; i <= 20; i++)
    {
        S += (cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i));
    }
    cout << S << endl;

    // спосіб 4: for зі спаданням параметра
    S = 0;
    for (i = 20; i >= N; i--)
    {
        S += (cos(1. * i) + sin(1. * i)) / (1 + cos(1. * i) * sin(1. * i));
    }
    cout << S << endl;

    return 0;
}