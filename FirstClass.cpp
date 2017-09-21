#include <iostream>
using namespace std;
//class = similar to structure but it also has behavior(internal functions)
//private : data members
//setters : update/ set data
//getters : get display/ access data

class smallobj //Define class
{
private:
    int somedata; //class data
public:
    void setdata(int d) //Member function to set data
    {
        somedata = d;
    }

    void showdata() //Member Function to display/get data
    {
        cout << "Data is " << somedata << endl;
    }
};

int main() {

    //Create instances or a member of the class
    smallobj s1, s2;
    //ERROR: You cannot access your data directly,
    //Need to use an access method.
    //cout << "Some data is " << s1.somedata << endl;

    //Dot operator -> class member access operator
    //Set Data
    s1.setdata(123);
    s2.setdata(456);

    //Show your data
    s1.showdata();
    s2.showdata();

    return 0;
}