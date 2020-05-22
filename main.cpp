#include <iostream>
#include <string>
#include <math.h>

using namespace std;

float x,y,z,s,t;
int operations()
{
if (t==2)
{
s=((x*x*x)+(y*y*y)+(z*z*z));
}
else 
{
s=((x*x*x)*(y*y*y)*(z*z*z));
}
 cout<<"Результат:"<<endl;
cout<<s<<endl;
}

int main()
{    
  cout<<"Что вы хотите сделать? Если сложение - наберите цифру 2, если умножение - любую другую"<<endl;
  cin>>t;
   cout<<"Введите 3 числа:"<<endl;
   cin>>x;
    cin>>y;
     cin>>z;

operations();
    return 0;
}
