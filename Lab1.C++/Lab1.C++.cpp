#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    double b;
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть кут в градусній мірі" << endl;
    cin >> b;
    b = (b * M_PI) / 180;
    cout << b << endl;
}
