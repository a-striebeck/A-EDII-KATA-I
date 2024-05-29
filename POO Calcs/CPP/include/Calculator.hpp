#include <iostream>
#include <cmath>
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

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
    void Withdraw ();
    void Division ();
    void Multiplication ();
    void SetValueA(float value);
    void SetValueB(float value);
    float GetValueA();
    float GetValueB();
    float GetResult();



};

#endif 
