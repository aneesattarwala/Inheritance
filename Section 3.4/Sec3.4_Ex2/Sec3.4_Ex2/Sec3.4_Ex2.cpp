
//  main.cpp
//  Sec3.4_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Creating shape base class

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
using namespace std;
using namespace Anees::CAD;
int main()
{
    Shape s; // Create shape.
    Point p(10, 20); // Create point.
    Line l(Point(1,2), Point(3, 4)); // Create line.
    cout<<s.ToString()<<endl; // Print shape.    ->ID : 8
    cout<<p.ToString()<<endl; // Print point.    ->Point (10,20)
    cout<<l.ToString()<<endl; // Print line.     ->Line runs from Point(1,2) to Point(3,4)and has
                              //                 ->length of 2.828
    
    cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape.   ->ID : 8
    cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work?->  ID : 50
    cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work?->    ID : 31
    Shape* sp; // Create pointer to a shape variable.
    sp=&p; // Point in a shape variable. Possible? -> Yes, due to substitution principle derived class can be assigned to base class.
    cout<<sp->ToString()<<endl; // What is printed? ->ID:50, ID of shape class which should by Point ID as well
    
    // Create and copy Point p to new point.
    Point p2;
    p2=p;
    cout<<p2<<", "<<p2.ID()<<endl; // Is the ID copied if you do not call
    // the base class assignment in point? -> No it is not copied, as base class part is not assigned so the ID of P2 is not equal to ID of  P.
 
    return 0;
}
