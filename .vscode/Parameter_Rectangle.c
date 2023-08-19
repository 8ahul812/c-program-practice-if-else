#include <stdio.h>
int main(){
float L,B,Parameter; // L - Leangth   ,   B - Breath
printf("Enter the length of rectangle:",L);
scanf("%f",&L);
printf("Enter the breath of rectangle:",B);
scanf("%f",&B);
Parameter=2*(L+B); //Fourmula of the parameter of rectangle
printf("The Parameter of the rectangle is=%f",Parameter);
    return 0;
}