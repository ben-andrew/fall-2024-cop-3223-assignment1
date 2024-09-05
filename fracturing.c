//********************************************************
// fracturing.c
// Author: Ben Andrew
// UCFID: 5638415
// Date: 9/1/2024
// Class: COP 3223, Professor Parra
//
// Purpose: to calculate the distance, perimeter, area,
// width, and height of a city encompassed by a circle
// set by two points defined by the user.
//
// Input: x1, x2, y1, and y2 points defined by the user.
//
// Output: the calculated distance, perimeter, area,
// width, and height of the circle defined by the points.
//********************************************************

// include necessary libraries for input/output and math operations
#include <stdio.h>
#include <math.h>

// define PI to 3.14159 for use in calculations
#define PI 3.14159

//********************************************************
// double askForUserInput()
//
// Purpose: asks for a number from user
// Input: a number (a double)
// Output: prints a prompt asking for a number
// Postcondition: returns the number entered by user
//********************************************************

double askForUserInput()
{
    double point;    // holds point from user input

    // ask for a point

    printf("Please, enter a number: ");
    scanf("%lf", &point);
    
    return point;
} // askForUserInput


//********************************************************
// double calculateDistance()
//
// Purpose: calculate the distance between two points
// defined by user input
// Input: four numbers
// Output: prints prompt asking for numbers, prints
// the numbers entered by user, prints the calculated distance
// Postcondition: returns the distance between the two points
//********************************************************

double calculateDistance()
{
    // asks for four numbers to define two points

    printf("Please, enter numbers for x1, x2, y1, and y2, in that order.\n");
    double x1 = askForUserInput();
    double x2 = askForUserInput();
    double y1 = askForUserInput();
    double y2 = askForUserInput();
    printf("\nThese are the points entered: \nPoint #1 entered: x1 = %.2lf; y1 = %.2lf \nPoint #2 entered: x2 = %.2lf; y2 = %.2lf \n",x1, y1, x2, y2);

    // calculate the distance between the two points

    double x_minus = x2 - x1;             // calculates x2 minus x1
    double y_minus = y2 - y1;             // calculates y2 minus y1
    double x_pow2 = pow(x_minus, 2.0);    // calculates x_minus squared
    double y_pow2 = pow(y_minus, 2.0);    // calculates y_minus squared
    double x_plus_y = x_pow2 + y_pow2;    // calculates the sum of x_pow2 and y_pow2
    double distance = sqrt(x_plus_y);     // calculates the square root of x_plus_y

    // prints the calculated distance

    printf("\nThe distance between the two points is: %.2lf\n", distance);

    return distance;
} // calculateDistance


//********************************************************
// double calculatePerimeter()
//
// Purpose: calculate the perimeter of a circle defined by
// two points from user input
// Input: four numbers
// Output: prints prompt asking for numbers, prints
// the numbers entered by user, prints the calculated perimeter
// Postcondition: returns a number between 1 and 5 representing
// the difficulty of creating this function
//********************************************************

double calculatePerimeter()
{
    // calculates the perimeter of the circle defined by the two points

    double city_diameter = calculateDistance();
    double city_radius = city_diameter / 2;
    double city_perimeter = 2 * PI * city_radius;

    // prints calculated perimeter

    printf("\nThe perimeter of the city encompassed by your request is: %.2lf\n", city_perimeter);

    double difficulty = 1.0;    // level of difficulty in creating this function

    return difficulty;
} // calculatePerimeter


//********************************************************
// double calculateArea()
//
// Purpose: calculate the area of a circle defined by
// two points from user input
// Input: four numbers
// Output: prints prompt asking for numbers, prints
// the numbers entered by user, prints the calculated area
// Postcondition: returns a number between 1 and 5 representing
// the difficulty of creating this function
//********************************************************

double calculateArea()
{
    // calculates the area of a cirlce defined by two points

    double city_diameter = calculateDistance();
    double city_radius = city_diameter / 2;
    double city_area = PI * pow(city_radius, 2);

    // prints calculated area

    printf("\nThe area of the city encompassed by your request is: %.2lf\n", city_area);

    double difficulty = 1.0;    // level of difficulty in creating this function

    return difficulty;
} // calculateArea


//********************************************************
// double calculateWidth()
//
// Purpose: calculate the width of a circle defined by
// two points from user input
// Input: four numbers
// Output: prints prompt asking for numbers, prints
// the numbers entered by user, prints the calculated width
// Postcondition: returns a number between 1 and 5 representing
// the difficulty of creating this function
//********************************************************

double calculateWidth()
{
    // uses calculateDistance function to calculate the width between two points

    double city_width = calculateDistance();

    // prints calculated width

    printf("\nThe width of the city encompassed by your request is: %.2lf\n", city_width);

    double difficulty = 1.0;    // level of difficulty in creating this function

    return difficulty;
} // calculateWidth


//********************************************************
// double calculateHeight()
//
// Purpose: calculate the height of a circle defined by
// two points from user input
// Input: four numbers
// Output: prints prompt asking for numbers, prints
// the numbers entered by user, prints the calculated height
// Postcondition: returns a number between 1 and 5 representing
// the difficulty of creating this function
//********************************************************

double calculateHeight()
{
    // uses calculateDistance function to calculate the height between two points

    double city_height = calculateDistance();

    // prints calculated height

    printf("\nThe height of the city encompassed by your request is: %.2lf\n", city_height);

    double difficulty = 1.0;    // level of difficulty in creating this function

    return difficulty;
} // calculateHeight


int main(int argc, char **argv){

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} // main