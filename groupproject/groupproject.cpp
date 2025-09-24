#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int stag;
    cout << "Введите год с которого начинат выводить список книг: ";
    cin >> stag;

    // Текущий год
    int tekYear = 2024;

    // Вывод фамилий работников, стаж которых превышает введенное значение
    bool found = false;
    for (int i = 0; i < SIZE; ++i) {
        int workStag = tekYear - workers[i].year;
        if (workStag > stag) {
            cout << "Список книг: " << workers[i].name << "Автор:" << workers[i].autor << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Нет книг такого года" << endl;
    }

    return 0;
}
