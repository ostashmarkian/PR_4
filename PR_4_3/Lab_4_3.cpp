// Lab_4_3.cpp
// Осташ Маркіян
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 22

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;  // параметри функції
    double x;        // аргумент
    double xp, xk;   // початок і кінець інтервалу табуляції
    double dx;       // крок табуляції
    double F;        // значення функції

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x + 5 < 0 && c == 0)
            F = 1 / (a * x) - b;
        else
            if (x + 5 > 0 && c != 0)
                F = (x - a) / x;
            else              // в інших випадках
                F = 10 * x / (c - 4);

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << F
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
