#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

void func(int *a,int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }
    cout << "Отсортированный массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "" << endl;
    int e = 0;
    for (int i = n - 1; i >= 1; i--)
    {
       if (a[i] == a[i-1])
       {
           e = e + 1;
           for (int j = i; j < n; j++)
           {
               a[j] = a[j+1];
           }
       }
    }
    cout << "Массив после удаления повторяющихся элементов: " << endl;
    for (int i = 0; i < n - e; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    setlocale(LC_ALL, "russian");
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    int a[n];
    cout << "Введите элементы массива: " << endl;
    for (int g = 0; g < n; g++)
    {
        cin >> a[g];
    }
    cout << "" << endl;
    func(a,n);

}
