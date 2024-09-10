//Author: Shanya Bruey
//UCFID: 4802517
//Class: UCF COP 3223
//Purpose: Programing Assignment 1
//Professor: Juan Parra
//Date: 9/8/24

#include <stdio.h>
#include <math.h>

// Define PI as the required value
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) 
{
    // Call the functions to avoid redundancy
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;  
}

double calculateDistanceHelper()
{
    // Prompting the user to input their value using askForUserInput function 
    double x1, x2, y1, y2;
    printf("Enter points: \n");
    x1 = askForUserInput();
    x2 = askForUserInput();
    y1 = askForUserInput();
    y2 = askForUserInput();
    
    // Print the resuls
    printf("\nPoint #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("\n");

    // Calculate the distance between points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    return distance;
}

double calculateDistance() 
{
    // Call the calculateDistance function to avoid redundancy
    double distance = calculateDistanceHelper();
    
    // Print the result
    printf("The distance between the two points is %.2lf\n\n", distance);

    return distance;
}

double calculatePerimeter()
{
    // Call the calculateDistanceHelper function to avoid redundancy
    double distance = calculateDistanceHelper();
    double perimeter = 2 * PI * (distance / 2);  

    // Print the result
    printf("The perimeter of the city encompassed by your request is %.2lf\n\n", perimeter);

    return 3.0; 
}

double calculateArea() 
{
    // Call the calculateDistanceHelper function to avoid redundancy
    double distance = calculateDistanceHelper();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    // Print the result
    printf("The area of the city encompassed by your request is %.2lf\n\n", area);

   return 3.0; 
}

double calculateWidth() 
{
    // Call the calculateDistancehelper function to avoid redundancy
    double distance = calculateDistanceHelper();
    
    // Assuming width is the same as the diameter
    // Print the result
    printf("The width of the city encompassed by your request is %.2lf\n\n", distance);

    return 1.0; 
}

double calculateHeight() 
{
    // Call the calculateDistanceHelper function to avoid redundancy
    double distance = calculateDistanceHelper();
    
    // Assuming height is the same as the diameter
    // Print the result
    printf("The height of the city encompassed by your request is %.2lf\n\n", distance);

    return 1.0; 
}

double askForUserInput() 
{
    //Promting the user to input a double value
    double value;
    scanf("%lf", &value);
    return value; 
}