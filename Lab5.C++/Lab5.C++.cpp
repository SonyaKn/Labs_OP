
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
    int k, a1, a2, a3, a4 ;             
	k = 0;
	for (int i = 1000; i < 10000; i++)
	{
		a1 = i / 100;
		a2 = i % 100;
		if (a1 == a2)
		{
			k += 1;
		}
	}
	cout << "Кількість чотирьохзначних чисел, що представляють собою повторювані фрагменти послідовності цифр, дорівнює: " << k << endl;
}

