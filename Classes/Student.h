#pragma once
#include "Chelovek.h"
class Student :
    public Chelovek
{
    double _srBall;
public:
    Student();
    Student(const string& namee, int agee, double srBalll);
    void SetSrBall(double srBalll);
    double GetSrBall();
    void print();
};

