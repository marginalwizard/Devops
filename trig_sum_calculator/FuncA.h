#ifndef FUNCA_H
#define FUNCA_H

#include <vector>
#include <string>

class FuncA 
{
public:
    FuncA(); 
    ~FuncA(); 
    void AddString(const std::string& str); 
<<<<<<< HEAD
    void ShowText(double x) const; 
=======
     /**
     * @brief Показати суму перших n членів ряду для заданого x.
     * @param n Кількість членів ряду для обчислення.
     * @param x Значення аргументу x.
     */
    void ShowText(int n, double x) const; 
>>>>>>> branchA
private:
    std::vector<std::string> a;
};

#endif

