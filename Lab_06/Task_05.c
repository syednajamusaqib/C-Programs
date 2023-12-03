#include <stdio.h>
#define SIZE 100
void vowelsOrConsonants(char str[]){
    int i = 0;
    int cons = 0;
    int vowel = 0;
    while(str[i] != '\0'){
        if((str[i] >= 'A' && str[i] <='Z') || (str[i] >= 'a' && str[i] <='z')){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }
        else{
            cons++;
        }
        }
        i++;
        
    }

    printf("Vowels are %d Consonants are %d",vowel,cons);
}

int main(void) {
    
    char str[SIZE];

    puts("Enter String: ");

    scanf("%[^\n]",str);

    vowelsOrConsonants(str);

    return 0;
}