#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
int a,b;
printf("Enter your choice\n");

printf("1 Addition\n");
printf("2 Subtraction\n");

printf("3 Multiplication\n");
printf("4 Division\n");
printf("5 Exit\n");
scanf("%d",&n);
switch(n){
    case 1:
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nAddition is %d",a+b);
    break;
    case 2:
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nSubtraction is %d",a-b);
    break;
    case 3:
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nMultiplication is %d",a*b);
    break;
    case 4:
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nDivision is %d",a/b);
    break;
    case 5:
    exit(0);
}

return 0;
}