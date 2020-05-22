#include <iostream>
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


int main() {

}
© 2020 GitHub, Inc.
