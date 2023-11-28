#include <stdio.h>
#include <stdbool.h>
// Input Validation for number
double numberValidation(double number);
// operatorInputValidation prototype
char operatorInputValidation(char a);
// addition function prototype
double addition(double a, double b);
// subtraction function prototype
double subtraction(double a, double b);
// multiplication function prototype
double multiplication(double a, double b);
// division function prototype
double division(double a, double b);

int main(void)
{
    double result;
    double num1, num2;
    char operation;
    printf("%s\n", "---- This is Basic Calculator ----");
    operation = operatorInputValidation(operation);

    puts("Enter first number: ");
    num1 = numberValidation(num1);

    puts("Enter second number: ");
    num2 = numberValidation(num2);
    // Checking for zero division error
    if(operation == '/' && (int)num2 == 0){
        printf("Division by zero error. Please enter number other than zero\n");
        puts("Enter second number: ");
        num2 = numberValidation(num2);
    }

    switch (operation) {
        case '+':
            result = addition(num1,num2);
            printf("%s %.2lf","Sum of given numbers is: ",result);
            break;
        case '-':
            result = subtraction(num1,num2);
            printf("%s %.2lf","subtraction of given numbers is: ",result);
            break;
        case '*':
            result = multiplication(num1,num2);
            printf("%s %.2lf","product of given numbers is: ",result);
            break;
        case '/':
            result = division(num1,num2);
            printf("%s %.2lf","result of division is: ",result);
            break;
    }
    return 0;
}
// Creating function for adding two numbers
double addition(double a, double b)
{
    double sum = a + b;
    return sum;
}

// Creating function for subtracting two numbers
double subtraction(double a, double b)
{
    return a-b;
}

// Creating function for multiplying  two numbers
double multiplication(double a, double b)
{
    return a*b;
}

// Creating function for dividing two numbers
double division(double a, double b)
{
    double result = a / b;
    return result;
}

char operatorInputValidation(char a)
{
    char operation;
    bool opertorFlag = true; // used for input validation
    while (opertorFlag)
    {
        printf("%s", "Please Enter operation to be performed (+, -, *, /): \n");
        scanf(" %c", &operation);

        if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
        {
            opertorFlag = false;
        }
        else
        {
            puts("Invalid operator. Please enter a valid operation (+, -, *, /): ");
            opertorFlag = true;
        }
    }
    return operation;
}

// Number input validation
double numberValidation(double number){
    bool validInput = false;
    while (!validInput){
        if (scanf("%lf", &number) == 1) {
            printf("%s %.2lf\n","You entered", number);
            validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

