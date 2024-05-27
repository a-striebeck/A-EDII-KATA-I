#include <iostream>
#include <cmath>

class Calculator
{
private:
    float ValueA;
    float ValueB;
    float Result;
public:
    Calculator(/* args */);
    ~Calculator();
    void Addition ();
    void Witdhraw ();
    void Division ();
    void Multiplication ();
    void SetValueA(float value);
    void SetValueB(float value);
    float GetValueA();
    float GetValueB();
    float GetResult();



};



Calculator::Calculator(/* args */)
{
}

Calculator::~Calculator()
{
}

void Calculator::Addition (){
    float Result = ValueA + ValueB;
}

void Calculator::Witdhraw (){
    float result = ValueA - ValueB;
}
void Calculator::Division (){
    if (ValueB == 0)
    {
        Result = NAN;
    }else{
        float Result = ValueA / ValueB;
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
float Calculator::GetValueA(){
    return ValueA;
}

float Calculator::GetValueB(){
    return ValueB;
}

float Calculator::GetResult(){
    return Result;
}