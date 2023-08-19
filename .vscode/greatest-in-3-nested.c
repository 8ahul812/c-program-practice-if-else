#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    if (a>b){//b to greatest nhi ho skta
        if(a>c)
            printf("%d is greatest",a);
        else //a<c
            printf("%d is greatest",c);
    }
    else{// b>a  -> a ab greatest nhi ho skta
        if(b>c)
            printf("%d is greatest",b);
        else
            printf("%d is greatest",c);    
    }
    return 0;
}