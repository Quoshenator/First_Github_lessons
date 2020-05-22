#include <iostream>
#include <math.h>
using namespace std;
loat x,y,z,s,t;


float sum(float a, float b, float c, float d)
{
//Заглушка для команды 2
}


int operations()
{
//Заглушка для команды 3
}

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


int main() {

}
