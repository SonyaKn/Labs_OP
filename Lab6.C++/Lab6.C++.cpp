#include <iostream>
using namespace std;

int palindrom(int k)
{
    int n = 0;
    for (int i = 0; i < k; i++)
    {
      
        int pal = 0;
        int chislo = 1 + rand() % 10000;
        int c = chislo;
        while (c)
        {
            pal = 10 * pal + c % 10;
            c /= 10;
        }
        if (chislo == pal)
        {
            n++;
        }
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    int kilkist;
    cout << "Введіть кількість натуральних чисел"<<endl;
    cin >> kilkist;
    if (palindrom(kilkist) == 0)
    {
        cout << "Серед чисел немає паліндромів" << endl;
    }
    else cout << "Серед чисел є паліндроми"<<endl;
   
}

