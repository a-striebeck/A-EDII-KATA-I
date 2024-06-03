// To do:
//  Remove the if on the division, and change it for exception


#include <iostream>
#include <cmath>
struct StructuredCalc
{
    float num1 = 0;
    float num2 = 0;
    float result = 0;
};


float Addition (float valueA, float ValueB);
float Substraction (float valueA, float ValueB);
float Division (float valueA, float ValueB);
float Multiplication (float valueA, float ValueB);
void PrintMenu();
void AskValues(StructuredCalc &calculator);
void ProcessOperation(char choice, StructuredCalc &calculator);
void PrintResults(char choice, StructuredCalc &calculator);
bool IsValidOption(char option);
void Menu();

int main()
{
    Menu();
    return 0;
}


float Addition (float valueA, float valueB){
    float result = valueA + valueB;
    return result;
}

float Substraction (float valueA, float valueB){
    float result = valueA - valueB;
    return result;
}
float Division (float valueA, float valueB){
    if (valueB == 0)
    {
        return NAN;
    }else{
        float result = valueA / valueB;
        return result;
    }
}
float Multiplication (float valueA, float valueB){
    float result = valueA * valueB;
    return result;
}

void PrintMenu()
{
    std::cout << "\n Calculadora Estructurada" << std::endl;   
    std::cout << "+ \t Suma" << std::endl;
    std::cout << "- \t Resta" << std::endl;
    std::cout << "/ \t Division" << std::endl;
    std::cout << "* \t Multiplicacion" << std::endl;
    std::cout << "\"S\" \t Salir" << std::endl;
}

void AskValues(StructuredCalc &calculator){
    std::cout << "Ingrese el primer numero: ";
    std::cin >> calculator.num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> calculator.num2;
}

void ProcessOperation(char choice, StructuredCalc &calculator){

    switch (choice){
        case '+':
            calculator.result = Addition(calculator.num1, calculator.num2);
            break;
        case '-':
            calculator.result = Substraction(calculator.num1, calculator.num2);
            break;
        case '/':
            calculator.result = Division(calculator.num1, calculator.num2);
            break;
        case '*':
            calculator.result = Multiplication(calculator.num1, calculator.num2);
            break;   
        default:
            std::cout << "Por favor ingrese una opcion valida." << std::endl;
            break;
        }

}
void PrintResults(char choice, StructuredCalc &calculator)
{    

    if (!std::isnan(calculator.result)){
        std::cout << calculator.num1 << " "<< choice <<" " << calculator.num2 << " = " << calculator.result << std::endl;
    }else{
        std::cout << "Error. No se puede dividir por 0";
    }

}

bool IsValidOption(char option) {
    return option == '+' || option == '-' || option == '/' || option == '*' || option == 'S';
}

void Menu()
{
    StructuredCalc calculator;
    char choice = '0';
    do{ 
        PrintMenu();
        std::cin >> choice;
        
        if (choice == 'S')
        {
            break;
        }
        if (IsValidOption(choice))
        {
            AskValues(calculator);
            ProcessOperation(choice, calculator);
            PrintResults(choice, calculator);    
        }else{
            std::cout << "Opcion invalida.";
        }
        
        
    } while (choice!='S');
}