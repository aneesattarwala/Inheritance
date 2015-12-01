//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Array class for point objects.
// putting array class and functions in Anees::Containers namespace


#ifndef __Sec2_6_Ex1__File__
#define __Sec2_6_Ex1__File__

#include <iostream>
#include "Point.hpp"

namespace Anees {namespace Containers{

class Array
{
private:
    CAD::Point *m_data;   // dynamic array of point objects
    int m_size;           // size of array
public:
    //constructors and destructor
    Array();                // default constructor allocating 10 elements
    Array (int n);          // default constructor allocating size n elements
    Array (const Array& A);      // copy constructor
    ~Array();              // destructor
    
    //operator overloading
    Array& operator=(const Array& A); // assignment operator
    CAD::Point& operator [] (int index); // [] square brackets operator for reading and writing elements
    const CAD::Point& operator [] (int index) const; //[] const version of square [] operator
    
    //Accessor functions
    int size() const; // returns size of array
    void SetElement(const CAD::Point& P,int n);  // sets an element in the array at position n
    CAD::Point& GetElement(int n) const; // return an element from array at position n
    
};

}}
#endif /* defined(__Sec2_6_Ex1__File__) */
