// To do:
//  Implement a menu
//  Exceptions when divide by 0
//  Integrate two functions of the Math Library

#include <iostream>
#include <cmath>
struct StructuredCalc
{
    float num1;
    float num2;
    float result;
};

void menu();
float addNumber(std::string pos);
float Addition (float valueA, float ValueB);
float Witdhraw (float valueA, float ValueB);
float Division (float valueA, float ValueB);
float Multiplication (float valueA, float ValueB);


int main()
{
    menu();
    return 0;
}

void menu(){

    StructuredCalc calculator;
    char choice = '0';
    

    do{ 
        std::cout << "\n Calculadora Estructurada" << std::endl;   
        std::cout << "1---- Suma" << std::endl;
        std::cout << "2---- Resta" << std::endl;
        std::cout << "3---- Division" << std::endl;
        std::cout << "4---- Multiplicacion" << std::endl;

        std::cin >> choice;
        if (choice == '5')
        {
            break;
        }
        
        calculator.num1 = addNumber("primer");
        calculator.num2 = addNumber("segundo");

        switch (choice){

        case '1':
            calculator.result = Addition(calculator.num1, calculator.num2);
            std::cout<< "La suma entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " << calculator.result << std::endl;
            break;

        case '2':
            calculator.result = Witdhraw(calculator.num1, calculator.num2);
            std::cout<< "La resta entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " << calculator.result << std::endl;
            break;

        case '3':
            calculator.result = Division(calculator.num1, calculator.num2);
            if (!std::isnan(calculator.result)){
                std::cout << "La division entre: " << calculator.num1 << " y " << calculator.num2 << " es igual a: " << calculator.result << std::endl;
                }
            break;

        case '4':
            calculator.result = Multiplication(calculator.num1, calculator.num2);
            std::cout<< "La multiplicacion entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " <<  calculator.result << std::endl;
            break;
        
        default:
            std::cout << "Por favor ingrese una opcion valida." << std::endl;
            break;

        }

    } while (choice!='5');

}

float addNumber(std::string pos){
    float number;
    std::cout << "Ingrese el "<< pos <<" numero: ";
    std::cin >> number;
    return number;
}
float Addition (float valueA, float valueB){
    float result = valueA + valueB;
    return result;
}

float Witdhraw (float valueA, float valueB){
    float result = valueA - valueB;
    return result;
}
float Division (float valueA, float valueB){
    if (valueB == 0)
    {
        std::cout << "Error: no se puede dividir por cero";
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
