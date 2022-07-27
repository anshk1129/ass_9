#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    switch(n%2==0){
        case 1:
        printf("next odd is %d",++n);
        break;
        case 0:
        printf("the number %d is  odd itself\n",n);
        break;
    }

    return 0;
}