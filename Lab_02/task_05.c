#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
    int a;
    int min = INT_MAX;
    int max = INT_MIN;
    int count;
    printf("%s","Enter count of numbers\n");
    scanf("%d",&count);


    while(count--){
        printf("%s","Enter number\n");
        scanf("%d",&a);
        if(min > a){
            min = a;
        }   
        if(max < a){
            max = a;
        }  
    }
    printf("%s %d %s %d","Largest is ",max,"Smallest is ",min);

    
    return 0;
}