//в кінцевому результаті елементи головної діагоналі йдуть по зростанню

#include <iostream>
#include<iomanip>
using namespace std;
void input(int size_f, double **a)
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
void func(int size_f, double **a)
{
    double min, temp;
    int imin;
    for (int i = 0; i <size_f; i++)
    {
        min = a[i][i];
        imin = i;
        for (int j = i; j < size_f; j++) 
        {
            if (min > a[i][j]) 
            {
                min = a[i][j];
                imin = j;
            }
        }
        
            for (int j = 0; j < size_f; j++) 
            {
                temp = a[j][imin];
                a[j][imin] = a[j][i];
                a[j][i] = temp;
            }
        

    }
}
void output(int size_f, double **a)
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
    int size;
    cout << "Vvedit rozmir masuva:  " << endl;
    cin >> size;
    double** arr = new double* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new double[size];
    }
    input(size, arr);
    func(size, arr);
    output(size, arr);
}
