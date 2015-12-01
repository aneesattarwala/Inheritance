//  Line.cpp
//  Copyright (c) 2015 MichaelScott. All rights reserved.
//  Line class with Point class objects. Line class implements functionalities like outputting lenght of line, description of line and has overloaded functions to initialize line object, copy line objects and getting and setting line points.
// Adding assignment operator and << operator to print out the line object using friend function.
// Implemented colon syntax for line class
#include "Line.hpp"
#include "Point.hpp"
#include<string>
#include<sstream>
#include<cmath>
#include<iomanip>
using namespace std;
namespace Anees{namespace CAD{
/****LINE CLASS CONSTRUCTORS WITH COLON SYNTAX***************************/

Line::Line():Startpoint(0,0),Endpoint(0,0)//Default constructor-setting points to (0,0)
{
    cout<<"Default line created!"<<endl;
}

Line::Line(const Point& start, const Point& end):Startpoint(start),Endpoint(end)
{
//    Startpoint = start;
//    Endpoint = end;
     cout<<"Line created with given points!"<<endl;
}


/****LINE CLASS CONSTRUCTORS WITHOUT COLON SYNTAX***************************/

//Line::Line()                           //Default constructor-setting begin and end points to (0,0)
//{
//    Point begin(0,0), finish(0,0);
//    Startpoint = begin;
//    Endpoint = finish;
//    cout<<"Default line created!"<<endl;
//}
//
//Line::Line(const Point& start, const Point& end)    //Constructing line with point given during
////objectconstruction
//{
//    Startpoint = start;
//    Endpoint = end;
//    // cout<<"Line created with given points!"<<endl;
//}

Line::Line(const Line&L):Startpoint(L.Startpoint),Endpoint(L.Endpoint)      //copy constructor
{
    //cout<<"Copy constructor for line object called!"<<endl;
}

Line::~Line()                     //destructor
{
    cout<<"Line destroyed!"<<endl;
}


Point Line::Start() const          //getter function to get start point
{
    return Startpoint;
}

Point Line::End() const            //getter function to get end point
{
    return Endpoint;
}

void Line::Start(const Point &Pt)   //setter function to set start point
{
    Startpoint=Pt;
}

void Line::End(const Point &Pt)    //setter function to set end point
{
    Endpoint=Pt;
}

string Line::ToString() const     //Returns string description of line
{
    
    stringstream ss;            //using stringstream object ss to create text in required format
    string sendstring;
    ss<<"Line runs from "<<Startpoint.ToString()<<" to "<<Endpoint.ToString()<<"and has length of "<<setprecision(4)<<Length();
    sendstring=ss.str();        //returning the string as required using str()
    return sendstring;
    
    
}
double Line:: Length() const // Calculate length of line object passed by reference. Using Distance
//function from Point class and applying delegation
{
    return (Endpoint.Distance(Startpoint));
    
}

//Assignment operator
Line& Line:: operator= (const Line& source)
{
    
    cout<<"Assignment operator for Line class called!"<<endl;
    if(this ==&source)
        return *this;
    Startpoint=source.Startpoint;
    Endpoint=source.Endpoint;
    return *this;
}


// Global operator
ostream& operator << (ostream& os, const Line& L) //printing point from cout
{
    
    os<<"Line runs from "<<L.Startpoint<<" to "<<L.Endpoint<<" and has length of "<<setprecision(4)<<L.Length();
    return os;
}
}}

