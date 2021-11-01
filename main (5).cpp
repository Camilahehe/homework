/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************
#include <ctime>
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
for (int i = 1; i < 10; i++) { mas[i] = mas[i - 1] +d; 
cout << mas[i - 1] << " "; 
    
} 
cout << mas[9]; 
return 0;
    
}

int main 2()
{ 
srand(time(NULL)); 
int size;
cin >> size; 
int* arr = new int[size]; 
for (int i = 0; i < size ; i++) { 
hehe: arr[i] = rand() % size; 
for (int j=0;j<i;j++) { 
if (arr[j] == arr[i]) 
goto hehe; 
} } 
for (int i = 0; i < size ; i++) 
cout << arr[i] << " "; 
delete []arr;
}
