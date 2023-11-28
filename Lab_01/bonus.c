#include <stdio.h>

int main(void){

    int num;
    printf("%s","Enter number : ");
    scanf("%d",&num);
    int first = 0;
    int second = 1;
    int next;


    for(int i=0;i<num;i++){
        printf(" %d ",first);
        next = first + second;
        first = second;
        second = next;
    }
        return 0;
}
