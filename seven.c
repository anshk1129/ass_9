#include <stdio.h>
int main()
{
    float n, amount, total;
    printf("Enter your unit\n");
    scanf("%f", &n);
    switch (n <= 50)
    {
    case 1:
        amount = n * .50;
        break;
    case 0:
        switch (n <= 150)
        {

        case 1:
            amount = 25 + (n - 50) * 0.75;
            break;
        case 0:
            switch (n <= 250)
            {
            case 1:
                amount = 100 + (n - 150) * 1.20;
                break;
            case 0:
                amount = 220 + (n - 250) * 1.50;
                break;
            }
        }
    }
    total=amount+(amount*20)/100;
    printf("bill is %f",total);
    return 0;
}