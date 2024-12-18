#include "FuncA.h"
#include <iostream>

int main()
{
    FuncA func; 
<<<<<<< HEAD
    double x;
 
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    func.ShowText(x); // Виводимо результат
=======

    int n;         
    double x;

    std::cout << "Enter the number of terms (n): ";
    std::cin >> n;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    func.ShowText(n, x); 
>>>>>>> branchA
    return 0; 
}
