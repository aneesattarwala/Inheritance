//
//  Shape.cpp
//  Sec3.4_Ex2
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Header file for shape class as a base class from which shapes like point, line and circle will be inherited.
// Adding virtuality

#include "Shape.hpp"
#include<stdlib.h>
#include <sstream>
#include <string>

namespace Anees{namespace CAD{

Shape::Shape()    // default constructor
{
    
    m_id = rand()%100+ 1; // getting a random number betwee 0 and 100
}


Shape::Shape (const Shape& S):m_id(S.m_id)  // copy constructor
{

}
Shape::~Shape()   //destructor
{
    
}

int Shape::ID() const    // Get ID function
{
    return m_id;
}

string Shape::ToString() const
{
    stringstream ss;            //using stringstream object ss to create text in required format
    string sendstring;
    ss<<"ID :"<<m_id;
    sendstring=ss.str();        //returning the string using str()
    return sendstring;
}

Shape& Shape::operator = (const Shape& source)  // Assignment operator
{
    if(this==&source)               // avoid self-assignment
        return *this;
    m_id=source.m_id;
    return *this;
}
}}


