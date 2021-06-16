#include <iostream>
using namespace std;

float avg(int size, int *mas)
{
    int	a = 0;
    for (int i = 0; i < size; i++)
        a += mas[i];
    return ((float)a / size);
}

int main()
{
    setlocale(LC_ALL,"RU");
    int size;
    cout<< "Написать функцию, подсчитывающую среднее арифметическое целого массива.\n"
           "Предварительно объявив и, при необходимости, инициализировав переменные.\n";
    cout << "Введите размер массива: \n";
    cin >> size;
    int arr[size];
    cout << "Введите элементы: \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Итог: " << avg(size, arr);
    return 0;
}