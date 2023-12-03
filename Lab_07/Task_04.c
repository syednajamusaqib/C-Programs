#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char str1[], char str2[]){
    int size1 = 0;
    int size2 = 0;
    while(str1[size1] != '\0') size1++;
    while(str2[size2] != '\0') size2++;

    if(size1 != size2) return false;

    int frequency[256] = {0};

    for(int i = 0; i < size1; i++){
        frequency[str1[i]]++;
    }

    for(int i = 0; i < size2; i++){
        frequency[str2[i]]--;
    }

    for(int i = 0; i < 256; i++){
        if(frequency[i] != 0){
            return false;
        }
    }
    return true;
}

int main(void) {

    char str1[100];
    char str2[100];
    puts("Enter a string 1:");
    fgets(str1, 100, stdin);
    puts("Enter a string 2:");
    fgets(str2, 100, stdin);

    if(isAnagram(str1, str2)){
        puts("Yes");
    }else{
        puts("No");
    }

    return 0;
}