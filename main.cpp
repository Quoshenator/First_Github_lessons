#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <windows.h>

using namespace std;

float sumDegrees(int n)
{
	float d = 0;
	int count = 1;
	float a;
	while (n > 0)
	{
		cout << "Введите " << count << "-е число: \n";
		cin >> a;
		d += pow(a, 3);
		n--;
		count++;
	}
	return d;
}

float sum(float a, float b, float c, float d) {
	//тут вычисления (сумма 3 чисел произвольной степени)
	float e = 0;
	e = pow(a + b + c, d);
	return e;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c, d, i;
	cout << "Введите три числа: \n";
	cin >> a >> b >> c; // вводим три числа, и потом степень
	cout << "Введите степень, в которую будет возведение: \n";
	cin >> d;
	cout << "Результат: \n";
	cout << sum(a, b, c, d);
	cout << "\nСейчас будем возводить в произвольную степень, введите количество итераций: \n";
	int result = 0;
	cin >> i;
	result = sumDegrees(i);
	cout << "Результат: \n";
	cout << result;
}