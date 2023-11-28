#include <stdio.h>
#include <stdbool.h>
int main(void){
    int number;
    while(true){
    printf("%s","Enter number : ");
    scanf("%d",&number);
    // int count = number;
    int sum = 0;
    int count = 0;
    if(number<=0){
        printf("%s","Enter valid number!\n");
    }
    else{
    for(int i=1;count<number;i+=2){
        count++;
        printf("%d ",i);
        sum = sum + i;
    }
    }
    printf("\nSum of these numbers is %d \n",sum);
    }


    return 0;
}