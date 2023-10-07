#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/*
Name = Syed Najam U Saqib
Roll No = BCSF22M015
*/

/* 
C program that takes two integers
as input and prints their sum.
*/
void sum(){
    int integer_1, integer_2;

    printf("%s", "Enter first number: ");
    scanf("%d", &integer_1);

    printf("%s", "Enter second number: ");
    scanf("%d", &integer_2);

    int sum = integer_1 + integer_2;

    printf("Sum of two numbers is: %d", sum);
}

// program that reads a character and prints it.
void print_char(){
    char character;
    printf("%s","Enter a character: ");
    scanf("%c",&character);

    printf("Character you entered is: %c",character);
}


/* 
program that reads a floating-point number
and prints it with two decimal places
 */
void print_float(){
    float float_num;
    printf("%s","Enter a floating-point number: ");
    scanf("%f",&float_num);

    printf("Number restricted to two decimal places is: %.2f",float_num);
}
/*
C program to convert temperature from Fahrenheit to Celsius
using the formula: Celsius = (Fahrenheit 32) / 1.8
*/
void far_to_celcius(){
    float temp;
    printf("%s","Enter temperature in Farenheit: ");
    scanf("%f",&temp);
    float celcius = (temp - 32)/1.8;
    printf("Temperature in Celcius is: %.2f",celcius);
}

/*
program that calculates the simple interest based on 
principal amount, rate, and time using (P*R*T)/100
*/
void interest()
{
    int princ_amount,interest_rate,time_in_year;
    printf("Enter Principal amount: ");
    scanf("%d",&princ_amount);

    printf("Enter Interest Rate: ");
    scanf("%d",&interest_rate);

    printf("Enter Time period in Years: ");
    scanf("%d",&time_in_year);

    float interest_formula = (princ_amount * interest_rate * time_in_year)/100;
    printf("Interest according to your details is: %.2f",interest_formula);
}

/*
C program to determine whether a given year is a leap year or not
*/
void leap_year()
{
    int year;
    printf("%s", "Enter a year: ");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%s", "Given Year is a leap Year");
    }
    else
    {
        printf("%s", "Not a leap year");
    }
}

/*
program that reads three integers and prints the largest of the three
*/

void largest_num(){
    int a,b,c;
    printf("%s","Enter first number: ");
    scanf("%d",&a);

    printf("%s","Enter second number: ");
    scanf("%d",&b);

    printf("%s","Enter third number: ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("{a=%d} is greater than other two!",a);
    }
    else if(b>a && b>c){
        printf("{b=%d} is greater than other two!",b);
    }
    else if(a==b&& b==c){
        printf("All three numbers are same!");
    }
    else{
        printf("{c=%d} is greater than other two!",c);
    }
}

/*
program that reads a character and checks if it's a vowel or a consonant
*/

void check_vowel()
{
    char character;
    printf("%s", "Enter a character: ");
    scanf("%c", &character);

    char low_vowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
    char upp_vowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');
    if(low_vowel || upp_vowel){
        printf("Given character is vowel!");
    }
    else{
        printf("%s","Given character is consonant");
    }
}

/*
program that reads a date (day, month, year) 
and prints it in the format: "DD/MM/YYYY"
*/

void date(){
    int date,month,year;
    printf("%s","Enter date in ** format and less than 32: ");
    scanf("%d",&date);

    printf("%s","Enter month in ** format and less than 13 : ");
    scanf("%d",&month);

    printf("%s","Enter year in **** format : ");
    scanf("%d",&year);

    printf("Date in Standard format is %d/%d/%d",date,month,year);

}

/*
program that reads a floating-point number and prints it in scientific notation
*/

void sci_notation(){
    float num;
    printf("%s","Enter a number : ");
    scanf("%f",&num);

    printf("Number in scientific Notation is %E ",num);
}

/*
a program that reads a student's exam score (out of 100) and 
assigns a grade based on the following
criteria:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
*/

void grade_calculator(){
    float marks;
    bool exit = true;
    while(exit){
        printf("%s","Enter your marks between 1-100! press -1 to exit :");
        scanf("%f",&marks);
        
        if(marks>=90 && marks<=100){
            printf("%s","Your grade is A\n");
        }
        else if(marks>=80 && marks<=89){
            printf("%s","Your grade is B\n");
        }
        else if(marks>=70 && marks<=79){
            printf("%s","Your grade is C\n");
        }
        else if(marks>=60 && marks<=69){
            printf("%s","Your grade is D\n");
        }
        else if(marks>=0 && marks <=59){
            printf("%s","Sorry! You Failed Better luck next time\n");
        }
        else if(marks==-1){
            exit = false;
        }
        else{
            printf("%s","Enter Valid marks!!\n");
        }
    }
}

/*
simple calculator program that reads two numbers and an 
operator (+, -, *, /) from the user and performs
the corresponding operation
*/

