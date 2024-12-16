#include "FuncA.h"
#include <iostream>

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

void FuncA::ShowText() const 
{
    for (const auto& str : a) 
{
        std::cout << str << std::endl; // Виводимо рядки
}
}

