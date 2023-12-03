#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int numberValidationSize(int number) {
    bool validInput = false;
    while (!validInput) {
        if (scanf("%d", &number) == 1) {
            if(number <= 0){
                puts("Please enter a valid size: ");
                // validInput = false;
            }
            else{
            // printf("%d\n","You entered", number);
            validInput = true;
            }
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}


int numberValidation(int number) {
    bool validInput = false;
    while (!validInput) {
        if (scanf("%d", &number) == 1) {
            // printf("%d\n","You entered", number);
            validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int occurence(int arr[], int size, int key){
    int occur = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            occur++;
        }
    }
    return occur;
}

int main(void) {

    puts("Please Enter size of array: ");
    int size = numberValidationSize(size);
    int arr[size];

    puts("Enter Elements of array: ");
    for(int i = 0; i < size; i++){
        arr[i] = numberValidation(arr[i]);
    }

    puts("You Entered: ");
    printArray(arr, size);
    puts("");

    puts("Enter Element to find occurneces: ");
    int key = numberValidation(key);

    int occur = occurence(arr, size, key);

    printf("Element occured %d times: ",occur);

    
    return 0;
}