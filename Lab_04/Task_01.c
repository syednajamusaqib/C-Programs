#include <stdio.h>
#include <stdbool.h>

int numberValidation(int number)
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

int countValidation(int number){
    while (true) {
        number = numberValidation(number);
        if (number >= 10000 && number <= 99999) {
            break;
        } else {
            printf("Invalid input. Please enter a five-digit number other than zero\n");
            while (getchar() != '\n');
        }
    }
    return number;
}


int main(void){

    puts("Enter a positive five digits number");
    int number = countValidation(number);

    printf("%s %d\n","Number is: ",number);

    // Sum of first and second last digit of given number
    int firstDigit = number / 10000; // since we are sure input number is five digit
    int secondLastDigit = number / 10;
    secondLastDigit %= 10; // getting second last digit

    printf("%s %d","Sum of first and second last digit is : ",firstDigit + secondLastDigit);
    return 0;
}