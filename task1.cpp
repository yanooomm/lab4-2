﻿/*Реализовать набор основных действий для работы с деком в виде программы,
имеющей следующий интерфейс:
Выберите действие:
1.Добавить элемент в начало
2.Добавить элемент в конец
3.Удалить элемент из начала
4.Удалить элемент с конца
5.Вывести элемент с номером N
6.Вывести содержимое дека
7.Вывести количество элементов
8.Очистить дек
9.Выход*/

#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    deque <int> deq;
    cout << "Введите количество элементов в деке: ";
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int d;
        cin >> d;
        deq.push_back(d);
    }

    int act;
    cout << "Выберите действие для работы с деком: " << endl;
    cout << "1. Добавить элемент в начало" << endl;
    cout << "2. Добавить элемент в конец" << endl;
    cout << "3. Удалить элемент из начала" << endl;
    cout << "4. Удалить элемент с конца" << endl;
    cout << "5. Вывести элемент с номером N" << endl;
    cout << "6. Вывести содержимое дека" << endl;
    cout << "7. Вывести количество элементов" << endl;
    cout << "8. Очистить дек" << endl;
    cout << "9. Выход" << endl;
    cin >> act;

    if (act == 1)
    {
        cout << "Введите значение элемента: ";
        int value;
        cin >> value;
        deq.push_front(value);
    }

    if (act == 2)
    {
        cout << "Введите значение элемента: ";
        int value;
        cin >> value;
        deq.push_back(value);
    }

    if (act == 3)
    {
        deq.pop_front();
    }

    if (act == 4)
    {
        deq.pop_back();
    }

    if (act == 5)
    {
        cout << "Введите номер элемента: ";
        int N;
        cin >> N;
        cout << deq.at(N) << endl;
    }

    if (act == 6)
    {
        deque <int> deq_temp;
        deq_temp = deq;
        int size = deq_temp.size();
        for (size; size > 0; size--)
        {
            cout << deq_temp.front();
            deq_temp.pop_front();
        }
        return 0;
    }

    if (act == 7)
    {
        cout << deq.size() << endl;
    }

    if (act == 8)
    {
        deq.clear();
        return 0;
    }

    cout << "Вывести содержимое дека? (1 - да, 0 - нет) ";
    int prnt;
    cin >> prnt;
    if (prnt)
    {
        int size = deq.size();
        for (size; size > 0; size--)
        {
            cout << deq.front();
            deq.pop_front();
        }
    }
}

/*
Введите количество элементов в деке: 5
1
2
3
4
5
Выберите действие для работы с деком:
1. Добавить элемент в начало
2. Добавить элемент в конец
3. Удалить элемент из начала
4. Удалить элемент с конца
5. Вывести элемент с номером N
6. Вывести содержимое дека
7. Вывести количество элементов
8. Очистить дек
9. Выход
1
Введите значение элемента: 7
Вывести содержимое дека? (1 - да, 0 - нет) 1
712345
*/


/*
Введите количество элементов в деке: 5
1
2
3
4
5
Выберите действие для работы с деком:
1. Добавить элемент в начало
2. Добавить элемент в конец
3. Удалить элемент из начала
4. Удалить элемент с конца
5. Вывести элемент с номером N
6. Вывести содержимое дека
7. Вывести количество элементов
8. Очистить дек
9. Выход
3
Вывести содержимое дека? (1 - да, 0 - нет) 1
2345
*/

/*
Введите количество элементов в деке: 5
1
3
2
5
6
Выберите действие для работы с деком:
1. Добавить элемент в начало
2. Добавить элемент в конец
3. Удалить элемент из начала
4. Удалить элемент с конца
5. Вывести элемент с номером N
6. Вывести содержимое дека
7. Вывести количество элементов
8. Очистить дек
9. Выход
5
Введите номер элемента: 4
6
Вывести содержимое дека? (1 - да, 0 - нет) 1
13256
*/

/*
Введите количество элементов в деке: 5
1
2
3
4
5
Выберите действие для работы с деком:
1. Добавить элемент в начало
2. Добавить элемент в конец
3. Удалить элемент из начала
4. Удалить элемент с конца
5. Вывести элемент с номером N
6. Вывести содержимое дека
7. Вывести количество элементов
8. Очистить дек
9. Выход
7
5
Вывести содержимое дека? (1 - да, 0 - нет) 0
*/