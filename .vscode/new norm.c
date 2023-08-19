#include <stdio.h>
int main(){
float a,b,P,Q,R,S;
printf("enter the first number=");
scanf("%f",&a);
printf("enter the second number=");
scanf("%f",&b);
P=a+b;
Q=a-b;
R=a*b;
S=a/b;
printf("The addition is:%f\n",P);
printf("The Subtraction is:%f\n",Q);
printf("The Multiplicition is:%f\n",R);
printf("The Division is:%f",S);
return 0;
}