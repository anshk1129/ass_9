#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of month\n");
    scanf("%d", &n);
    switch (n)
    {
    case 0:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("days are 31");
        break;
    case 1:
    case 4:
    case 6:
    case 9:
    case 11:
        printf("days are 30");
        break;
    default:
        printf("days are 29 or 28");
    }
    return 0;
}