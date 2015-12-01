//
//  main.cpp
//  Sec3.6_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// // Error checking for Array bounds in class Array using try..catch block. Exception handling using throw objects.

#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Circle.hpp"
#include "Array.hpp"
#include"ArrayException.hpp"
#include "OutOfBoundsException.hpp"
#include <iostream>
using namespace Anees::CAD;
using namespace Anees::Containers;
int main()
{
    try{
        
        Array A(4);     //Array of size 4. Setting elements more index more than 4 and less than 0.
        A[0]=Point(1,2);
        A[1]=Point(3,4);
        A.SetElement(Point(5,6),2);
        A.SetElement(Point(-1,-2),3);
        
        //**** TEST CASES***//
        
        A[4]=Point(-4,-5);            // setting index>array size, exception thrown and caught
        A.SetElement(Point(4,10),5);  // setting index>array size, exception thrown and caught
        A.GetElement(-1);             // getting index<0, exception thrown and caught
        cout<<A[-1];                 //  getting index<0, exception thrown and caught
    }
    catch(ArrayException& Ex)
    {
        cout<<Ex.GetMessage();
    }
    catch(...)
    {
        cout<<"Uhandled exception occured!"<<endl;
    }
    
    return 0;
}
