//********************************************************
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

// Coordinate variables initialized as static doubles.
static double x1_coord, y1_coord, x2_coord, y2_coord;

// OBJECTIVE: Ask the user for inputs of 2 points and inputs them into variables
// INPUT: X and Y coordinates of two points
// OUTPUT: None
double askForUserInput(){

    printf("Enter the coordinates for Point #1 (x1 x2)\n");     
    printf("Enter a value: ");                                  
    scanf("%lf", &x1_coord);                            // First x Coordinate
    printf("Enter a value: "); 
    scanf("%lf", &x2_coord);                            // Second x Coordinate
    printf("Enter the coordinates for Point #2 (y1 y2)\n");
    printf("Enter a value: ");
    scanf("%lf", &y1_coord);                            // First y Coordinate
    printf("Enter a value: ");
    scanf("%lf", &y2_coord);                            // Second y Coordinate
    return 0;
} //askForUserInput

// OBJECTIVE: Display points entered, allowing me to call it after every calculation.
// INPUT: None
// OUTPUT: Function to call back on to print the points of the coordinates.
void coordsEntered(){
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1_coord, y1_coord);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2_coord, y2_coord);
} // coordsEntered

// OBJECTIVE: Calculate diameter
// INPUT: Coordinates of stored variables
// OUTPUT: Diameter
double calculateDiameter(){
    double deltax = pow(x2_coord-x1_coord, 2);          // deltax is the difference between the x coordinates
    double deltay = pow(y2_coord-y1_coord, 2);          // deltay is the difference between the y coordinates
    double diameter = sqrt(deltax+deltay);              // calculating the final portion of the distance formula using a squareroot and the two previous variables
    return diameter;
} // calculateDiameter

// OBJECTIVE: Calculate distance between two points
// INPUT: Reused diameter calculation
// OUTPUT: Distance between two points
double calculateDistance(){
    double distance = calculateDiameter();
    printf("The distance between the two points is %.3lf\n", distance);
    coordsEntered();
    return distance;
} // calculateDistance

// OBJECTIVE: Calculate perimeter from 2 points
// INPUT: Diameter calculation
// OUTPUT: Perimeter of the city (circle)
double calculatePerimeter(){
    double perimeter = PI*calculateDiameter();          // calculating the perimeter (circumference)
    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    coordsEntered();
    return 2; // How hard I found this function to be.
} // calculatePerimeter

// OBJECTIVE: Calculate area from 2 points
// INPUT: Diameter calculation and PI declaration/variable
// OUTPUT: Area of the city (circle)
double calculateArea(){
    double diameter = calculateDiameter();
    double radius = diameter / 2;                       // calculating the radius from the diameter
    double area = PI*pow(radius, 2);                    // final area calculation
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    coordsEntered();
    return 3; // How hard I found this function to be.
} // calculateArea

// OBJECTIVE: Calculate width from 2 points
// INPUT: Reused diameter calculation
// OUTPUT: Width of the city (circle)
double calculateWidth(){
    double width = calculateDiameter();
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    coordsEntered();
    return 1; // How hard I found this function to be.
} // calculateWidth

// OBJECTIVE: Calculate height from 2 points
// INPUT: Reused diameter calculation
// OUTPUT: Height of the city (circle)
double calculateHeight(){
    double height = calculateDiameter();
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    coordsEntered();
    return 1; // How hard I found this function to be.
} // calculateHeight

// Main function
int main(int arge, char **argv) {
    askForUserInput();
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
} // main
