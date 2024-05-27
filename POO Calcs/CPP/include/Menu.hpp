#include "Calculator.hpp"

class Menu
{
private:

    int Option = 0;
    Calculator *tCalculator;
    

public:
    Menu(Calculator &tCalc);
    ~Menu();
    void AskNumbers();
    void AskOperation();
    void PrintMenu();
    void PrintResults();
};

Menu::Menu(Calculator &tCalc)
{
    tCalculator = &tCalc;
}

Menu::~Menu()
{
}
