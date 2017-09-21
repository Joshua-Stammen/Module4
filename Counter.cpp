// File: Counter.cpp
// Created by Joshua Stammen on 9/21/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants,Structs, Classes
class Counter
{
private:
    unsigned int count;
public:
    //Constructor
    Counter(): count(0)
    {}
    void incCount()  //Increment count
    {
        count++;
    }
    int getCount()
    {
        return count;
    }

};

// Prototypes
// Main Program Program

int main()
{
    Counter c1,c2;

    cout << "\nc1 =" <<c1.getCount(); //Display

    c1.incCount();
    cout << "\nc1 =" <<c1.getCount();

    cout << "\nc2 =" <<c2.getCount(); //Display

    c2.incCount();
    cout << "\nc2 =" <<c2.getCount();




    return 0;

}
// Function Definitions