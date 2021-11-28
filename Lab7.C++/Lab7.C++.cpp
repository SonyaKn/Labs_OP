#include <iostream>
using namespace std;
int max_element(int max,int kilkist,int masuv[])  //знаходження максимального елемента масива
{
    for (int i = 0; i < kilkist; i++)
    {
        if (masuv[i] > max)
            max = masuv[i];
    }
    return max;
}
int function(int max, int kilkist, int kol, int masuv[])  //кількість непарних елементів з парним номером
{
    for (int i = 0; i < kilkist; i++)
    {
        if (i % 2 == 0)
        {
            if (masuv[i] % 2 != 0)
            {
                kol++;
                masuv[i] = abs(max - masuv[i]);     //зміна елемента масиву на різницю максимального і поточного
            }
        }
    }
    return kol;
}
int main()
{ 
    setlocale(LC_ALL, "Ukrainian");
    int n;
    cout << "Введіть кількість елементів масиву n" << endl;
    cin >> n;
    int *p=new int[n];
    cout << "Введіть n елементів" << endl;
    for (int i = 0; i < n; i++)
    {   
        cin >> p[i];
    }

    int max_p = p[0];
    max_p=max_element(max_p, n, p);
    
    int k = 0;
    k = function(max_p, n, k, p);
    if (k != 0)
    {
        cout << "Кількість непарних елементів, що мають парний порядковим номер= " << k << endl;
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << "   ";
        }
    }
    else cout << "Немає непарних елементів, що мають парний порядковий номер" << endl;
    
}
