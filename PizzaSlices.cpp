// Programming Challenge, Pizza Slices 

//  This program calculates the number of slices in a pizza.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


/*
(A) Ask the user for the diameter of the pizza in inches.
(B) Divide the diameter by 2 to get the radius.
(C) Calculate the number of slices that may be taken from a pizza of that size if each slice has an area of 14.125 square inches.
(D) Display a message telling the number of slices.
*/
int main()
{
    // Declare all the variables you will be using within this program
    float diameter = 0;
    float radius = diameter / 2;
    float areaForC = 14.125;
    //initialised pi as a constant as the number should never change
    const float pi = 3.14;

    // Expand the required Logic to solve this problem
    float totalArea = pi * pow(radius, radius);
    float slices = 14.125 / totalArea;

    // Display results to the nearest whole number
    cout << "Please enter the diameter of the pizza in inches: ";
    cin >> diameter;
    cout << "Cut this pizza into " << floor(slices) << " slices.";

    return 0;
}

/* SAMPLE RUN RESULTS

Enter the pizza diameter (in inches): 14
Cut this pizza into 11 slices.
*/
