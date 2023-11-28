#include <stdio.h>

int main(void)
{
    int number;

    while (number != -1)
    {
        printf("%s\n", "Enter a number,-1 to exit: ");
        scanf("%d", &number);
        // if (scanf("%d", &number) == 1) {
        // if(number==-1){
        //     break;
        // }

        if (number < 0)
        {
            printf("Please enter a positive number.\n");
        }
        if (number == -1)
        {
            printf("%s", "Program terminated successfully\n");
        }
        // }
        else
        {
            int sum = 0;
            for (int i = 1; i < number; i++)
            {
                if (number % i == 0)
                {
                    sum += i;
                }
            }

            if (sum > number)
            {
                printf("%s", "It is abundant number\n");
            }
            else
            {
                printf("%s", "Not an abundant number\n");
            }
        }
    }

    // int sum = 0;
    // for(int i=1;i<number;i++){
    //     if(number%i==0){
    //         sum += i;
    //     }
    // }

    // if(sum>number){
    //     printf("%s","It is abundant number\n");
    // }
    // else{
    //     printf("%s","Not an abundant number\n");
    // }

    return 0;
}