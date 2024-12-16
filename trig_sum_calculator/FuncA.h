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
    void ShowText() const; 
private:
    std::vector<std::string> a;
};

#endif

