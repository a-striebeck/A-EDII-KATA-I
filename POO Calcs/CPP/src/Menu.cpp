#include "..\include\Menu.hpp"

Menu::Menu(Calculator &tCalc)
{
    tCalculator = &tCalc;
}

Menu::~Menu()
{
}

void Menu::SetOption(char tOption){
    Option = tOption;
}

char Menu::GetOption(){
    return Option;
}

void Menu::AskNumbers(){

    float num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    tCalculator->SetValueA(num);
    std::cout << "Ingrese otro numero: ";
    std::cin >> num;
    tCalculator->SetValueB(num);

}

void Menu::PrintMenu(){

    std::cout << "\n Calculadora Objetos" << std::endl;   
    std::cout << "+ \t Suma" << std::endl;
    std::cout << "- \t Resta" << std::endl;
    std::cout << "/ \t Division" << std::endl;
    std::cout << "* \t Multiplicacion" << std::endl;
    std::cout << "\"S\" \t Salir" << std::endl;

}

void Menu::SelectOperation(){

    std::cout << "Ingrese la operacion (+, -, *, /): ";
    std::cin >> Option;
    if (Option != '+' && Option != '-' && Option != '/' && Option != '*' && Option != 'S'){
        std::cout << "Opcion invalida.";
    }

}

void Menu::PrintResults(){    

    if (std::isnan(tCalculator->GetResult())) {
        std::cout << "Error: No se puede dividir por cero.\n";
    } else {
        std::cout << tCalculator->GetValueA() << " " << Option << " " << tCalculator->GetValueB() << " = " << tCalculator->GetResult() << std::endl;
    }

}

void Menu::ProcessOperation(){

    switch (Option)
    {
        case '+':
            tCalculator->Addition();
        break;

        case '-':
            tCalculator->Withdraw();
        break;

        case '/':
            tCalculator->Division();
            break;

        case '*':
            tCalculator->Multiplication();
            break;

        default:
        break;
        }
}

void Menu::RunMenu(){
    PrintMenu();
    SelectOperation();
    if (Option == '+' || Option == '-' || Option == '/' || Option == '*')
    {
        AskNumbers();
        ProcessOperation();
        PrintResults();
    }
    
}
