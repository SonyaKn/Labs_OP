//елементи початкової головної діагоналі йдуть по зростанню

#include <iostream>
#include<iomanip>
using namespace std;
void input(int size_f, double **a)
{
    for (int i = 0; i < size_f; i++)
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
void func(int size_f, double **a, double *el_df)
{
    for (int i = 0; i < size_f; i++)
    {
        el_df[i] = a[i][i];                         //масив елементів голловної діагоналі
    }
    double temp;
    for (int j = 0; j < size_f; j++)
    {
        if (el_df[j] < el_df[j - 1]) 
        {
            swap(el_df[j], el_df[j - 1]);           //впорядкування елементів масиву за зростанням
            for (int i = 0; i < size_f; i++)
            {
                swap(a[i][j], a[i][j - 1]);         // зміна стовбців матриці місцями
            }
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
    cout << "Vvedit rozmir masuva:  "<<endl;
    cin >> size;
    double **arr=new double *[size], *el_d=new double [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new double[size];
    }
    input(size, arr);
    func(size, arr, el_d);
    delete[] el_d;
    output(size, arr);
}