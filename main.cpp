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
  cout << "Введите три числа"
  cin >> a >> b >> c; // вводим три числа, и потом степень
  cout << "Введите степень, в которую будет возведение"
  cin >> d; 
  cout <<sum(a,b,c,d); 
}
