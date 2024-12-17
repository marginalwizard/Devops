#include "FuncA.h"
#include <iostream>
#include <cmath>

double calculateTerm(int n, double x)
{
    double numerator = tgamma(2 * n + 1); 
    double denominator = pow(4, n) * pow(tgamma(n + 1), 2) * (2 * n + 1); 
    return (numerator / denominator) * pow(x, 2 * n + 1); 
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

void FuncA::ShowText(int n, double x) const 
{
    double result = 0.0;
    for (int i = 0; i < n; ++i)
{
        result += calculateTerm(i, x);
}
    std::cout << "Sum of the first " << n << " terms for x = " << x << " is: " << result << std::endl;
}
