#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    switch (year % 100 == 0)
    {
    case 1:
        switch (year % 400 == 0)
        {
        case 1:
            printf("leap year as well as century year\n");
            break;
        case 0:
            printf("not a leap year\n");
            break;
        }
        break;
    case 0:
        switch (year % 4 == 0)
        {
        case 1:
            printf("leap year but not a century year");
            break;
        case 0:
            printf("not a leap year");
            break;
        }
        break;
    }
    return 0;
}