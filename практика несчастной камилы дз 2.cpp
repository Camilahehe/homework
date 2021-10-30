// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//домашка 2

#include <iostream>
#include <ctime>
    using namespace std;

     int main()
     {
         srand(time(NULL));
         int size;
         cin >> size;
         int* arr = new int[size];
         for (int i = 0; i < size ; i++)
         {
         hehe:
             arr[i] = rand() % size;
             for (int j=0;j<i;j++)
             {
                 if (arr[j] == arr[i])
                     goto hehe;
             }


         }
         for (int i = 0; i < size ; i++)
             cout << arr[i] << " ";


     }


