#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Year:");
    scanf("%d",&n);
    if (n%4==0){
        printf("It is a leap year ");
    }
    else{
        printf("It is not leap year");
    }
     return 0;
}