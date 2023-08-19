#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (n%5==0){
        printf("It is devided by 5 ");
    }
    else{
        printf("It is not devided by 5");
    }
     return 0;
}