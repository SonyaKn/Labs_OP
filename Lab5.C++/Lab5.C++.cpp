#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
    int k, a1, a2, a3,a4, i;             
	k = 0;
	for (int i = 10; i < 100; i++)
	{
		a1 = i / 10;
		a2 = i % 10;
		for (int j = 0; j < 100; j++)
		{
			a3 = j / 10;
			a4 = j % 10;
			if ((a1==a3)&&(a2==a4))
			{
				k++;
			}
		}
	}
	
	cout << "Кількість чотирьохзначних чисел, що представляють собою повторювані фрагменти послідовності цифр, дорівнює: " << k << endl;
}

