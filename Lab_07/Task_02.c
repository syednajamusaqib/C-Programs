#include <stdio.h>
#include <stdbool.h>

char toLower(char ch){
    if(ch >= 'A' && ch <='Z'){
            ch = ch + 32;
        }
    return ch;
}

bool isPalindrome(char str[]){
    int start = 0;
    int size = 0;
    while(str[size] != '\0') size++;
    int end = size - 1;
    while(start < end){
        
        if(toLower(str[start]) == toLower(str[end])){
            start++;
            end--;
        }
        else return false;
        
    }
    return true;
}



int main(void) {
    
    char str[100];
    puts("Enter a string:");
    scanf("%[^\n]",str);


    if(isPalindrome(str) == 1){
        puts("YES");
    }else{
        puts("NO");
    }

    return 0;
}