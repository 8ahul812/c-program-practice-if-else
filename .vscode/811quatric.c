#include <stdio.h>
int main(){
    float a,b,c,D;
    printf("Enter the number a : ");
    scanf("%f",&a);
    printf("Enter the number b : ");
    scanf("%f",&b);
    printf("Enter the number c : ");
    scanf("%f",&c);
    D=b*b-4*a*c;
    if(D>0){
        printf("The roots are real\n");
    }
    else if (D==0){
        printf("The roots are equal\n");
    }
    else{
        printf("The roots are imaginary\n");
    }
    return 0;
}