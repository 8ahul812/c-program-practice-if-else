#include <stdio.h>
int main() {
    int num;  
    int i;
    printf("Enter the number:");
    scanf("%d",&num); 
    for (i = 100; i >0; i-=3) {
        int result = num + i; 
        printf(" %d",  result);
    }
return 0;
}