#include <iostream>
using namespace std;

int palindrom(int k)
{
    int n = 0;
    for (int i = 1; i <= k; i++)
    {
      
        int pal = 0;
        int chislo =i;
        while (chislo)
        {
            pal = 10 * pal + chislo % 10;
            chislo /= 10;
        }
        if (i == pal)
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

