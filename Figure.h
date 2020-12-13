//
// Created by prota on 15.10.2020.
//

#ifndef OOP_EXERCISE_03_FIGURE_H
#define OOP_EXERCISE_03_FIGURE_H

#include "Cord.h"
#include <iostream>
#include <cmath>
#include <string>

const double PI = 3.14159265358979323846264338327950288419716939937510;

class Figure{
protected:
    Cord Center;
    double Radius = 0;
    std::string Type;
public:
    Figure(Cord center, double radius);
    Cord GetCenter();
    double GetRadius();
    std::string GetType();
    virtual double Area() = 0;
    virtual void print() = 0;
};
#endif