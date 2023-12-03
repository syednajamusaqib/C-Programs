#include <stdio.h>
#include <stdbool.h>

// It will only accept positive integers 
int numberValidationSize(int number) {
    bool validInput = false;
    while (!validInput) {
        if (scanf("%d", &number) == 1) {
            if(number <= 0){
                puts("Please enter a valid size: ");
            }
            else{
            validInput = true;
            }
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

// It will only accept integers either positive or negative
int numberValidation(int number) {
    bool validInput = false;
    while (!validInput) {
        if (scanf("%d", &number) == 1) {
            validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}


unsigned long findSum(int arr[], int size){
    // int size = sizeof(arr) / sizeof(arr[0]);
    unsigned long sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(void) {
    printf("Enter size of the array: \n");
    int SIZE = numberValidationSize(SIZE);

    // scanf("%d",&SIZE);

    int arr[SIZE];

    puts("Enter elements of array: ");
    for(int i = 0;i<SIZE;i++){
        arr[i] = numberValidation(arr[i]);
    }
    puts("Your Array is: ");
    printArray(arr,SIZE);

    unsigned long sum = findSum(arr,SIZE);

    printf("\nSum of elements of array is: %lu",sum);





    

    return 0;
}