// convert all uppercase letters to lowercase and viceversa in a given string(char array)
#include<stdio.h>
int finding_length(char string[]){
    int length = 0;
    while(string[length]!='\0'){
        length++;
        
    }
    return length;
}
void convert_lowercase(char array[],int length)
{
    for(int i=0;i<length;i++){
        if(array[i]>='A' && array[i]<='Z'){
            array[i] = array[i] + 32;
        }
    }

}
void uppercase(char array[],int length){
    for(int i=0;i<length;i++){
        if(array[i]>='a' && array[i]<='z'){
            array[i] = array[i] - 32;
        }
    }
    
}


int main()
{
    int min=200;
    char array[min];
    printf("Enter the string: \n");
    gets(array);



    
    int length = finding_length(array);
    printf("Converting lowercase: ");
    convert_lowercase(array,length);
    printf("%s \n",array);
    printf("Converting upper case: ");
    uppercase(array,length);
    printf("%s",array);





    return 0;
}
