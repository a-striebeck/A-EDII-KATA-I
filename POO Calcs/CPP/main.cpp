#include <iostream>
#include ".\include\Calculator.hpp"
#include ".\include\Menu.hpp"

int main()
{
    Calculator *calc = new Calculator();
    Menu *menu = new Menu(*calc);
    menu->ProcessOperation();
    delete calc;
    delete menu;
    return 0;
}
