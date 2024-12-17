#include "FuncA.h"
#include <iostream>

int main()
{
    FuncA func; 
    double x;
 
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    func.ShowText(x); // Виводимо результат
    return 0; 
}
