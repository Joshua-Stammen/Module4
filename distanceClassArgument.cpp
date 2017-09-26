// File: distanceClassArgument.cpp
// Created by Joshua Stammen on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants,Structs, Classes

class Distance //Define class
{
private:
    int feet; //class data
    float inches;
public:
    //Constructor with no arguments
    Distance(): feet(0), inches(0) //Constructor with no arguments
    {/* empty body */}
    //Constructor with two arguments
    Distance (int ft,float in): feet(ft), inches(in)
    {/* empty body */}


    void setDist(int ft, float in) //Member function to set data
    {
        feet = ft;
        inches = in;
    }

    void getDist() // get user input)
    {
        cout << " \nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches ";
        cin >> inches;

    }

    void showDist() //Member Function to display/get data
    {
        cout << "Feet " << feet << " and inches " <<inches<< endl;
    }
    void add_Dist(Distance d1,Distance d2);
};


// Prototypes


// Main Program Program

int main(void)
{

    //Create an instance "instantiate"
    Distance d1, d4;
    cout << "\nd1 = ";
    d1.showDist();

    Distance d2(8,2);
    Distance d3(2,4);
    cout << "\nd2 = ";
    d2.showDist();
    cout << "\nd3 = ";
    d3.showDist();
    d4.add_Dist(d2,d3);
    cout << "\nd4 = ";
    d4.showDist();

    return 0;

}
// Function Definitions
//Belongs to the class. A method for members only
// Template : CLASSNAME:: Function_name()
// 1) Declare prototype inside class
// 2) Definition is outside class
// 3) Use the scope resolution operator ::

void Distance:: add_Dist(Distance d1, Distance d2)
{
     inches = d2.inches + d1.inches;  // add the inches
    feet = 0;
    if(inches >= 12.0)
    {
        inches -= 12.0;
        feet++;             //check for extra foot
    }
     feet += d2.feet + d1.feet; //add feet
}
