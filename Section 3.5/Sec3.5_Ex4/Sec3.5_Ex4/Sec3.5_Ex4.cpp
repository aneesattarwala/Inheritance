//
//  main.cpp
//  Sec3.5_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
//  using virtual functions to access derived object functions via pointers to base class 

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>

using namespace Anees::CAD;
int main()
{
    Shape* shapes[7];
   // Shape s1;          Error: Variable type is an abstract class.
    shapes[0]=new Line;
    shapes[1]=new Point;
    shapes[2]=new Point(5,6);
    shapes[3]=new Line(Line(Point(1,2),Point(3,2)));
    shapes[4]=new Circle;
    shapes[5]=new Circle(10,Point(1,2));
    shapes[6]=new Circle(Circle(20,Point(3,4)));
    
    for (int i=0; i!=7; i++) shapes[i]->Draw();
    
    /** Loops outputs Draw method of various objects as we have declared Draw() as virtual function in Shape class and overriden it in Point, Line and Circle classes***/
    
    /*Draw method of Line class called!
    Draw method of Point class called!
    Draw method of Point class called!
    Draw method of Line class called!
    Draw method of Circle class called!
    Draw method of Circle class called!
    Draw method of Circle class called!*/
    
    for (int i=0; i!=7; i++) delete shapes[i];   //freeing dynamic memory
    return 0;
    
}
