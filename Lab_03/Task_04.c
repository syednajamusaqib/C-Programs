#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Custom enum for geometric shapes
enum Shape
{
    CIRCLE = 1,
    RECTANGLE = 2,
    TRIANGLE = 3
};


double numberValidation(double number){
    bool validInput = false;
    while (!validInput){
        if (scanf("%lf", &number) == 1) {
            if(number < 0){
                printf("%s","Enter positive number: \n");
            }
            else if(number>=0) validInput = true;
            printf("%s %.2lf\n","You entered", number);
            // validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}



// Function to compute the area of a circle
double circleArea(double radius)
{
    return M_PI * radius * radius;
}

// Function to compute the perimeter of a circle
double circlePerimeter(double radius)
{
    return 2 * M_PI * radius;
}

// Function to compute the area of a rectangle
double rectangleArea(double length, double width)
{
    return length * width;
}

// Function to compute the perimeter of a rectangle
double rectanglePerimeter(double length, double width)
{
    return 2 * (length + width);
}

// Function to compute the area of a triangle
double triangleArea(double base, double height)
{
    return 0.5 * base * height;
}

// Function to compute the perimeter of a triangle
double trianglePerimeter(double side1, double side2, double side3)
{
    return side1 + side2 + side3;
}

void shapeMetrics(enum Shape choice){
    // Circle varaibles
    double circleRadius;
    double circleAreaa;
    double circlePerimeterr;
    // Rectangle variables
    double length;
    double width;
    double rectArea;
    double rectPerimeter;
    // triangle variables
    double base,height,side1,side2,side3;
    double triArea,triPerimeter;

    switch (choice)
    {
    case CIRCLE:
        puts("Enter radius of circle: ");
        circleRadius = numberValidation(circleRadius);
        circleAreaa = circleArea(circleRadius);
        circlePerimeterr = circlePerimeter(circleRadius);
        printf("%s %.2lf\n","Area of Circle is ",circleAreaa);
        printf("%s %.2lf\n","Perimeter of Circle is ",circlePerimeterr);
        break;
    case RECTANGLE:
        puts("Enter length of rectangle: ");
        length = numberValidation(length);
        puts("Enter width of rectangle: ");
        width = numberValidation(width);
        rectArea = rectangleArea(length,width);
        rectPerimeter = rectanglePerimeter(length,width);
        printf("%s %.2lf\n","Area of Rectangle is ",rectArea);
        printf("%s %.2lf\n","Perimeter of Rectangle is ",rectPerimeter);
        break;
    case TRIANGLE:
        puts("Enter base of triangle: ");
        base = numberValidation(base);
        puts("Enter height of triangle: ");
        height = numberValidation(height);
        puts("Enter side1 of triangle: ");
        side1 = numberValidation(side1);
        puts("Enter side2 of triangle: ");
        side2 = numberValidation(side2);
        puts("Enter side3 of triangle: ");
        side3 = numberValidation(side3);
        triArea = triangleArea(base,height);
        triPerimeter = trianglePerimeter(side1,side2,side3);
        printf("%s %.2lf\n","Area of Traingle is ",triArea);
        printf("%s %.2lf\n","Perimeter of Triangle is ",triPerimeter);
        break;
    }
}

int main()
{
    
    int choice;
    bool validInput = false;
    printf("%s", "Enter your choice to calculate area and perimeter (1-> Circle, 2-> Rectangle, 3-> Triagle)\n");
    while (!validInput)
    {
        if (scanf("%d", &choice) == 1)
        {
            if (choice <= 0 || choice > 3)
            {
                printf("%s", "Enter valid choice: \n");
            }
            if (choice == 1)
            {
                shapeMetrics(CIRCLE);
                validInput = true;
            }
            if (choice == 2)
            {
                shapeMetrics(RECTANGLE);
                validInput = true;
            }
            if (choice == 3)
            {
                shapeMetrics(TRIANGLE);
                validInput = true;
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid choice.\n");
            while (getchar() != '\n');
        }
    }

    

    return 0;
}
