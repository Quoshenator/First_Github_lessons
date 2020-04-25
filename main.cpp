#include <iostream>
#include <math.h>
using namespace std;

float sum(float a, float b, float c, float d){

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
  //1.все числа конвертятся в float 
  //2. приглашение с описанием сколько чисел ввожу 
  //3. сделать из этого функцию
  cout<<"Приветствую вас в программе команды под номером 1.\n";
  float n;
  cout<<"Введите количество чисел для обработки\n";
  cin >> n;
  cout<< "Сейчас вы должны ввести цифры от 0 до N-го числа:\n";
  float d = sumDegrees(n);
  cout<<"Программа проводит вычисления, надо подождать.\n";
  cout<<"Вот ответ: "<<d;
}
