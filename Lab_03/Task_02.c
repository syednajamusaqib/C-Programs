#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int numberValidation(int number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (scanf("%d", &number) == 1)
        {
            if (number < 0)
            {
                printf("%s", "Enter positive number: \n");
            }
            else if (number >= 0)
                validInput = true;
        }
        else
        {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
        }
    }
    return number;
}

int binaryToDec()
{

    int n;

    printf("Enter binary number: ");
    n = numberValidation(n);

    int ans = 0;
    int power = 1;
    int digit;
    while (n != 0)
    {
        digit = n % 10;
        ans = digit * power + ans;
        n = n / 10;
        power *= 2;
    }
    return ans;
}

void hexToDecimal()
{
    char hex[50];
    long long decimal = 0, base = 1;
    int i = 0, value, length;

    printf("Enter hexadecimal number: ");
    scanf("%s", hex); 

    length = strlen(hex);

    for (i = length - 1; i >= 0; i--)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - '0') * base;
            // printf("%d\n",hex[i]);
            // printf("%d\n",decimal);
            base *= 16;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 'A' + 10) * base;
            // printf("%d\n",hex[i]);
            // printf("%d\n",decimal);
            base *= 16;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 'a' + 10) * base;
            // printf("%d",hex[i]);
            // printf("%d\n",decimal);
            base *= 16;
        }
    }

    printf("\ndecimal number = %d\n", decimal);
}

void decimalToHexa()
{
    int decimal_number;
    puts("Enter decimal number : ");
    decimal_number = numberValidation(decimal_number);
    int i = 1;
    int j;
    int temp;
    char hexa_Number[100];

    while (decimal_number != 0)
    {
        temp = decimal_number % 16;

        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i] = temp;
        i++;
        decimal_number = decimal_number / 16;
    }

    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
}

void binaryTohexa()
{
    int decimal_number = binaryToDec();
    int i = 1;
    int j;
    int temp;
    char hexa_Number[100];

    while (decimal_number != 0)
    {
        temp = decimal_number % 16;

        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i] = temp;
        i++;
        decimal_number = decimal_number / 16;
    }

    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
}

void hexaToBinary()
{
    char hexdec[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexdec);
    int i;
    if (hexdec[1] == 'x' || hexdec[1] == 'X')
    {
        i = 2;
    }
    else
    {
        i = 0;
    }

    while (hexdec[i])
    {

        switch (hexdec[i])
        {
        case '0':
            printf("0000");
            break;
        case '1':
            printf("0001");
            break;
        case '2':
            printf("0010");
            break;
        case '3':
            printf("0011");
            break;
        case '4':
            printf("0100");
            break;
        case '5':
            printf("0101");
            break;
        case '6':
            printf("0110");
            break;
        case '7':
            printf("0111");
            break;
        case '8':
            printf("1000");
            break;
        case '9':
            printf("1001");
            break;
        case 'A':
        case 'a':
            printf("1010");
            break;
        case 'B':
        case 'b':
            printf("1011");
            break;
        case 'C':
        case 'c':
            printf("1100");
            break;
        case 'D':
        case 'd':
            printf("1101");
            break;
        case 'E':
        case 'e':
            printf("1110");
            break;
        case 'F':
        case 'f':
            printf("1111");
            break;
        case '.':
            printf(".");
            break;
        default:
            printf("\nInvalid hexadecimal digit\n %c",hexdec[i]);
        }
        i++;
    }
}

int main()
{
    int choice;
    bool validInput = false;

    puts("---- This is a simple number conversion Program ----\n");
    puts("     -You have Following choices-\n");
    puts("1 for binary to hexadecimal conversion\n");
    puts("2 for decimal to hexadecimal conversion\n");
    puts("3 for hexadecimal to decimal conversion\n");
    puts("4 for hexadecimal to binary conversion\n");
    puts("======================================");

    // Get user input and validate it
    while (!validInput)
    {
        printf("Enter your choice: ");
        if (scanf("%d", &choice) == 1)
        {
            if (choice < 1 || choice > 4)
            {
                printf("Enter a valid choice between 1 and 4.\n");
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            printf("Invalid input. Please enter a valid choice.\n");
            while (getchar() != '\n');
        }
    }

    switch (choice)
    {
    case 1:
        binaryTohexa();
        break;
    case 2:
        decimalToHexa();
        break;
    case 3:
        hexToDecimal();
        break;
    case 4:
        hexaToBinary();
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }
    return 0;
}
