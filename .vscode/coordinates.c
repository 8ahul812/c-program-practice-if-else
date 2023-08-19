#include <stdio.h>
int main(){
    int x,y; //coordinates
    printf("Enter the coordinate :");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Point is lies on origin");
    }
    else if(x==0){
        printf("point is lies on y-axis");
    }
    else if(y==0){
        printf("point is lies on x-axis");
    }
    else{
        printf("point is not on origin & x-axis & y-axis");
    }
    return 0;
}