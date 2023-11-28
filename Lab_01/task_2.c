#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int num;

    while(true){
    printf("%s","Enter height of pyramid: ");
    scanf("%d",&num);

    if(num<0 || num==0){
        printf("%s","Enter Valid number\n");
    }
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}