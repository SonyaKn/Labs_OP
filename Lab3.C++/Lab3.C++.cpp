#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int eps, fact,res,i,viras;
    double sum; //сума початкова, сума нова
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть значення точності еps" << endl;
    cin >> eps;
    sum = 0;
    fact = 1; //факторіал 
    i = 1;
    do {
        fact = fact * i;    
        viras= (pow((-2), i) / fact);
        res = (pow((-2), i) / fact) - (pow((-2), (i - 1))/ (fact / i));
        cout << res<<endl;
        sum = sum + viras; 
                   
        i++;
                    
    } while (abs(res) >= eps); //визначення точності
    cout << "Значення суми виразу = " << sum << endl;
}