#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;
float sumDegrees(int n)
{
  float d = 0;
  int count = 1;
  float a;
  while(n>0)
  {
      cout<<"Введите "<<count<<"-е число\n";
      cin>>a;
      d+=pow(a,3);
      n--;
      count++;
  }
  return d;
}

float sum(float a, float b, float c, float d){
  //тут вычисления (сумма 3 чисел произвольной степени)
  float e = 0;
  e = pow(a+b+c,d);
  return e;
}

int main() {
  float a,b,c,d;
  cout << "Введите три числа";
  cin >> a >> b >> c; // вводим три числа, и потом степень
  cout << "Введите степень, в которую будет возведение";
  cin >> d; 
  cout <<sum(a,b,c,d); 
}
