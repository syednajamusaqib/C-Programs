#include <stdio.h>

int main(void){
    int number;


    while (number != -1)
    {
        printf("%s\n", "Enter a number,-1 to exit: ");
        scanf("%d", &number);

        if (number < 0 && number !=-1)
        {
            printf("Please enter a positive number.\n");
            continue;
        }
        if (number == -1)
        {
            printf("%s", "Program terminated successfully\n");
            continue;
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

            if (sum == number)
            {
                printf("%s", "It is perfect number\n");
            }
            else
            {
                printf("%s", "Not a perfect number\n");
            }
        }
    }

    return 0;
}