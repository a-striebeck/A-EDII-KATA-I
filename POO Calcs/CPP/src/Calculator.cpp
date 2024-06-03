#include "../include/Calculator.hpp"

Calculator::Calculator() : ValueA(0), ValueB(0), Result(0) 
{
}

Calculator::~Calculator()
{
}

void Calculator::Addition (){
    Result = ValueA + ValueB;
}

void Calculator::Substraction (){
    Result = ValueA - ValueB;
}
void Calculator::Division (){
    if (ValueB == 0)
    {
        Result = NAN;
    }else{
        Result = ValueA / ValueB;
    }
}
void Calculator::Multiplication (){
    Result = ValueA * ValueB;
}

void Calculator::SetValueA(float value){
    ValueA = value;
}
void Calculator::SetValueB(float value){
    ValueB = value;
}
float Calculator::GetValueA() const{
    return ValueA;
}

float Calculator::GetValueB() const{
    return ValueB;
}

float Calculator::GetResult() const{
    return Result;
}
