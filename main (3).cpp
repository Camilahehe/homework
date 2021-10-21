/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

****************************************************************************include <iostream>
 
using namespace std;
 
int num;
int func(int count)
{
    if (num/count)
        func(count*10);
    count/=10;
    cout<<num/count<<" ";
    num%=count;
    return 0;
}
 
void main()
{
    cin>>num;
    func(10);
    cout<<endl;
}

}
