#include <stdio.h>

int main(void){
    int x;
    int y;
    // while(x!=-1){
        while(x!=-1 && y!=-1){
        printf("%s","Enter first number,-1 to exit: \n");
        scanf("%d",&x);
        // if((scanf("%d",&x)==1))
        if(x==-1){
            break;
        }
        printf("%s","Enter second number: \n");
        scanf("%d",&y);

        x = x+y;
        y = x-y;
        x = x-y;
        
    // }
        printf("%s %d %s %d\n","Value of x is",x,"Value of y is",y);
        }
    return 0;
}