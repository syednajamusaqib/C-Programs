#include <stdio.h>
#define SIZE 100

int length(char str[]){
    int  i = 0;
    int count = 0;
    while(str[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(void) {
    
    char str[SIZE];

    puts("Enter String: ");

    scanf("%[^\n]",str);

    int len = length(str);

    printf("Length of string is %d", len);
    

    return 0;
}