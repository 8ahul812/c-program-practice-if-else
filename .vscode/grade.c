#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>80)
        printf("A Grade");
    else if(n>60)
        printf("B Grade");
    else if(n>40)
        printf("C Grade");
    else
        printf("Fail");        
    return 0;
}