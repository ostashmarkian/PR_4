// Lab_4_4.cpp
// Осташ Маркіян
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 22

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R;        // радіус півкола (0 < R < 5)
    double x;        // аргумент
    double xp, xk;   // початок і кінець інтервалу табуляції
    double dx;       // крок табуляції
    double y;        // значення функції

    cout << "R = "; cin >> R;
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
        if (x <= -8)                  // пряма y = -R
            y = -R;
        else
            if (x <= -R)              // відрізок (-8; -R) - (-R; 0)
                y = R * (x + R) / (8 - R);
            else
                if (x <= R)           // нижнє півколо, центр (0; 0)
                    y = -sqrt(R * R - x * x);
                else
                    if (x <= 5)       // відрізок (R; 0) - (5; 2)
                        y = 2 * (x - R) / (5 - R);
                    else              // пряма y = 3
                        y = 3;

        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "    |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
