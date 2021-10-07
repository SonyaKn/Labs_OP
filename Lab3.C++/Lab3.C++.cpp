#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int eps, fact,res,i;
    double sum; //сума початкова, сума нова
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть значення точності еps" << endl;
    cin >> eps;
    sum = 0;
    fact = 1; //факторіал 
    i = 1;
    double virasp = 0;
    double virasn;
    do {
        fact = fact * i;    
        virasn= (pow((-2), i) / fact);
        res = virasn - virasp;
        sum = sum + virasn; 
        virasp = virasn;
        i++;
                    
    } while (abs(res) >= eps); //визначення точності
    cout << "Значення суми виразу = " << sum << endl;
}