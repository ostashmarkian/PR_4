// Lab_4_2.cpp
// Осташ Маркіян
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 22

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x;        // аргумент
    double xp, xk;   // початок і кінець інтервалу табуляції
    double dx;       // крок табуляції
    double A, B;     // доданки виразу: y = A + B
    double y;        // значення функції

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = abs(x * x * x);
        if (x < -1)
            B = abs(2 + x) + sin(x) * sin(x);
        else
            if (x <= 1)
                B = atan(x * x * x + 1) + 1;
            else            // третя гілка: x > 1
                B = exp(cos(x)) + log10(1 / x + 1);
        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}