    #include<stdio.h>
    int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    switch(n>=0){
    case 1:
    n=-n;
    printf("Number becomes %d\n",n);
    break;
    case 0:
    n=-(n);
    printf("Number becomes %d\n",n);
    break;
    }
    return 0;
    }