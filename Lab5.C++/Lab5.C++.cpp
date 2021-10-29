#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
    int k, a1, a2, a3,a4, i;             
	k = 0;
	i = 999;
	while (i < 10000)
	{
		do
		{
			i += 1;
			a1 = i / 100;
			a2 = i % 100;
			
		} while (a1 != a2&&i<10000);
		if (a1 == a2)
			k++;
	}
	
	cout << "Кількість чотирьохзначних чисел, що представляють собою повторювані фрагменти послідовності цифр, дорівнює: " << k << endl;
}

