#include <stdio.h>
int main()
{
    int n, a, b, c;
    printf("Enter your choice\n");
    printf("0 Isosceles\n");
    printf("1 Right angled\n");
    printf("2 Equilateral\n");
    scanf("%d",&n);
    switch (n)
    {
    case 0:
        printf("Enter the sides \n");
        scanf("%d %d %d",&a, &b, &c);
        if (a == b || b == c)
        {
            printf("Isosceles");
        }
        else
            printf("not an Isosceles");
        break;
    case 1:
        printf("Enter the sides \n");
        scanf("%d %d %d", &a, &b, &c);
        if ((b * b == (a * a + c * c)) || (a * a == (b * b + c * c)) || (c * c == (a * a + b * b)))
            printf("Right Angled\n");
        else
            printf(" not an right angled\n");
        break;
    case 2:
        printf("Enter the sides \n");
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && b == c && a == c)
            printf("Equilateral\n");
        else
            printf("not an equilateral\n");
        break;
    }

    return 0;
}