#include "FuncA.h"
#include <iostream>
#include <cmath>

double calculateTerm(int n, double x) 
{
    double numerator = tgamma(2 * n + 1); // Чисельник (факторіал)
    double denominator = pow(4, n) * pow(tgamma(n + 1), 2) * (2 * n + 1); // Знаменник
    return (numerator / denominator) * pow(x, 2 * n + 1); // Член ряду
}

FuncA::FuncA() 
{
}

FuncA::~FuncA() 
{
}

void FuncA::AddString(const std::string& str) 
{
    a.push_back(str);
}

// Обчислюємо суму перших 3 членів ряду для переданого значення x
void FuncA::ShowText(double x) const 
{
    double result = 0.0;

    for (int i = 0; i < 3; ++i) 
{ // Фіксовано 3 члени ряду
        result += calculateTerm(i, x);
}

    std::cout << "Sum of the first 3 terms for x = " << x << " is: " << result << std::endl;
}
