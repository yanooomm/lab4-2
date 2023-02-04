/*Считать из текстового файла целые числа и занести их в вектор. Вывести вектор
на экран. Вставить перед всеми отрицательными элементами вектора значение 0 и снова
вывести вектор на экран.*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    vector <int> vec;
    ifstream f("task2.txt");
    if (f)
    {
        int n;
        while (f >> n)
            vec.push_back(n);
        f.close();
    }
    else
        cout << "Ошибка при открытии файла";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
    int size = vec.size();
    int p = 0;
    for (int i = 0; i < size; i++)
    {
        if (vec[i] < 0)
        {
            p += 1;
        }
    }
    for (int i = 0; i < size+p; i++)
    {
        if (vec[i] < 0)
        {
            vec.insert(vec.begin()+i, 0);
            i++;
        }
    }
    cout << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << ' ';
}

/*
1 2 -3 4 -6 0 6 2 12 -1
1 2 0 -3 4 0 -6 0 6 2 12 0 -1
*/

/*
-1 -2 -3 4 -6 0 -6 2 12 -1
0 -1 0 -2 0 -3 4 0 -6 0 0 -6 2 12 0 -1
*/
