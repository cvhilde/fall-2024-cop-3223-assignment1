//********************************************************
// UCFID: 5450622
// fracturing.c
// Author: Carter Hildebrandt
// Date: 9/5/24
// Class: COP 3223, Professor Parra
// Purpose: Calculate select properties defined by two points inputted by the user.
//
// Input: Coordinates of two points.
//
// Output: Distance, perimeter, area, width, and height, all dependant on the two points inputted by the user.
//********************************************************

#include <stdio.h>
#include <math.h>

// Preprocessor declaration of PI
#define PI 3.14159  

// OBJECTIVE: Calculate diameter
// INPUT: Coordinates of inputted values
// OUTPUT: Points entered and diameter for other functions to use
// PRECONDITIONS: None
// POSTCONDITIONS: Values for all points and a diameter variable
double askForUserInput(){
    double x1, x2, y1, y2;

    printf("Enter a value for x1: ");
    scanf("%lf", &x1);
    printf("Enter a value for x2: \n");
    scanf("%lf", &x2);
    printf("Enter a value for y1: ");
    scanf("%lf", &y1);
    printf("Enter a value for y2: \n");
    scanf("%lf", &y2);

    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);

    double deltax = pow(x2 - x1, 2);                    // deltax is the difference between the x coordinates
    double deltay = pow(y2 - y1, 2);                    // deltay is the difference between the y coordinates
    double diameter = sqrt(deltax+deltay);              // calculating the final portion of the distance formula using a squareroot and the two previous variables
    return diameter;
} // askForUserInput

// OBJECTIVE: Calculate distance between two points
// INPUT: Reused diameter calculation
// OUTPUT: Distance between two points
// PRECONDITIONS: Inputs in the askForUserInput 
// POSTCONDITIONS: Value will be in the distance variable and return
double calculateDistance(){
    double distance = askForUserInput();
    printf("The distance between the two points is %.3lf\n", distance);
    return distance;
} // calculateDistance

// OBJECTIVE: Calculate perimeter from 2 points
// INPUT: Diameter calculation
// OUTPUT: Perimeter of the city (circle)
// PRECONDITIONS: Inputs in the askForUserInput
// POSTCONDITIONS: Value will be in the perimeter variable and return
double calculatePerimeter(){
    double perimeter = PI * askForUserInput();          // calculating the perimeter (circumference)
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return 2; // How hard I found this function to be.
} // calculatePerimeter

// OBJECTIVE: Calculate area from 2 points
// INPUT: Diameter calculation and PI declaration/variable
// OUTPUT: Area of the city (circle)
// PRECONDITIONS: Inputs in the askForUserInput
// POSTCONDITIONS: Value will be in the Area variable and return
double calculateArea(){
    double diameter = askForUserInput();
    double radius = diameter / 2;                         // calculating the radius from the diameter
    double area = PI * pow(radius, 2);                    // final area calculation
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 3; // How hard I found this function to be.
} // calculateArea

// OBJECTIVE: Calculate width from 2 points
// INPUT: Reused diameter calculation
// OUTPUT: Width of the city (circle)
// PRECONDITIONS: Inputs in the askForUserInput
// POSTCONDITIONS: Value will be in the width variable and return
double calculateWidth(){
    double width = askForUserInput();
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 1; // How hard I found this function to be.
} // calculateWidth

// OBJECTIVE: Calculate height from 2 points
// INPUT: Reused diameter calculation
// OUTPUT: Height of the city (circle)
// PRECONDITIONS: Inputs in the askForUserInput
// POSTCONDITIONS: Value in the height variable and return
double calculateHeight(){
    double height = askForUserInput();
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    return 1; // How hard I found this function to be.
} // calculateHeight

// OBJECTIVE: Main function
// INPUT: None
// OUTPUT: None
// PRECONDITIONS: Inputs in the askForUserInput
// POSTCONDITIONS: None
int main(int arge, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
} // main
