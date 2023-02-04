/*Считать из текстового файла целые числа и занести их в вектор. Вывести вектор
на экран. Удалить из вектора все элементы, превышающие значение k и вывести вектор на
экран. Посчитать в полученном векторе количество элементов, равных значению N.*/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    vector <int> vec;
    ifstream f("task3.txt");
    if (f)
    {
        int n;
        while (f >> n)
            vec.push_back(n);
        f.close();
    }
    else
    {
        cout << "Ошибка при открытии файла";
        return 0;
    }
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl << "Введите значение К" << endl;
    int k;
    cin >> k;
    auto it = vec.begin();
    int n = vec.size();
    while (n--)
    {
        if (vec.at(n) > k)
        {
            it = vec.begin() + n;
            vec.erase(it);
        }
    }

    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    
    cout << endl << "Введите значение N" << endl;
    int N;
    cin >> N;

    int counter = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == N)
            counter+=1;
    }
    cout << "Количество элементов N - " << counter;
}

/*
1 2 3 4 6 2 1 3 -2 3 0
Введите значение К
2
1 2 2 1 -2 0
Введите значение N
1
Количество элементов N - 2
*/

/*
1 20 0 6 0 17 8 35 0 9 4
Введите значение К
10
1 0 6 0 8 0 9 4
Введите значение N
0
Количество элементов N - 3
*/
