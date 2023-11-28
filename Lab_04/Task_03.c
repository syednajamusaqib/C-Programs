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

int powerFunction(int number, int power){
    

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


int main(void){
    int number,power;

    puts("Enter number whose power is to be calculated: ");
    number = numberValidation(number);

    puts("Enter power to be calculated: ");
    power = numberValidation(power);
    int ans = powerFunction(number,power);
    printf("%d raised to power %d is %d",number,power,ans);

    return 0;
}