// Lab9 Варіант 14
#include <iostream>
using namespace std;
int kolvo_slov(char s[80])
{
    int slovo, count = 0;
    int i = 0;
    while (s[i] == ' ' && s[i] != '\0')
        i++;
    slovo = 0;
    while (s[i] != '\0')
    {
        if (s[i] == ';')
        {
            do {
                i++;
                if (s[i] != ' ' && slovo == 0)
                {
                    slovo = 1;
                    count++;
                }
                else if (s[i] == ' ')
                    slovo = 0;

            } while (s[i] != ';');
        }
        i++;
    }
    return count;
}
int main()
{
    char str[80]="hello; я учу язык программирования C++; bye";
    cout << "Kolvo slov:   " << kolvo_slov(str);
}


