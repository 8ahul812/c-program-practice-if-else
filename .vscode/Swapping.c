#include <stdio.h>
int main() {
    int x, y, temp; // x and y is numbers
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    temp = x;
    x = y;
    y = temp;
    printf("Value of x is : %d\n",x);
    printf("Value of y is : %d\n",y);
    return 0;
}