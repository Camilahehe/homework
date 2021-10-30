// ПРАКТИКА НЕСЧАСТНОЙ КАМИЛЫ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//дз прогрессия 1

#include <iostream>
using namespace std;


int main() 
{
    setlocale(LC_ALL,"ru");
    int mas[10];
    int d;
    cout << "С какого числа должна начинаться прогрессия?" << endl;
    cin >> mas[0];
    cout << "какой должна быть разность погрессии?" << endl;
    cin >> d;
        for (int i = 1; i < 10; i++) {
        mas[i] = mas[i - 1] +d;
        cout << mas[i - 1] << " ";
    }
    cout << mas[9];
    return 0;
}








