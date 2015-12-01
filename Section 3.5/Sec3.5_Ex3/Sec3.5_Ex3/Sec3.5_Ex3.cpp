//
//  main.cpp
//  Sec3.5_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
//  using virtual functions  calling base class functionality and demonstration of virtual destruction

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;
using namespace Anees::CAD;

int main()
{
    Shape* shapes[3];
    shapes[0]=new Shape;
    shapes[1]=new Point;
    shapes[2]=new Line;
    for (int i=0; i!=3; i++) delete shapes[i];
    return 0;
}
/**********OUTPUT WHEN SHAPE DESTRUCTOR IS VIRTUAL. ALL DERIVED OBJECTS ARE PROPERLY DESTROYED****/
//3 POINT OBJECTS AND ONE LINE OBJECT SHOULD BE DESTROYED FOR NO MEMORY LEAKS//
/*Shape destroyed!
Point object destroyed!
Shape destroyed!
Line destroyed!
Point object destroyed!
Shape destroyed!
Point object destroyed!
Shape destroyed!
Shape destroyed!*/

/**********OUTPUT WHEN SHAPE DESTRUCTOR IS NOT VIRTUAL. DERIVED OBJECTS ARE NOT DESTROYED****/
/*Shape destroyed!
Shape destroyed!
Shape destroyed!*/

