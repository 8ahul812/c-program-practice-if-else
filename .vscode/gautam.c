#include <stdio.h>
int main()
{
    float a,b,P,Q,R,S;
    printf("enter the first number=");
    scanf("%f",&a);
    printf("enter the second number=");
    scanf("%f",&b);
    P=a+b;
    Q=a-b;
    R=a*b;
    S=a/b;
    printf("The addition is:%.2f\n",P);
    printf("The Subtraction is:%.2f\n",Q);
    printf("The Multiplicition is:%.2f\n",R);
    printf("The Division is:%.2f",S);
    return 0;
}