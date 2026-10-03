// Lab_4_7.cpp
// Осташ Маркіян
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів
// та рекурентних співвідношень
// Варіант 22

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, x, dx;   // інтервал, аргумент і крок табуляції
    double eps;             // точність обчислення суми ряду
    double a = 0;           // поточний доданок ряду
    double R = 0;           // коефіцієнт рекурентності
    double S = 0;           // сума ряду
    int n = 0;              // номер доданка

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(10) << "exp(-x)" << "   |"
        << setw(7) << "S" << "      |"
        << setw(5) << "n" << "   |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        n = 0;               // номер першого доданка
        a = 1;               // перший доданок: (-1)^0 * x^0 / 0! = 1
        S = a;
        do {
            n++;
            R = -x / n;      // коефіцієнт рекурентності: a(n) = a(n-1) * R
            a *= R;
            S += a;
        } while (abs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << "   |"
            << setw(10) << setprecision(5) << exp(-x) << "   |"
            << setw(10) << setprecision(5) << S << "   |"
            << setw(5) << n << "   |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}
