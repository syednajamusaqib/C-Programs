#include <stdio.h>

void add_two(){
    float a;
    float b;
    printf("%s","Enter a number;\n");
    scanf("%f",&a);
    printf("%s","Enter a number;\n");
    scanf("%f",&b);
    int sum = a+b;
    printf("%d",sum);
}

void ascii(){
    char ch;
    printf("%s","Enter a character;\n");
    scanf("%c",&ch);
    printf("%s %d","ASCII value is ",ch);
}

void swap(){
    float x;
    float y;
    printf("%s","Enter first number \n");
    scanf("%f",&x);
    printf("%s","Enter second number: \n");
    scanf("%f",&y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("%s %.2f %s %.2f","First value is ",x,"Second is ",y);
}

void square(){
    int x;
    printf("%s","Enter number \n");
    scanf("%d",&x);
    int square =  x*x;
    printf("%d",square);
}

void even_numbers(){
    int x;
    printf("%s","Enter first number \n");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}

int main(void){

    


    return 0;
}