#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL,"RU");
    int x, y, def = 10000;
    cout<<"Составить программу, которая будет считывать введённое пятизначное число.\n"
          "После чего, каждую цифру этого числа необходимо вывести в новой строке.\n";
    cout<< "Введите пятизначное число: ";
    cin >> x;
    if (x > 9999 && x < 99999)
    {
        for (int i = 0; i < 5; i++)
        {
            y = x / def;
            cout << y << endl;
            x %= def;
            def /= 10;
        }
    }
    return (0);
}