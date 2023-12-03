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

int largest(int arr[], int size){
    int largest = INT_MIN;
    for(int i = 0; i<size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargest(int arr[], int size){
    int largest = arr[0];
    int secLargest = INT_MIN;

    for(int i = 0; i<size;i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secLargest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
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
    int larg = largest(arr,size);
    int secLarg = secondLargest(arr,size);

    printf("Largest Element is : %d\n",larg);
    printf("Second Largest Element is : %d\n",secLarg);



    return 0;
}