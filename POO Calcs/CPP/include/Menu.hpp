#include "Calculator.hpp"
#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:

    char Option = 0;
    Calculator *tCalculator;

public:
    Menu(Calculator &tCalc);
    ~Menu();
    bool IsValidOption(char option) const;
    void AskNumbers();
    void SelectOperation();
    void PrintMenu() const;
    void PrintResults() const;
    void SetOption(char tOption);
    char GetOption() const;
    void ProcessOperation();
    void RunMenu();
};

#endif
