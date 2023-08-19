#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first Side:");
    scanf("%d",&a);
    printf("Enter second Side:");
    scanf("%d",&b);
    printf("Enter third Side:");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("valid triangle");
    }
    else{
        printf("invalid triangle");
    }
    return 0;
}