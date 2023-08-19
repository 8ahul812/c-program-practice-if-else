#include <stdio.h>
int main(){
    float L,B,Area;
    printf("Enter The Length of Rectangle:");
    scanf("%f",&L); // L - Length of Rectangle
    printf("Enter The Breath of Rectangle:");
    scanf("%f",&B); // B - Breath of Rectangle
    Area=L*B; //Fourmula of Area of Rectangle
    printf("The Area of Rectangle is=%f",Area);
    return 0;
}