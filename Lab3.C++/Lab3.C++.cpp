#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int eps, n, fact,res,i;
    double sump,sumn; //сума початкова, сума нова
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть значення точності еps" << endl;
    cin >> eps;
    sump = 0;
    fact = 1; //факторіал 
    i = 1;
    do {
        fact = fact * i;      
        sumn = sump + (pow((-2), i) / fact);
        res = sumn - sump; 
        sump = sumn;
        i++;
    } while (abs(res) < eps); //визначення точності
    cout << "Значення суми виразу = " << sumn << endl;
}