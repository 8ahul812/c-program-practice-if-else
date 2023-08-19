#include <stdio.h>
int main () {
float p,r,t,si;
printf ("Enter p :");
scanf ("%f",&p);
printf ("Enter r:");
scanf ("%f",&r);
printf ("Enter t:");
scanf ("%f",&t);

si = (p*r*t)/100;
printf("The si is :%f",si);
    return 0;
}