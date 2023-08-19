#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%f",&n);
    if(n>0){
        printf("positive number");
    }
    else{
        printf("negative number");
    }
         return 0;
}