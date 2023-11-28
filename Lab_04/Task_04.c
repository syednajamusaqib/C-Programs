#include <stdio.h>
#include <stdbool.h>

int numberValidationInt(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (scanf("%d", &number) == 1)
        {
            if (number < 0)
            {
                printf("%s", "Enter positive number: \n");
            }
            if (number >= 0)
                validInput = true;
        }
        else
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}


double numberValidation(double number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (scanf("%lf", &number) == 1)
        {
            if (number < 0)
            {
                printf("%s", "Enter positive number: \n");
            }
            if (number >= 0)
                validInput = true;
        }
        else
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}


double numberValidationAbs(double number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (scanf("%lf", &number) == 1)
        {
            validInput = true;
        }
        else
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}



double sqrt(double x){
    puts("Enter number to calculate squre root: ");
    x = numberValidation(x);
    long double r = x; // Make an initial guess
    while (r*r > x) // Making sure that square of number don't exceed actual number
        r = (r + x/r) / 2; // Apply formula to enhance guess
    return r;
}

int power(int number, int power){
    puts("Enter number to calculate power: ");
    number = numberValidationInt(number);
    puts("Enter power: ");
    power = numberValidationInt(power);
    unsigned long long answer = 1;
    if(number == 0){
        return 0;
    }
    else{
        for(int i=0;i<power;i++){
            answer *= number;
        }
        return answer;
    }

}

double absolute(double a){
    puts("Enter number to calculate absolute value: ");
    a = numberValidationAbs(a);
    if(a<0){
        return -a;
    }
    else{
        return a;
    }
}

double ceil(double number){
    puts("Enter number to calculate ceil value: ");
    number = numberValidationAbs(number);
    int intPart = (int)number;
    if(number == intPart) return number;
    if(number > 0){
        return (double)(intPart +  1);
    }
    else if(number < 0){
        return intPart;
    }
}

double floor(double number){
    puts("Enter number to calculate floor value: ");
    number = numberValidationAbs(number);
    int intPart = (int)number;
    if(number == intPart) return number;
    if(number < 0){
        return (double)(intPart-1);
    }
    else if(number > 0){
        return (double)(intPart);
    }
}




int main(void){

    // *******************Function 1**********************
    double num;
    double ans = sqrt(num);
    printf("Sqrt of given number is: %.3lf",ans);

    // *******************Function 2**********************
    // int a,b;
    // unsigned long long int ans= power(a,b);
    // printf("Answer is : %d",ans);

    // ******************Function 3***********************
    // double num;
    // double ans = absolute(num);
    // printf("Absoulute value is: %.2lf",ans);

    // ******************Function 4***********************
    // double num;
    // double ans = ceil(num);
    // printf("Ceil value is: %.2lf",ans);

    // ******************Function 5***********************
    // double num;
    // double ans = floor(num);
    // printf("Floor value is: %.2lf",ans);
    
    return 0;
}