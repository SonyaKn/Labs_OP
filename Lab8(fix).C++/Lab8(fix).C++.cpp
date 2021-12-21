#include <iostream>
#include<iomanip>
using namespace std;
void input(int size_f, double a[6][6])
{
    for(int i = 0; i < size_f; i++)
    {
        for (int j = 0; j < size_f; j++)
        {
            a[i][j] = double(rand()) / RAND_MAX * 200 + -100;
            cout << a[i][j] << "    ";

        }
        cout << "\n";
    }
    cout << endl;
}
void func(int size_f, double a[6][6])
{
    double temp;
    int k = 0;
    for (int j = 0; j < size_f - 1; j++)
    {
        if (a[j][j] > a[j + 1][j + 1])
        {
            for (int i = 0; i < size_f; i++)
            {
                temp = a[i][j];
                a[i][j] = a[i][j + 1];
                a[i][j + 1] = temp;
            }
           
        }
    }
void output(int size_f, double a[6][6])
{
    for (int i = 0; i < size_f; i++)
    {
        for (int j = 0; j < size_f; j++)
        {
            cout << a[i][j] << "     ";
        }
        cout << endl;
    }
}
int main()
{
    const int size = 6;
    double arr[size][size];

    input(size, arr);
    func(size, arr);
    output(size, arr);

}
