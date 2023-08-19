#include <stdio.h>
int main (){
    float l,b,area,perimeter;
    printf("Enter the leangth of Rectangle : ");
    scanf("%f",&l);
     printf("Enter the breath of Rectangle : ");
    scanf("%f",&b);
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    if(area<perimeter){
        printf("area  is not greater than perimeter");
    }
    if(area==perimeter){
        printf("area and perimeterr is equal");
    }
     return 0;
    }