#include <stdio.h>



void reverse(char str[]){
    int start = 0;
    int size = 0;
    while(str[size] != '\0') size++;
    int end = size - 1;
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s", str);

}

int main(void) {
    char str[100];
    puts("Enter a string:");
    scanf("%[^\n]",str);

    reverse(str);

    

    return 0;
}