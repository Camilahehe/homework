#include <iostream>

using namespace std;

int main()
{  
    setlocale(LC_ALL, "Russian"); // функция для использвания русского языка

    cout << "Первая игральная кость =" << rand() % 6 + 1;
    cout << "\nВторая игральная кость =" << rand() % 6 + 1;
}