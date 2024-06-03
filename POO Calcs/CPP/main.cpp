#include <iostream>
#include ".\include\Calculator.hpp"
#include ".\include\Menu.hpp"

int main()
{
    Calculator *calc = new Calculator();
    Menu *menu = new Menu(*calc);
    
    do
    {
        menu->PrintMenu();
        menu->SelectOperation();
        if (menu->IsValidOption(menu->GetOption()) && menu->GetOption() != 'S')
        {
            menu->AskNumbers();
            menu->ProcessOperation();
            menu->PrintResults();
    }} while (menu->GetOption() != 'S');

    delete calc;
    delete menu;
    return 0;
}

