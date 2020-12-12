//
// Created by protaxy on 12/12/20.
//

#ifndef OOP_LP7_FACTORY_H
#define OOP_LP7_FACTORY_H

#include <memory>

#include "Figure.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Octagon.h"

template <class T>
class Factory{
    std::shared_ptr<Figure> CreateFigure(std::string type){
        std::shared_ptr<Figure> result;
        if (type == "Pentagon"){
            std::cout << "enter pentagon center cords and radius:\n";
            Cord center;
            double radius;
            std::cin >> center.X >> center.Y >> radius;
            Pentagon* pentagon = new Pentagon(center, radius);
            result = std::shared_ptr<Figure>(pentagon);
        } else if (type == "Hexagon"){
            std::cout << "enter hexagon center cords and radius:\n";
            Cord center;
            double radius;
            std::cin >> center.X >> center.Y >> radius;
            Hexagon* hexagon = new Hexagon(center, radius);
            result = std::shared_ptr<Figure>(hexagon);
        } else if (type == "Octagon"){
            std::cout << "enter octagon center cords and radius:\n";
            Cord center;
            double radius;
            std::cin >> center.X >> center.Y >> radius;
            Octagon* octagon = new Octagon(center, radius);
            result = std::shared_ptr<Figure>(octagon);
        }
        return result;
    }
};

#endif //OOP_LP7_FACTORY_H
