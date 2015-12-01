//
//  File.cpp
//  Copyright (c) 2015 MichaelScott. All rights reserved.
// Array class for point objects
// putting array class and functions in Anees::Containers namespace


#include "Array.hpp"
#include "OutOfBoundsException.hpp"
#include"ArrayException.hpp"
namespace Anees {namespace Containers{

Array::Array()  //default constructor with 5 elements of point objects
{
    m_size=5;
    m_data= new CAD::Point[m_size];
   // cout<<"Point array with 5 points created!"<<endl;
}

Array::Array(int n)  // constructor with user given elements of point objects
{
    m_size=n;
    m_data=new CAD::Point[m_size];
   // cout<<"Point array with "<<m_size<<" points created!"<<endl;
}

Array::Array (const Array& A) //copy constructor performing deep copy
{
    m_size=A.m_size;
    m_data=new CAD::Point[m_size];   // creating new memory for new object to be created using copy ctr.
    for (int i=0; i<=m_size;i++)
    {
        m_data[i]=A.m_data[i];
    }
  //  cout<<"Point array created via copy construction!"<<endl;
}

Array::~Array()  // destructor for array of point objects
{
    delete [] m_data;
   // cout<<"Array deleted!"<<endl;
}

Array& Array::operator=(const Array& A)  // Assignment operator
{
    if (this==&A)     // avoiding self-assignment
    {
        return *this;
    }
    delete [] m_data;              // deleting current memoory.
    m_size=A.m_size;
    m_data=new CAD::Point[m_size];  // creating new memory for current object being assigned to
    for (int i=0; i<=m_size;i++)
    {
        m_data[i]=A.m_data[i];
    }
    return *this;     // return pointer to current object being assigned to
}

// Read-write operator - > Reference returned can be modified as it is not "const"
CAD::Point& Array::operator[](int index)  //[] operator for array indexing
{
    if (index>-1 && index < m_size)
    {
        return (m_data[index]);     // returning index value
    }
    else
        throw OutofBoundsException(-1) ;  // if index out of bounds throw exception object.
}

// Read only operator -> Reference returned cannot be modified as it is "const Point&"
const CAD::Point& Array::operator[](int index) const //const version of [] operator
{
    
    if (index>-1 && index<m_size)
    {
        return (m_data[index]);     // returning index value
    }
    else
        throw OutofBoundsException(-1);      // if index out of bounds throw exception object.
        
}

int Array::size() const // returns size of array
{
    return m_size;
}


void Array::SetElement(const CAD::Point& P, int n)  // sets an element in the array at position n
{
    if(n>-1 && n< m_size)
    {
        m_data[n]= P;
    }
    else
        throw OutofBoundsException(-1);         // if index out of bounds throw exception object.
}

CAD::Point& Array::GetElement(int n) const // return  element from array at position n
{
    if (n>-1 && n<m_size)
    {
        return (m_data[n]);
    }
    else
        
        throw OutofBoundsException(-1);          // if index out of bounds throw exception object.
    
}


}}
