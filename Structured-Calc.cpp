// To do:
//  Implement a menu
//  Exceptions
//  Integrate two functions of the Math Library

#include <iostream>

struct StructuredCalc
{
    float num1;
    float num2;
    float result;
};

float Addition (float valueA, float ValueB);
float Witdhraw (float valueA, float ValueB);
float Division (float valueA, float ValueB);
float Multiplication (float valueA, float ValueB);


int main()
{
    StructuredCalc calculator;
    calculator.num1 = 2;
    calculator.num2 = 6;

    calculator.result = Addition(calculator.num1, calculator.num2);
    std::cout<< "La suma entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " << calculator.result << std::endl;
    calculator.result = Witdhraw(calculator.num1, calculator.num2);
    std::cout<< "La resta entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " << calculator.result << std::endl;
    calculator.result = Division(calculator.num1, calculator.num2);
    std::cout<< "La division entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " << calculator.result << std::endl;    
    calculator.result = Multiplication(calculator.num1, calculator.num2);
    std::cout<< "La multiplicacion entre: "<< calculator.num1 << " y " << calculator.num2 << " es igual: " <<  calculator.num2 << calculator.result << std::endl;
    
    return 0;
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
    float result = valueA / valueB;
    return result;
}
float Multiplication (float valueA, float valueB){
    float result = valueA * valueB;
    return result;
}
