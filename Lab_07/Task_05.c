#include <stdio.h>
#include <stdbool.h>

int numberValidation(int number) {
    bool validInput = false;
    while (!validInput) {
        int scan = scanf("%d", &number);
        if (scan == 1) {
            // printf("%s %d\n","You entered", number);
            validInput = true;
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

int numberValidationsize(int number) {
    bool validInput = false;
    while (!validInput) {
        int scan = scanf("%d", &number);
        if (scan == 1) {
            if(number <=0){
                puts("Please enter valid size of array:");
            }else{
                validInput = true;
            }
        } else {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

void sort(int arr[],int size){
    for(int i = 0; i < size;i++){
        for(int j = 0; j < size-1; j++){
            if(arr[j] < arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
    puts("Array after sorting is: ");
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }

}

int main(void) {
    
    int arr[100];
    int size;

    puts("Enter size of array");
    size = numberValidationsize(size);

    puts("Enter elements of array");
    for(int i = 0; i < size; i++){
        arr[i] = numberValidation(arr[i]);
    }

    sort(arr,size);

    // for(int i = 0; i < size; i++){
    //     printf("%d ",arr[i]);
    // }

    return 0;
}