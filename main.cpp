#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) // ввод чисел
    {
        cin >> arr[i];
    }

    cout << "Числа в массиве: ";

    for (int i = 0; i < size; i++) //вывод массива
    {
        cout << arr[i] << "\t";
    }


    cout << "\n";
    int max = arr[0];

    cout << "Максимальный элемент массива: ";

    for (int i = 0; i < size; i++) // поиск максимального элемента
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << max;
    return 0;
}