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
    int cm;
    void setDist(int f, float i) //Member function to set data
    {
        feet = f;
        inches = i;
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
    void add_Dist(Distance,Distance);
};


// Prototypes


// Main Program Program

int main(void)
{

    //Create an instance "instantiate"
    Distance d1, d2;

    //Use methods to set/access data
    d1.setDist(6,6.5);
    cout << "\nDis 1" << endl;
    d1.showDist();

    d2.getDist();
    cout << "\nDis 2" << endl;
    d2.showDist();

    //Update Info
    d2.getDist();
    cout << "\nDist 2" << endl;
    d2.showDist();

    //Access a public data member
    d2.cm = 8.2;
    cout << "cm is " << d2.cm << endl;





    return 0;

}
// Function Definitions