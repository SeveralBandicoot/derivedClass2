/*
Derived Class 1

Author: Abdul Adeleye

@ AJ Enrique Arguello

9/21/24

Objectives: 
- Find another Base class program from other students and create a Derived Class with new attributes and 1 matching Method( ) and then demonstrate using the Base Attributes but the derived virtual Method( ). 

- Create a .cpp File and create Objects from Both. Invoke the Methods
 
New Concepts: virtual void, inheritance 
*/
#include <iostream>
#include <string>
#include "class.h"

using namespace std;

int main() {
    animal shark("Shark", "vertebrate");
    shark.printName();

    cout << "\n\n";

    capybara capy("Capybara", "Caviidae"); // new object from newly created derived class 
    capy.printName();
}
