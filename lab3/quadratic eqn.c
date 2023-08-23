#include<stdio.h>
int main(){
    int x1,x2,a,b,c;
    printf("Enter the coefficient of quadratic equation:\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    x1=((-b+sqrt((b*b)-4*a*c))/2*a);
    x2=((-b-sqrt((b*b)-4*a*c))/2*a);
    printf("Your equation is %dx^2+%dx+%d and The root of the equation is %d and %d",a,b,c,x1,x2);
    return 0;



}
