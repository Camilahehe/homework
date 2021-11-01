// дз3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//заполните массив случайными числами диапазоном от 1000-2000 и подсчитайте число элементов , у которых вторая с конца цифра - четная .
//если последняя цифра четная то и все число четное, если предпоследняя то остаток больше 10?


#include <iostream>
#include <ctime>
using namespace std;

int dz1(int size)
{
    
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
    hehe:
        arr[i] = rand() % size;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
                goto hehe;
        }


    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    delete[]arr;
    return 0;


}
int dz2(int j,int d)
{
    setlocale(LC_ALL, "ru");

   
    int mas[10];
    j = mas[0];

    for (int i = 1; i < 10; i++) {
        mas[i] = mas[i - 1] + d;
        cout << mas[i - 1] << " ";
    }
    cout << mas[9];
    return 0;
}



int main()
{
    setlocale(LC_ALL, "ru");
    int a, d, j, size;
    cout << "выбери номер домашки" << endl;
    cin >> a;
    srand(time(NULL));
    if (a == 2)
    {
        cout << "С какого числа должна начинаться прогрессия?" << endl;
        cin >> j;
        cout << "какой должна быть разность погрессии?" << endl;
        cin >> d;
        dz2(j, d);

    }
    if (a == 1)
    {
        cout << "введите число N" << endl;
        cin >> size;
        dz1(size);

    }

}

