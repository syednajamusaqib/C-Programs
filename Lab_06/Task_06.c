#include <stdio.h>
#include <stdbool.h>
#define SIZE 100


void toUpper(char str[SIZE]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'a' || str[i] <='z'){
            str[i] = str[i] - 32;
        }
        i++;
    }
    // str[i] = '\0';
    printf("%s", str);
    // return str;
}


// void toLower(char str[SIZE]){
//     int i = 0;
//     char new[SIZE] = toUpper(str);
//     while(new[i] != '\0'){
//         if(new[i] >= 'a' || new[i] <='z'){
//             new[i] = new[i] - 32;
//         }
//         i++;
//     }
//     // str[i] = '\0';
//     printf("%s", new);
// }

void string(char str[]){
    // int i = 0;
    // while(str[i] != '\0'){
        for(int i = 0;i<SIZE; i++){
        if((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a' && str[i] <='z')){
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] = str[i] + 32;
            // printf("%c", str[i]);
        }
        if(str[i] >= 'a' && str[i] <='z'){
            str[i] = str[i] - 32;
            // printf("%c", str[i]);
        }
        
    }
        // i++;
        }
    printf("%s", str);
    // }
    // str[i] = '\0';
}

// char isaplha(char str[],char newstr[]){
//     int a = 1;
//     if((str[i] >= 'A' || str[i] <='Z') && a==1){
//         str[i] = str[i] 
//     }
// }


int numberValidation(int number) {
    bool validInput = false;
    while (!validInput) {
        if (scanf("%d", &number) == 1) {
            if(number < 1 || number > 2){
                puts("Please Enter Valid Choice: ");
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

int main(void) {
    char str[SIZE];

    puts("Enter String: ");

    scanf("%[^\n]",str);

    // puts("1 for Upper to Lower");

    // int choice = numberValidation(choice);

    // fgets(str, SIZE,stdin);

    // if(choice == 1){
    //     toLower(str);
    // }
    // else{
        // toUpper(str);
    // }
    string(str);

    // int i = 0;
    // char new[SIZE] = toUpper(str);
    // while(new[i] != '\0'){
    //     if(new[i] >= 'a' || new[i] <='z'){
    //         new[i] = new[i] - 32;
    //     }
    //     i++;
    // }
    // // str[i] = '\0';
    // printf("%s", new);



    return 0;
}