void calculator(){
    int num1,num2;
    char operator;

    printf("%s","Enter Operation (-,+,/,*)");
    scanf("%c",&operator);

    printf("%s","Enter first integer: ");
    scanf("%d",&num1);

    printf("%s","Enter Second integer: ");
    scanf("%d",&num2);

    int result;
    if(operator=='-'){
        result = num1 - num2;
    }
    else if(operator=='+'){
        result = num1 + num2;
    }
    else if(operator=='/'){
        result = num1 / num2;
    }
    else if(operator=='*'){
        result = num1 * num2;
    }
    printf("Your Result is %d",result);
}

/*
program that simulates a traffic light. It reads the 
color (red, yellow, green) and prints a message
indicating whether it's safe to go or should stop
*/

void traffic_simulator(){
    char signal[10];
    printf("%s","Enter color of traffic light --(red,green,yellow)-- : ");
    scanf("%s",signal);

    if(strcmp(signal,"red")==0){
        printf("%s","It's dangerous Stop! Otherwise you have to pay challan for it");
    }
    else if(strcmp(signal,"green")==0){
        printf("%s","Let's go It's safe to move on");
    }
    else{
        printf("%s","Slow down as signal is turning red");
    }
}

/*
program that reads an integer N and calculates its factorial 
(N!) using a for loop
*/

void factorial(){
    int number;
    printf("%s","Enter a number (<=0) to calculate its factorial: ");
    scanf("%d",&number);
    unsigned long product=1;
    for(int i=number;i>=1;i--){
        product *= i;
    }
    printf("Factorial is : %ld",product);
}

/*
program that reads an integer and prints its reverse. 
For example, if the input is 12345, the program
should print 54321
*/

void number_inverse()
{
    int number;
    printf("%s", "Enter a number : ");
    scanf("%d", &number);

    int digit;
    int reverse = 0;
    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    printf("Reversed number is %d ", reverse);
}

/*
program to print the following right-angled triangle pattern:
*
**
***
****
*****
*/

void print_triangle(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%s","*");
        }
        printf("%s","\n");
    }
}

/*
program that reads an integer and checks whether it's a 
palindrome (reads the same forwards and
backwards) using a for loop
*/

void check_palindrome(){
    int number;
    printf("%s", "Enter a number : ");
    scanf("%d", &number);
    int orig_number = number;
    int digit;
    int reverse = 0;
    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    if(orig_number==reverse){
        printf("%s","Given number is Palindrome");
    }
    else{
        printf("%s","Not a Palindrome");
    }
}

/*
number guessing game where the program generates a random number 
between 1 and 100, and the user has to guess it. Provide hints 
such as "Too low" or "Too high" after each guess. Use a while loop for the game
and include a condition to exit when the user guesses correctly
*/

void guessing_game()
{
    srand(time(0));
    int number, guessed_num;
    number = rand() % 100 + 1;
    int chances = 10;
    while (chances--)
    {
        printf("%s", "Guess a number between 1-100: ");
        scanf("%d", &guessed_num);

        if(guessed_num > number){
            printf("%s","Too high!\n");
        }

        else if(guessed_num < number){
            printf("%s","Too low!\n");
        }

        else if(guessed_num==number){
            printf("You Guessed it right! Number is %d\n",number);
            printf("You took %d chances to guess",10-chances);
            break;
        }
        if(chances==0){
            printf("Sorry! You lost Correct number is %d\n",number);
            break;
        }
        printf("%d chances left\n",chances);
    }
}

/*
program that prints the numbers from 1 to 100. For multiples of 3, 
print "Fizz" instead of the number. For multiples of 5, print "Buzz" 
instead. For numbers that are multiples of both 3 and 5, print "FizzBuzz."
*/

void fizz_buzz(){
    for(int i=1;i<=100;i++){
        if(i%3==0 && i%5==0){
            printf("%s","FizzBuzz\n");
        }
        else if(i%3==0){
            printf("%s","Fizz\n");
        }
        else if(i%5==0){
            printf("%s","Buzz\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}

/*
program to print a diamond pattern like the following:
  *
 ***
*****
 ***
  *
*/

void print_diamond(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=2;i>=1;i--){
        for(int j=1;j<=3-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}



int main(void)
{

    /*
    Call All the functions above to execute them.
    None of them will require any arguments.
    Task_1 --->   Call sum()
    Task_2 --->   Call print_char()
    Task_3 --->   Call print_float()
    Task_4 --->   Call far_to_celcius()
    Task_5 --->   Call interest()
    Task_6 --->   Call leap_year()
    Task_7 --->   Call largest_num()
    Task_8 --->   Call check_vowel()
    Task_9 --->   Call date()
    Task_10--->   Call sci_notation()
    Task_11--->   Call grade_calculator()
    Task_12--->   Call calculator()
    Task_13--->   Call traffic_simulator()
    Task_14--->   Call factorial()
    Task_15--->   Call number_inverse()
    Task_16--->   Call print_triangle()
    Task_17--->   Call check_palindrome()
    Task_18--->   Call guessing_game()
    Task_19--->   Call fizz_buzz()
    Task_20--->   Call print_diamond()
    */
    print_float();

    return 0;
}