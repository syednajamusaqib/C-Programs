#include <stdio.h>
#include <stdbool.h>

enum UserRole
{
    GUEST, // 0
    USER, // 1
    ADMIN //2
};

void authenticateUser(enum UserRole role)
{

    switch (role)
    {
    case GUEST:
        printf("Guest Detected: You have a Limited access\n");
        break;
    case USER:
        printf("User Detected: You have Access to basic operations\n");
        break;
    case ADMIN:
        printf("Admin Detected: You have Full access (DELETE, CREATE, UPDATE)\n");
        break;
    default:
        printf("Invalid role\n");
    }
}

int main()
{

    int role;
    bool validInput = false;
    printf("%s", "Enter your role in organization (0-> Guest, 1-> User, 2-> Admin)\n");
    while (!validInput)
    {
        if (scanf("%d", &role) == 1)
        {
            if (role < 0 || role > 2)
            {
                printf("%s", "Enter valid role: \n");
            }
            if (role == 0)
            {
                authenticateUser(GUEST);
                validInput = true;
            }
            if (role == 1)
            {
                authenticateUser(USER);
                validInput = true;
            }
            if (role == 2)
            {
                authenticateUser(ADMIN);
                validInput = true;
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid role.\n");
            while (getchar() != '\n');
        }
    }


    return 0;
}
