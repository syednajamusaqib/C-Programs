#include <stdio.h>
#include <stdbool.h>

int numberValidation(int number){
    bool validInput = false;
    while (!validInput){
        if (scanf("%d", &number) == 1) {
            if(number <= 0){
                printf("%s","Enter positive number: \n");
            }
            else if(number>=0) validInput = true;
            printf("%s %d\n","You entered", number);
            // validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

void Lcm(){
    int num1;
    int num2;
    int max;

    printf("Enter first positive integer: ");
    num1 = numberValidation(num1);

    printf("Enter second positive integer: ");
    num2 = numberValidation(num2);

    if(num1 > num2){
        max = num1;
    }
    else{
        max = num2;
    }

    while (1) {
        if ((max % num1 == 0) && (max % num2 == 0)) {
            printf("The LCM of %d and %d is %d.", num1, num2, max);
            break;
        }
        ++max;
    }
}

int main() {

    Lcm();
    return 0;
}