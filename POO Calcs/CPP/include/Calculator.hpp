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
    Calculator();
    ~Calculator();
    void Addition ();
    void Substraction ();
    void Division ();
    void Multiplication ();
    void SetValueA(float value);
    void SetValueB(float value);
    float GetValueA() const;
    float GetValueB() const;
    float GetResult() const;



};

#endif 
