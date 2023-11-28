#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int time_in_seconds;

    while (time_in_seconds != -1)
    {
        printf("%s", "Enter the number of days,-1 to exit: ");
        scanf("%d", &time_in_seconds);

        if (time_in_seconds <= 0)
        {
            printf("Enter Valid number\n");
        }
        if (time_in_seconds == -1)
        {
            printf("Program terminated successfully\n");
        }
        else
        {
            int hours;
            int minutes;
            int seconds;
            hours = time_in_seconds / 3600;
            time_in_seconds = time_in_seconds % 3600;
            minutes = time_in_seconds / 60;
            time_in_seconds = time_in_seconds % 60;
            seconds = time_in_seconds;
            printf("%d hours: %d minutes: %d seconds \n", hours, minutes, seconds);
        }
    }

    return 0;
}