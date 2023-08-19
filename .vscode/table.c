#include <stdio.h>
int main() {
    int num;  
    int i;
    printf("Enter the number:");
    scanf("%d",&num); 
    for (i = 1; i <= 10; i++) {
        int result = num * i;  
        printf("%d * %d = %d\n", num, i, result);
    }
return 0;
}