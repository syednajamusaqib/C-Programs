#include <stdio.h>
#include <stdbool.h>

int main(void){
    float Co_ordinate_point;

    printf("%s","Enter a point in XY ccoordinate system: \n");
    scanf("%f",&Co_ordinate_point);

    if(Co_ordinate_point >=0 && Co_ordinate_point<=90){
        printf("%s","The Point you entered lies in 1st Quadrant!\n");
    }
    else if((Co_ordinate_point <-270 && Co_ordinate_point>-360)){
        printf("%s","The Point you entered lies in 1st Quadrant!\n");
    }

    else if(Co_ordinate_point >90 && Co_ordinate_point<=180){
        printf("%s","The Point you entered lies in 2nd Quadrant!\n");
    }
    else if(Co_ordinate_point <-180 && Co_ordinate_point>=-270){
        printf("%s","The Point you entered lies in 2nd Quadrant!\n");
    }
    else if(Co_ordinate_point >180 && Co_ordinate_point<=270){
        printf("%s","The Point you entered lies in 3rd Quadrant!\n");
    }
    else if(Co_ordinate_point <-90 && Co_ordinate_point>=-180){
        printf("%s","The Point you entered lies in 3rd Quadrant!\n");
    }

    else if(Co_ordinate_point >270 && Co_ordinate_point<=360) {
        printf("%s","The Point you entered lies in 4th Quadrant!\n");
    }
    else if(Co_ordinate_point <=-1 && Co_ordinate_point>=-90){
        printf("%s","The Point you entered lies in 4th Quadrant!\n");
    }
    else{
        printf("%s","Enter Point Less than 361 and greater than -361");
    }


    



    return 0;
}