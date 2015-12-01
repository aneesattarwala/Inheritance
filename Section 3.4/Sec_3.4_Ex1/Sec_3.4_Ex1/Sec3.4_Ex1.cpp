//  main.cpp
//  Sec_3.4_Ex1
//  Created by Anees Attarwala on 4/17/15.
//  Copyright (c) 2015 MichaelScott. All rights reserved.
//  Testing colon syntax. When it is used for Line class number of constructor calls are less.
//  Default point objects are not created and assignment operator for point class is not called if colon syntax is used in Line class.

#include <iostream>
#include"Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
using namespace Anees::CAD;
int main()
{
    Line L;
    return 0;
}

/**************Output in 1st case without colon syntax for Line class*******************/
/*Point object created!
Point object created!
Point object created with user inputs!
Point object created with user inputs!
Point object's assignment operator called!
Point object's assignment operator called!
Default line created!
Point object destroyed!
Point object destroyed!
Line destroyed!
Point object destroyed!
Point object destroyed!*/

/**************Output in 2nd case with colon syntax used in constructors for Line class*******/
/*Point object created with user inputs!
Point object created with user inputs!
Default line created!
Line destroyed!
Point object destroyed!
Point object destroyed!*/

