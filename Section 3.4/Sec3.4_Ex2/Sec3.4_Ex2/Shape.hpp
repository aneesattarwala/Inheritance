//  Shape.hpp
//  Sec3.4_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Header file for shape class as a base class from which shapes like point, line and circle will be inherited.

#ifndef __Sec3_4_Ex2__Shape__
#define __Sec3_4_Ex2__Shape__

#include <iostream>
#include <string>
using namespace std;
namespace Anees{namespace CAD{

class Shape
{
    
private:
    int m_id;
    
public:             //constructors and destructors
    
    Shape();   //constructor
    
    Shape (const Shape& S); // copy constructor
    virtual ~Shape();   //destructor
    
    //Accessing functions
    int ID() const;  //Get shape ID
    string ToString() const; // Get shape ID as ID:123;
    
    // operator overloading
    Shape& operator = (const Shape& source);  // Assignment operator
    
};
}}

#endif /* defined(__Sec3_4_Ex2__Shape__) */
