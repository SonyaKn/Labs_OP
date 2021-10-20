#include <iostream>
#include <cmath>
using namespace std;

double f1(double x) 
{
    //повертає значення функції
    return 1/cos(x);
}

double f2(double x) 
{
    return 3-pow(x,2);
}

int main() 
{
    setlocale(LC_ALL, "Ukrainian");
    double a, b; // початкова точка інтегрування
    int n;
    a = -1.029;
    b = 1.029;// кінцева точка інтегрування
    n = 10000; //розбиття функції на параболи (точність)
    double h = (b - a) / n; //крок розбиття
    
    double integral_f1 = f1(a) + f1(b); //додаємо до суми значення функції на початку і кінці інтегрування
    //ітеруємось через функцію, розбиту на трапеції
    for (int i = 1; i < n - 1; i++) 
    {
        integral_f1 += 2 * f1(a + i * h);
    }

    integral_f1 *= h / 2; //множимо весь вираз на 1/2

   
    
    
    double integral_f2 = f2(a) + f2(b); //додаємо до суми значення функції на початку і кінці інтегрування
    //ітеруємось через функцію, розбиту на трапеції
    for (int i = 1; i < n - 1; i++) 
    {
     integral_f2 += 2 * f2(a + i * h);
    }
    integral_f2 *= h / 2; //множимо весь вираз на 1/2

   
                          
    //площа інтегрованої функції (площа другої функції - площа першої функції)
    double S = abs(integral_f2 - integral_f1);
    cout <<"Площа обмежена даними функціями = " << S << endl;
}