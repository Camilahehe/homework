/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{  
  setlocale(LC_ALL, "Russian"); // функция для использвания русского языка
  int n1 = 0, n2 = 1, i , m = 0;

  cout << "Введите число последовательности фибоначи:";
  cin >> i;

  while (i > 1) {
    m = n2 + n1;
    n1 = n2;
    n2 = m;
      i -= 1;
  }
  cout << n1;

}
