// Lab_4_5.cpp
// Осташ Маркіян
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 22

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    double R;        // параметр фігури
    double x, y;     // координати пострілу

    cout << "R = "; cin >> R;

    srand((unsigned)time(NULL));

    // 1 спосіб: координати пострілів вводяться з клавіатури
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x <= 0 && y >= 0 && x * x + y * y <= R * R) ||        // чверть круга
            (y <= 0 && y >= -2 * x && y >= 2 * x - 2 * R))        // трикутник
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // 2 спосіб: координати пострілів – випадкові числа з інтервалу [-R; R]
    for (int i = 0; i < 10; i++)
    {
        x = 2. * R * rand() / RAND_MAX - R;
        y = 2. * R * rand() / RAND_MAX - R;

        if ((x <= 0 && y >= 0 && x * x + y * y <= R * R) ||
            (y <= 0 && y >= -2 * x && y >= 2 * x - 2 * R))
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "    "
            << setw(8) << setprecision(4) << y << "    " << "no" << endl;
    }

    return 0;
}
