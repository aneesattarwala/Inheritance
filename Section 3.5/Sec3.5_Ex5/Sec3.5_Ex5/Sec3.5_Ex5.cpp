
//  main.cpp
//  Sec3.5_Ex5
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Demonstration of Template method pattern
// Print function prints information about the correct shape even though it is defined in base class and in not polymorphic. It delegates polymorphic functionality to ToString function to do the job

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace Anees::CAD;
int main()
{
    Shape *sp=new Point(1,2);            //Shape pointer to point class
    Shape *sl=new Line(Point(1,2),Point(3,4)); //Shape pointer to line class
    Shape *sc=new Circle(10,Point(1,2));       //Shape pointer to circle class
    sp->Print();
    sl->Print();
    sc->Print();
    delete sp;
    delete sl;
    delete sc;
    return 0;
}

/**OUTPUT**/

// ID :8 Point(1,2)
// ID :59 Line runs from ID :50 Point(1,2) to ID :74 Point(3,4)and has length of 2.828
// ID :73 Circle has centre ID :31 Point(1,2) and radius 10


