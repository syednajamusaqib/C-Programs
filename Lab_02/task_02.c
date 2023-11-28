#include <stdio.h>
#include <math.h>

int main(void){

    int a;
    int b;
    int c;
    int decr;
    printf("%s\n", "Enter a: ");
    scanf("%d", &a);
    printf("%s\n", "Enter b: ");
    scanf("%d", &b);
    printf("%s\n", "Enter c: ");
    scanf("%d", &c);
    // if (scanf("%d", &number) == 1) {

    // }

    decr = (b*b)-(4*a*c);

    if(decr>=0){
        double root1;
        double root2;
        root1 = (-b + sqrt(decr))/(2*a);
        root2 = (-b - sqrt(decr))/(2*a);
        printf("%s %lf %lf","Roots are ",root1,root2);
    }
    else{
        printf("%s","Imaginary roots: ");
    }

    return 0;
}