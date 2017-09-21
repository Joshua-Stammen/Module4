// File: PointClass.cpp
// Created by Joshua Stammen on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Constants,Structs, Classes
class Point
{
private:
    float x;
    float y;
public:
    //Constructor
    Point(): x(0.0), y(0.0){}
    //Methods
    void showPoint()
    {
        cout << "X = " << x<< endl;
        cout << "Y = " << y<< endl;
    }
    void UpdatePoint(float xnew,float ynew)
    {
        x=xnew;
        y=ynew;
    }
};

// Prototypes


// Main Program Program

int main() {

    Point p1;
    p1.showPoint(); //display values
    p1.UpdatePoint(2.5, 3.9); //update values
    p1.showPoint();


    return 0;

}
// Function Definitions