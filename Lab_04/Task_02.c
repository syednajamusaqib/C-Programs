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
        if (number >= 1000 && number <= 9999) {
            break;
        } else {
            printf("Invalid input. Please enter a four-digit number other than zero\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

int main()
{   puts("Enter four digit number: ");
    int number = countValidation(number);
    int lastDigit = 0;
    int count = 1;
    int answer = 0;
    int divisor = 1000;
    while (count <= 4)
    {
        answer = answer * 10;
        lastDigit = number / divisor;
        lastDigit = lastDigit + 2;
        if (lastDigit >= 10)
        {
            lastDigit = lastDigit % 10;
        }
        answer = answer + lastDigit;
        number = number % divisor;
        divisor /= 10;
        count++;
    }

    printf("%s%04d","Number after adding 2 to every digit becomes: ", answer);
}