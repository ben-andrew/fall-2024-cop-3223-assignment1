//********************************************************
// fracturing.c
// Author: Ben Andrew
// UCFID: 5638415
// Date: 9/1/2024
// Class: COP 3223, Professor Parra
// Purpose: 
// Input: 
//
// Output: 
//********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput(){

    // declare variables

    double point;

    // ask user for two x and two y inputs

    printf("Please, enter a number: ");
    scanf("%lf", &point);
    
    return point;

} // askForUserInput

double calculateDistance(){

    double x1;
    double x2;
    double y1;
    double y2;

    printf("Please, enter numbers for x1, x2, y1, and y2, in that order.\n");
    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    printf("\nThese are the points entered: \nPoint #1 entered: x1 = %.2lf; y1 = %.2lf \nPoint #2 entered: x2 = %.2lf; y2 = %.2lf \n",x1, y1, x2, y2);

    double x2_minus_x1 = x2 - x1;
    double y2_minus_y1 = y2 - y1;
    double x_pow2 = pow(x2_minus_x1, 2.0);
    double y_pow2 = pow(y2_minus_y1, 2.0);
    double x_pow2_plus_y_pow2 = x_pow2 + y_pow2;
    double distance = sqrt(x_pow2_plus_y_pow2);

    printf("\nThe distance between the two points is: %.2lf\n", distance);

    return distance;

} // calculateDistance

double calculatePerimeter(){

    calculateDistance();

    return 0;
}

/*double calculateArea(){
    return 0;
}

double calculateWidth(){
    return 0;
}

double calculateHeight(){
    return 0;
}*/

int main(int argc, char **argv){

    calculatePerimeter();

    return 0;
} // main