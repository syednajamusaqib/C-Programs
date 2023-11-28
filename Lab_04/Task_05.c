#include <stdio.h>
#include <stdbool.h>

// Using simple technique of marking elements of array as -1
// It could also be done by using XOR (^) but mapping is intuitive method
void missingNumbers(int number){
    // Since we know we have to deal with only 10 elements
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    /*
    we will extract digits of number and every time we found a
    number in array we will mark that number as -1
    */

    while(number > 0){
        int digit = number % 10;
        array[digit] = -1; // marking the current digit as -1
        number /= 10;
    }
    puts("Missing numbers are: ");
    for(int i=0;i<10;i++){
        if(array[i] != -1){
            printf("%d  ",array[i]);
        }
    }
}

int numberValidation(int number) // input Validation
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




bool checkDistinctDigits(int num) { 
    int seen[10] = {0};  // Creating array to track digits just like mapping
    while (num > 0) { 
        int digit = num % 10; // Getting last digit
        if (seen[digit]) { // if that digit is present in array means it is not distinct than we will return
            return false;
        }
        seen[digit] = 1; // We will mark the seen digit 1 in array
        num /= 10; // dividing number to prevent infinite loop
    }
    return true;  // means we reached there and no non-distinct elements were found
}

int main() {

    int number; // this variable will be passed to validation function where user will give input
    while (checkDistinctDigits(number) == false){
        printf("Enter a distinct number between 0 to 9: ");
        number = numberValidation(number);
        if (checkDistinctDigits(number) == false) {
            printf("Invalid input. Please enter a distinct number.\n");
        }
    }
    missingNumbers(number);
    
    return 0;
}
