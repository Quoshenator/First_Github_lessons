#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float sum(float a, float b, float c, float d){
  //тут вычисления (сумма 3 чисел произвольной степени)
  float e = 0;
  e = pow(a+b+c,d);
  return e;
}

int main() {
  float a,b,c,d;
  cin >> a >> b >> c >> d; // вводим три числа, и потом степень
  cout <<sum(a,b,c,d); 
}

