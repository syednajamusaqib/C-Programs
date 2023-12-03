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
            if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
}

void merge(int arr1[], int arr2[], int size1, int size2){
    int i = 0;
    int j = 0;
    int arr3[size1+size2];
    int k = 0;
    int dup = 0;
    while(i<size1 || j<size2 ){
        if(arr1[i] == arr2[j]){
            dup++;
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    puts("Array after merging is : ");
    for(int i = 0; i < size1+size2-dup; i++){
        printf("%d ", arr3[i]);
    }
}


int main(void) {

    int arr1[100];
    int size1;
    int arr2[100];
    int size2;

    puts("Enter size of 1st array");
    size1 = numberValidationsize(size1);

    puts("Enter elements of array");
    for(int i = 0; i < size1; i++){
        arr1[i] = numberValidation(arr1[i]);
    }

    puts("Enter size of 2nd array");
    size2 = numberValidationsize(size2);

    puts("Enter elements of array");
    for(int i = 0; i < size2; i++){
        arr2[i] = numberValidation(arr2[i]);
    }

    sort(arr1, size1);
    sort(arr2, size2);
    merge(arr1, arr2, size1, size2);



    return 0;
}