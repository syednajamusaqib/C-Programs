#include <stdio.h>

int words(char str[])
{
    int words = 0;
    int i = 0;
    int cut = 0;
    while(str[i] != '\0'){
        if((str[i] == ' ') || (str[i]=='\t') || str[i] == '\n'){
            cut = 0;
        }
        else if(cut == 0){
            cut = 1;
            words++;
        }
        i++;
    }

    return words;
}

int main(void)
{

    char str[100];
    puts("Enter a string:");
    scanf("%[^\n]", str);

    int word = words(str);

    printf("Number of words are %d", word);

    return 0;
}