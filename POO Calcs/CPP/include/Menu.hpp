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
    void AskNumbers();
    void SelectOperation();
    void PrintMenu();
    void PrintResults();
    void SetOption(char tOption);
    char GetOption();
    void ProcessOperation();
    void RunMenu();
};

#endif
