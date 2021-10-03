#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int e,n,fac;
    double sum;
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть значення лічильника n та значення точності е" << endl;
    cin >>n>> e;
    sum = 0;
    fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;           //факторіал і
        sum = sum + (pow((-2), i) / fac);
    }
    cout << "Значення суми виразу = " << fixed << setprecision(e) << sum << endl;
}