#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    double x, y, z;
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть значення сторін для побудування трикутника" << endl;
    cin >> x >> y >> z;
    if ((x <= 0) || (y <= 0) || (z <= 0))
    {
        cout << "Задані сторони не підходять для побудування трикутника" << endl;
    }
    else
    {
        if ((x + y > z) && (y + z > x) && (x + z > y))
        {
            cout << "Трикутник із заданими сторонами існує" << endl;
        }
        else
        {
            cout << "Трикутник із заданими сторонами не існує" << endl;
        }
    }
}