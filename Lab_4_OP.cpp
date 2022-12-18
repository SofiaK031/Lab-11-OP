// Lab_4_OP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, z;
    double a;
    printf("Введіть значення x, y та z:\n");
    scanf("%i%i%i", &x, &y, &z);
    a = (3 + (exp(y - 1))) / (1 + pow(x, 2) * sqrt(y - tan(z))) - tan(155);
    printf("a = %.3f", a);
}
